#!/usr/bin/env python3
"""Reconstruct compressed initialized RAM using each S22 image's own routine.

Offline only: no device I/O and no peripheral emulation. Executes only the
identified data decompressor, not reset/main. Requires unicorn.
"""
import argparse
import hashlib
import json
import re
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_THUMB
from unicorn.arm_const import UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2

BASE = 0x08008000


def restore(data):
    candidates = []
    for off in range(0, len(data) - 31, 4):
        source, dest, size, function = struct.unpack_from('<4I', data, off)
        source2, dest2, size2, function2 = struct.unpack_from('<4I', data, off + 16)
        if (BASE <= source < BASE + len(data) and dest == 0x20000000
                and 0 < size < 0x10000 and function == 0x0800816c
                and dest2 == dest + size and function2 == 0x080081c8):
            candidates.append((off, source, dest, size, function))
    if len(candidates) != 1:
        raise ValueError(f'Expected exactly one known scatter record, got {candidates}')
    off, source, dest, size, function = candidates[0]
    u = Uc(UC_ARCH_ARM, UC_MODE_THUMB)
    u.mem_map(0x08000000, 0x80000)
    u.mem_write(BASE, data)
    u.mem_map(0x20000000, 0x20000)
    u.reg_write(UC_ARM_REG_SP, 0x2001f000)
    u.reg_write(UC_ARM_REG_LR, 0x08070001)
    for reg, value in [(UC_ARM_REG_R0, source), (UC_ARM_REG_R1, dest), (UC_ARM_REG_R2, size)]:
        u.reg_write(reg, value)
    u.emu_start(function | 1, 0x08070000, count=1000000)
    if u.reg_read(UC_ARM_REG_PC) != 0x08070000:
        raise RuntimeError('Decompressor did not return within instruction limit')
    ram = bytes(u.mem_read(dest, size))
    model_strings = [{'address': hex(dest + m.start()), 'text': m.group().decode()}
                     for m in re.finditer(rb'[ -~]{4,}', ram)
                     if b'KS-' in m.group() or b'KSN-' in m.group()]
    return ram, {'source_sha256': hashlib.sha256(data).hexdigest(),
                 'scatter_record_offset': hex(off), 'compressed_source': hex(source),
                 'ram_base': hex(dest), 'ram_size': size, 'decompressor': hex(function),
                 'initialized_ram_sha256': hashlib.sha256(ram).hexdigest(),
                 'model_strings': model_strings}


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('images', type=Path, nargs='+')
    p.add_argument('--output-dir', type=Path, required=True)
    args = p.parse_args()
    args.output_dir.mkdir(parents=True, exist_ok=True)
    reports = []
    for image in args.images:
        ram, report = restore(image.read_bytes())
        report['image'] = image.name
        (args.output_dir / (image.stem + '-initialized-ram.bin')).write_bytes(ram)
        reports.append(report)
        print(image.name, report['model_strings'])
    (args.output_dir/'reports.json').write_text(json.dumps(reports, indent=2)+'\n')


if __name__ == '__main__':
    main()
