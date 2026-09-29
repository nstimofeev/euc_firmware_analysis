#!/usr/bin/env python3
"""Read-only verification of saved KS-16X binaries and RAM evidence.

Run with a Python environment containing cryptography and unicorn. No network
or wheel access; no artifacts are written.
"""
import hashlib
import json
from pathlib import Path

from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

from intake import S22_KEY
from restore_initialized_data import ROOT, EXPECTED, artifact, reconstruct


def main():
    manifest = (ROOT/'SHA256SUMS.txt').read_text().splitlines()
    entries = [line.split('  ', 1) for line in manifest]
    assert len(entries) == 9 and len({name for _, name in entries}) == 9
    for expected, name in entries:
        assert hashlib.sha256((ROOT/name).read_bytes()).hexdigest() == expected, name
    reports = []
    values = []
    for version in EXPECTED:
        raw = (ROOT/'firmware'/f'KS-16X-v{version}-original.bin').read_bytes()
        dec = (ROOT/'firmware'/f'KS-16X-v{version}-decrypted.bin').read_bytes()
        decryptor = Cipher(algorithms.AES(S22_KEY), modes.CBC(bytes(16))).decryptor()
        assert decryptor.update(raw) + decryptor.finalize() == dec, version
        ram, report, initial = reconstruct(version)
        artifact(ROOT/'firmware'/'ram'/f'KS-16X-v{version}-decrypted-initialized-ram.bin', ram, False)
        reports.append(report)
        values.append(initial)
        assert all(item['width_bytes'] in (1, 2, 4) for item in initial['values'])
    artifact(ROOT/'firmware'/'ram'/'reports.json', (json.dumps(reports, indent=2)+'\n').encode(), False)
    artifact(ROOT/'evidence'/'initial-values.json', (json.dumps(values, indent=2)+'\n').encode(), False)
    print('PASS: nine binaries, AES decoding, 16X bootstrap/scatter reconstruction, '
          'RAM reports and named initial values')


if __name__ == '__main__':
    main()
