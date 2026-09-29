#!/usr/bin/env python3
"""Reconstruct KS-16X initialized RAM from each image's own scatter record.

Offline, bounded emulation of the image's decompressor only; never executes reset
or application code. Requires unicorn. Fixed hashes guard the saved evidence.
"""
import argparse
import hashlib
import json
import re
import struct
from pathlib import Path

from unicorn import Uc, UC_ARCH_ARM, UC_MODE_THUMB
from unicorn.arm_const import UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2

ROOT = Path(__file__).resolve().parent
BASE = 0x08008000
EXPECTED = {
    212: ('e8d9514d4c83ebe58ff501b990634670d8428fdd60599d8f545242359d78bf1f',
          0x18498, 0x080204b8, 0x87c, '819339e4d577f7c837d18d201d93ef19dee51e9412953361fba4cb14a7cbe7c1'),
    220: ('46409227bface8b270334a779efb2308a34d32e826b3f88b893a3aaedbbe22f5',
          0x188ac, 0x080208cc, 0x89c, '896b184a6052c6f63316dfb369e70ebfe0e43ff1f6935eb681fe1782b976f883'),
    223: ('3a8c938c7325d63d9ea54845a99ec7d23c7a2b603a5149a7fdf245eb89d7f215',
          0x18d74, 0x08020d94, 0x8ac, '655406eb5deab20716930b9628bd161a53cbdbc4d9b9987aba43eb5385d55b7d'),
}


def digest(data):
    return hashlib.sha256(data).hexdigest()


