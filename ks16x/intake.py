#!/usr/bin/env python3
"""Fetch the official KS-16X catalog and locally inspect listed firmware.

No wheel I/O. Original and decrypted binaries are in firmware/.
Requires cryptography (the S22 key is a tested hypothesis, not an assumption).
"""
import argparse
import datetime as dt
import hashlib
import json
import re
import struct
import urllib.parse
import urllib.request
from pathlib import Path

from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

ROOT = Path(__file__).resolve().parent
ENDPOINT = 'https://www.kingsong.vip/index.php/api/firmware/getVersionInfo'
DOWNLOAD_ROOT = 'https://www.kingsong.vip/upload/firmware/'
S22_KEY = bytes.fromhex('11965c6c2a7d1a182b4ce22745d948bde2abca7f36e2b24a4bb23a292acf293f')
BASE_CANDIDATES = [0x08000000, 0x08004000, 0x08008000, 0x08010000]


def sha(data):
    return hashlib.sha256(data).hexdigest()


def get_catalog(version):
    fields = dict(firmwareName='KS-16X', firmwareVersion=str(version),
                  apiversions='1.39', lang='en', key='')
    req = urllib.request.Request(ENDPOINT, data=urllib.parse.urlencode(fields).encode(),
                                 headers={'User-Agent': 'KS16X-offline-analysis/1.0'})
    with urllib.request.urlopen(req, timeout=50) as response:
        raw = response.read()
        headers = dict(response.headers)
    obj = json.loads(raw)
    assert obj['status'] == '1' and obj['code'] == '100001' and isinstance(obj['data'], list)
    assert all(row['firmwareName'] == 'KS-16X' for row in obj['data'])
    return obj, raw, {'endpoint': ENDPOINT, 'method': 'POST', 'fields': fields,
                       'retrieved_utc': dt.datetime.now(dt.timezone.utc).isoformat(),
                       'http_status': 200, 'content_type': headers.get('Content-Type'),
                       'response_sha256': sha(raw)}


