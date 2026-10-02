#!/usr/bin/env python3
"""Address-grounded KS16X identifier origin and flag trace; original Thumb spot checks.

Run from repository root: python research/ks16x-id-origin/trace_id_origin.py
Only reads immutable corpus binaries and writes evidence in this directory.
"""
import hashlib
import json
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB
from capstone.arm import ARM_OP_MEM, ARM_REG_PC
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_THUMB
from unicorn.arm_const import UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0, UC_ARM_REG_SP

ROOT = Path(__file__).resolve().parents[2]
OUT = Path(__file__).resolve().parent / 'evidence.json'
BASE = 0x08008000
RAM = 0x20000000
CONFIG = {
    212: dict(sha='e8d9514d4c83ebe58ff501b990634670d8428fdd60599d8f545242359d78bf1f',
              source=(0x0800e100, 0x0800e194), table=0x0801f338, base=0x20002ed0,
              id=0x20002f32, check=0x08018f40, flag=0x20000662, state=0x20002e66,
              reset=(0x08013e86, 0x08013ea6), consumers=((0x080147ea, 0x080147f6),
              (0x08014890, 0x08014898), (0x08017e92, 0x08017eaa), (0x0801ae32, 0x0801ae40))),
    220: dict(sha='46409227bface8b270334a779efb2308a34d32e826b3f88b893a3aaedbbe22f5',
              source=(0x0800e3d6, 0x0800e466), table=0x0801f6f8, base=0x20002ef0,
              id=0x20002f52, check=0x08019300, flag=0x2000067e, state=0x20002e86,
              reset=(0x080141e2, 0x08014202), consumers=((0x08014b54, 0x08014b60),
              (0x08014bfa, 0x08014c02), (0x0801825c, 0x08018274), (0x0801b1f2, 0x0801b200))),
    223: dict(sha='3a8c938c7325d63d9ea54845a99ec7d23c7a2b603a5149a7fdf245eb89d7f215',
              source=(0x0800e40a, 0x0800e49c), table=0x0801fb84, base=0x20002f00,
              id=0x20002f62, check=0x0801963c, flag=0x2000068e, state=0x20002e96,
              reset=(0x080144a2, 0x080144c2), consumers=((0x08014e3a, 0x08014e46),
              (0x08014ee0, 0x08014ee8), (0x08018598, 0x080185b0), (0x0801b64e, 0x0801b65c))),
}


def word(blob, addr):
    return struct.unpack_from('<I', blob, addr-BASE)[0]


def disasm(blob, start, end):
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    md.detail = True
    rows = []
    for ins in md.disasm(blob[start-BASE:end-BASE], start):
        row = dict(address=hex(ins.address), bytes=ins.bytes.hex(), mnemonic=ins.mnemonic,
                   operands=ins.op_str)
        for operand in ins.operands:
            if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                pool = ((ins.address + 4) & ~3) + operand.mem.disp
                row['literal_at'], row['literal_value'] = hex(pool), hex(word(blob, pool))
        rows.append(row)
    assert rows and int(rows[-1]['address'], 16) + len(bytes.fromhex(rows[-1]['bytes'])) == end
    return rows


def run_thumb(blob, cfg, candidate):
    emu = Uc(UC_ARCH_ARM, UC_MODE_THUMB)
    emu.mem_map(BASE, (len(blob) + 0xfff) & ~0xfff)
    emu.mem_write(BASE, blob)
    emu.mem_map(RAM, 0x10000)
    emu.mem_write(cfg['id'], candidate.ljust(20, b'\0'))
    emu.mem_write(cfg['state'], struct.pack('<H', 0x0855))
    emu.mem_write(cfg['flag'], b'\x77')
    if cfg['check'] == 0x0801963c:
        emu.reg_write(UC_ARM_REG_R0, cfg['id'])
    sentinel = 0x08008200
    emu.reg_write(UC_ARM_REG_SP, RAM + 0xff00)
    emu.reg_write(UC_ARM_REG_LR, sentinel | 1)
    emu.emu_start(cfg['check'] | 1, sentinel, count=300)
    assert emu.reg_read(UC_ARM_REG_PC) == sentinel
    return dict(candidate=candidate.decode('ascii'), returned=emu.reg_read(UC_ARM_REG_R0),
                state=hex(struct.unpack('<H', emu.mem_read(cfg['state'], 2))[0]),
                flag=emu.mem_read(cfg['flag'], 1)[0])


def trace(version, cfg):
    image = ROOT / 'ks16x/firmware' / f'KS-16X-v{version}-decrypted.bin'
    blob = image.read_bytes()
    assert hashlib.sha256(blob).hexdigest() == cfg['sha']
    assert cfg['base'] + 0x62 == cfg['id']
    table = [word(blob, cfg['table']+i*4) for i in range(2)]
    assert table == [0x0803c000, 0x0803c800]
    source = disasm(blob, *cfg['source'])
    assert len([x for x in source if x['mnemonic'] == 'strb' and '[r0, r1]' in x['operands']]) == 2
    assert sum(x['operands'] == 'r1, #0x14' for x in source) == 2
    assert sum(x['operands'] == 'r0, #0x4b' for x in source) == 2
    assert sum(x['operands'] == 'r0, #0x53' for x in source) == 2
    assert sum(x.get('literal_value') == hex(cfg['base']) for x in source) == 2
    assert sum(x.get('literal_value') == hex(cfg['table']) for x in source) == 2
    reset = disasm(blob, *cfg['reset'])
    assert any(x.get('literal_value') == hex(cfg['flag']) for x in reset)
    assert any(x.get('literal_value') == hex(cfg['base']) for x in reset)
    consumers = [disasm(blob, *bounds) for bounds in cfg['consumers']]
    assert all(any(x.get('literal_value') == hex(cfg['flag']) for x in rows) for rows in consumers)
    upper = b'KS16X4' if version == 212 else b'KS16X9'
    cases = [b'KS16X0', b'KS16X1', b'KS16X4', b'KS16X9', b'KS16XA', b'JS16X1']
    checks = [run_thumb(blob, cfg, c) for c in cases]
    for c in checks:
        accepted = c['candidate'].encode() in (b'KS16X1', b'KS16X4', b'KS16X9') and c['candidate'].encode() <= upper
        assert c['returned'] == int(accepted)
        assert (int(c['state'], 16) & 0x800) == (0 if accepted else 0x800)
        assert c['flag'] == int(not accepted)
        assert int(c['state'], 16) == (0x0055 if accepted else 0x0855)
    return dict(version=version, image=str(image.relative_to(ROOT)), sha256=cfg['sha'],
                saved_flash_pointer_table=dict(address=hex(cfg['table']), copies=[hex(x) for x in table]),
                ram=dict(struct_base=hex(cfg['base']), identifier=hex(cfg['id']),
                         state_halfword=hex(cfg['state']), flag_byte=hex(cfg['flag'])),
                source_instructions=source, reset_instructions=reset,
                flag_consumer_instructions=consumers, original_thumb_checks=checks)


def main():
    result = dict(scope='Offline static trace and original Thumb emulation; Flash copy contents unavailable in corpus',
                  versions=[trace(v, cfg) for v, cfg in CONFIG.items()])
    OUT.write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n')
    print('PASS: 3 SHA-256 images, two saved Flash copy addresses per image, source/reset/consumer instruction assertions, 18 original-Thumb runs')


if __name__ == '__main__':
    main()