def reconstruct(version):
    name = f'KS-16X-v{version}-decrypted.bin'
    data = (ROOT/'firmware'/name).read_bytes()
    source_hash, off, source, size, ram_hash = EXPECTED[version]
    if digest(data) != source_hash:
        raise ValueError(f'{name}: source hash differs from recorded evidence')
    record = struct.unpack_from('<8I', data, off)
    src, dest, n, function, zero_src, zero_dest, zero_n, zero_function = record
    if (src, dest, n, function) != (source, 0x20000000, size, 0x0800816c):
        raise ValueError(f'{name}: scatter record changed')
    if (zero_dest, zero_n, zero_function) != (dest+n, 0x56a4, 0x080081c8):
        raise ValueError(f'{name}: adjacent zero-fill record changed')
    # 0x08008138 ADR addresses the two relative offsets at image 0x164/0x168.
    # Bootstrap adds the literal address to each to delimit the scatter table.
    table_start, table_end = struct.unpack_from('<2I', data, 0x164)
    if (table_start+0x164, table_end+0x164) != (off, off+32):
        raise ValueError(f'{name}: bootstrap does not point to this scatter table')
    if not (BASE <= src < BASE+len(data) and BASE <= zero_src < BASE+len(data)):
        raise ValueError(f'{name}: scatter source outside image')
    # Demand a unique matching initialized-data record, not an arbitrary word hit.
    matches = [i for i in range(0, len(data)-31, 4)
               if struct.unpack_from('<4I', data, i) == (src, dest, n, function)
               and struct.unpack_from('<4I', data, i+16)[1:] == (zero_dest, zero_n, zero_function)]
    if matches != [off]:
        raise ValueError(f'{name}: scatter record not unique: {matches}')

    emu = Uc(UC_ARCH_ARM, UC_MODE_THUMB)
    emu.mem_map(0x08000000, 0x80000)
    emu.mem_write(BASE, data)
    emu.mem_map(0x20000000, 0x20000)
    emu.reg_write(UC_ARM_REG_SP, 0x2001f000)
    emu.reg_write(UC_ARM_REG_LR, 0x08070001)
    for reg, value in ((UC_ARM_REG_R0, src), (UC_ARM_REG_R1, dest), (UC_ARM_REG_R2, n)):
        emu.reg_write(reg, value)
    emu.emu_start(function | 1, 0x08070000, count=1000000)
    if emu.reg_read(UC_ARM_REG_PC) != 0x08070000:
        raise ValueError(f'{name}: decompressor did not return')
    ram = bytes(emu.mem_read(dest, n))
    if digest(ram) != ram_hash:
        raise ValueError(f'{name}: reconstructed RAM hash differs from recorded evidence')
    model_strings = [{'address': hex(dest+m.start()), 'text': m.group().decode()}
                     for m in re.finditer(rb'[ -~]{4,}', ram)
                     if b'KS-' in m.group() or b'KSN-' in m.group()]
    report = {'source_sha256': source_hash, 'scatter_record_offset': hex(off),
              'compressed_source': hex(src), 'ram_base': hex(dest), 'ram_size': n,
              'decompressor': hex(function), 'initialized_ram_sha256': ram_hash,
              'model_strings': model_strings, 'image': name}
    descriptors = json.loads((ROOT/'evidence'/f'diagnostics-v{version}.json').read_text())
    values = []
    for d in descriptors:
        off_d = int(d['record_offset'], 16)
        actual = struct.unpack_from('<4I', data, off_d)
        expected = tuple(int(d[k], 16) for k in ('value_address', 'metadata_raw', 'name_pointer', 'name_field_raw'))
        if actual != expected or d['width_candidate'] != ((actual[1] >> 8) & 255):
            raise ValueError(f'{name}: descriptor bytes differ at {off_d:#x}')
        if (actual[3] & 255) != len(d['name']):
            raise ValueError(f'{name}: descriptor name length differs at {off_d:#x}')
        addr = int(d['value_address'], 16)
        width = d['width_candidate']
        if not (dest <= addr and addr+width <= dest+n):
            continue
        ptr = int(d['name_pointer'], 16)
        if not (BASE <= ptr < BASE+len(data)) or data[ptr-BASE:ptr-BASE+len(d['name'])] != d['name'].encode():
            raise ValueError(f'{name}: descriptor name pointer mismatch at {d["record_offset"]}')
        raw = ram[addr-dest:addr-dest+width]
        values.append({'record_offset': d['record_offset'], 'name': d['name'],
                       'name_pointer': d['name_pointer'], 'value_address': d['value_address'],
                       'metadata_raw': d['metadata_raw'], 'width_bytes': width,
                       'raw_le': raw.hex(), 'unsigned_le': int.from_bytes(raw, 'little'),
                       'signed_le': int.from_bytes(raw, 'little', signed=True)})
    return ram, report, {'version': version, 'source_sha256': source_hash,
                         'initialized_ram_sha256': ram_hash, 'values': values}


def artifact(path, expected, write):
    if path.exists() and path.read_bytes() != expected:
        raise ValueError(f'{path}: existing artifact differs; refusing overwrite')
    if write and not path.exists():
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_bytes(expected)
    if not write and not path.exists():
        raise ValueError(f'{path}: missing artifact')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--check', action='store_true', help='Verify outputs without writing')
    args = parser.parse_args()
    outputs = [reconstruct(version) for version in EXPECTED]
    outdir = ROOT/'firmware'/'ram'
    for version, (ram, _, _) in zip(EXPECTED, outputs):
        artifact(outdir/f'KS-16X-v{version}-decrypted-initialized-ram.bin', ram, not args.check)
    artifact(outdir/'reports.json', (json.dumps([r for _, r, _ in outputs], indent=2)+'\n').encode(), not args.check)
    artifact(ROOT/'evidence'/'initial-values.json', (json.dumps([v for _, _, v in outputs], indent=2)+'\n').encode(), not args.check)
    print('Verified source and initialized RAM hashes for 2.12, 2.20, 2.23; '
          + ', '.join(f'{v}: {len(values["values"])} in-range descriptors' for v, (_, _, values) in zip(EXPECTED, outputs)))


if __name__ == '__main__':
    main()