def vector_candidates(data):
    if len(data) < 64:
        return []
    sp, reset = struct.unpack_from('<II', data)
    result = []
    string_offsets = {m.start() for m in re.finditer(rb'[ -~]{5,}', data)}
    words = struct.unpack_from('<%dI' % (len(data)//4), data)
    for base in BASE_CANDIDATES:
        valid_sp = 0x20000000 <= sp < 0x20100000 and sp % 4 == 0
        valid_reset = base <= (reset & ~1) < base + len(data) and bool(reset & 1)
        vectors = struct.unpack_from('<16I', data)
        plausible_handlers = sum(base <= (v & ~1) < base + len(data) and bool(v & 1)
                                 for v in vectors[1:])
        string_pointer_references = sum(w-base in string_offsets for w in words)
        if valid_sp and valid_reset and plausible_handlers >= 8:
            result.append({'base': hex(base), 'initial_sp': hex(sp),
                           'reset_handler': hex(reset), 'plausible_handlers_of_15': plausible_handlers,
                           'string_pointer_references': string_pointer_references,
                           'first_16_vectors': [hex(v) for v in vectors]})
    return sorted(result, key=lambda v: v['string_pointer_references'], reverse=True)


def strings(data):
    return [{'offset': hex(m.start()), 'text': m.group().decode('ascii')}
            for m in re.finditer(rb'[ -~]{5,}', data)]


def diagnostics(data, base):
    """Find 16-byte parameter descriptors, including flash read-only fields."""
    out = []
    for off in range(0, len(data)-15, 4):
        value, meta, ptr, namefield = struct.unpack_from('<IIII', data, off)
        width = (meta >> 8) & 255
        length = namefield & 255
        value_plausible = (0x20000000 <= value < 0x20100000 or
                           0x08000000 <= value < 0x08100000)
        if not (value_plausible and 0 < width <= 8
                and 2 <= length <= 64 and base <= ptr < base + len(data)):
            continue
        raw = data[ptr-base:ptr-base+length]
        if len(raw) != length or not re.fullmatch(rb'[A-Za-z_][A-Za-z0-9_\[\]]{1,63}', raw):
            continue
        out.append({'record_offset': hex(off), 'value_address': hex(value),
                    'metadata_raw': hex(meta), 'name_pointer': hex(ptr),
                    'name_field_raw': hex(namefield), 'width_candidate': width,
                    'name': raw.decode('ascii')})
    return out


def run():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--offline', action='store_true', help='Reuse saved catalog and downloads')
    args = p.parse_args()
    evidence = ROOT/'evidence'
    local = ROOT/'firmware'
    evidence.mkdir(exist_ok=True)
    local.mkdir(exist_ok=True)
    if args.offline:
        catalog = json.loads((evidence/'catalog_version0.json').read_text())
    else:
        catalog, raw, query = get_catalog(0)
        (evidence/'catalog_version0.json').write_bytes(raw)
        (evidence/'query.json').write_text(json.dumps(query, indent=2, ensure_ascii=False)+'\n')
    rows = catalog['data']
    results = []
    for row in rows:
        v = row['versionNumber']
        release = {'version': v, 'file': row['file'], 'introduction': row['introduction'],
                   'createtime': row['createtime'], 'status': row['status'], 'useRange': row['useRange']}
        if not row['file']:
            release['download'] = None
            results.append(release)
            continue
        assert not row['file'].startswith('/') and '..' not in row['file'].split('/')
        url = DOWNLOAD_ROOT + urllib.parse.quote(row['file'], safe='/$')
        original = local/f'KS-16X-v{v}-original.bin'
        if args.offline:
            raw = original.read_bytes()
        else:
            with urllib.request.urlopen(url, timeout=90) as resp:
                raw = resp.read()
                assert resp.status == 200 and len(raw) > 1024
            original.write_bytes(raw)
        release['download'] = {'url': url, 'bytes': len(raw), 'sha256': sha(raw),
                               'local_name': original.name}
        candidates = [('as_downloaded', raw, vector_candidates(raw))]
        if len(raw) % 16 == 0:
            decryptor = Cipher(algorithms.AES(S22_KEY), modes.CBC(bytes(16))).decryptor()
            dec = decryptor.update(raw) + decryptor.finalize()
            encryptor = Cipher(algorithms.AES(S22_KEY), modes.CBC(bytes(16))).encryptor()
            assert encryptor.update(dec) + encryptor.finalize() == raw
            candidates.append(('s22_aes256_cbc_zero_iv_full_length', dec, vector_candidates(dec)))
        choice = next(((method, data, vc) for method, data, vc in candidates if vc), None)
        release['format_tests'] = [{'method': method, 'valid_vector_candidates': vc}
                                   for method, _, vc in candidates]
        if choice:
            method, image, vectors = choice
            base = vectors[0]['base']
            if method != 'as_downloaded':
                (local/f'KS-16X-v{v}-decrypted.bin').write_bytes(image)
            candidates_diag = diagnostics(image, int(base, 16))
            image_strings = strings(image)
            release['image'] = {'method': method, 'bytes': len(image), 'sha256': sha(image),
                                'base_candidate': base, 'vector': vectors[0],
                                'ascii_string_count': len(image_strings),
                                'diagnostic_candidate_count': len(candidates_diag),
                                'diagnostic_names': [r['name'] for r in candidates_diag],
                                'interesting_strings': [s for s in image_strings if re.search(
                                    r'KS[-_]|16X|gyro|battery|temp|alarm|error|volt|speed|curr',
                                    s['text'], re.I)][:80]}
            (evidence/f'diagnostics-v{v}.json').write_text(json.dumps(candidates_diag, indent=2)+'\n')
        else:
            release['image'] = None
        results.append(release)
    (evidence/'intake.json').write_text(json.dumps(results, indent=2, ensure_ascii=False)+'\n')
    print(json.dumps([{'version': r['version'], 'bytes': r.get('download', {}).get('bytes') if r['download'] else None,
                       'image': r['image']['method'] if r.get('image') else None,
                       'diagnostics': r['image']['diagnostic_candidate_count'] if r.get('image') else None}
                      for r in results], indent=2))


if __name__ == '__main__':
    run()
