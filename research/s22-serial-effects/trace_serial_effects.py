#!/usr/bin/env python3
"""Bounded execution of unmodified S22 Thumb serial parsers, with static startup evidence."""
import hashlib
import json
import re
import struct
from pathlib import Path

from unicorn import Uc, UC_ARCH_ARM, UC_MODE_THUMB, UC_HOOK_CODE, UC_HOOK_MEM_WRITE
from unicorn.arm_const import UC_ARM_REG_PC, UC_ARM_REG_LR, UC_ARM_REG_R0, UC_ARM_REG_SP

ROOT = Path(__file__).resolve().parents[2]
OUT = Path(__file__).with_name('evidence.json')
BASE = 0x08008000
RAM_BASE = 0x20000000
SENTINEL = 0x2000f000
SPEC = {
    235: dict(parser=0x0800f250, default=0x0800eadc, loader=0x08021c0c,
              serial=0x200031f6, failure=0x200006ca, bit=0x200030da,
              marker=0x20003298, config=0x20003194, range=('KSSA01','KSSA09'),
              set_pointer=0x08016874, consumer_start=0x08016702,
              consumer_end=0x08016734),
    241: dict(parser=0x0800f438, default=0x0800ecc0, loader=0x080225b8,
              serial=0x200031fa, failure=0x200006ce, bit=0x200030de,
              marker=0x2000329c, config=0x20003198, range=('KSSA01','KSSA09'),
              set_pointer=0x080163ec, consumer_start=0x0801627a,
              consumer_end=0x080162ac),
}


def read(uc, addr, n):
    return int.from_bytes(uc.mem_read(addr, n), 'little')


def execute(image, initial_ram, spec, serial, prior_bus_value=4321):
    uc = Uc(UC_ARCH_ARM, UC_MODE_THUMB)
    uc.mem_map(0x08000000, 0x40000)
    uc.mem_write(BASE, image)
    uc.mem_map(RAM_BASE, 0x10000)
    uc.mem_write(RAM_BASE, initial_ram)
    assert len(serial) < 18
    uc.mem_write(spec['serial'], serial.encode('ascii').ljust(18, b'\0'))
    uc.mem_write(0x20000334, struct.pack('<I', prior_bus_value))
    uc.mem_write(spec['bit'], struct.pack('<H', 0x1357))
    writes = []
    executed = []
    def on_code(u, address, size, _):
        executed.append(address)
        if address == SENTINEL:
            u.emu_stop()
    def on_write(u, access, address, size, value, _):
        writes.append(dict(pc=hex(u.reg_read(UC_ARM_REG_PC)), address=hex(address),
                           size=size, value=hex(value & ((1 << (size*8))-1))))
    uc.hook_add(UC_HOOK_CODE, on_code)
    uc.hook_add(UC_HOOK_MEM_WRITE, on_write)
    uc.reg_write(UC_ARM_REG_SP, 0x2000ef00)
    uc.reg_write(UC_ARM_REG_LR, SENTINEL | 1)
    uc.reg_write(UC_ARM_REG_R0, spec['serial'])
    uc.emu_start(spec['parser'] | 1, SENTINEL + 2, count=400)
    assert executed[-1] == SENTINEL and len(executed) < 400
    observed = {
        'return': uc.reg_read(UC_ARM_REG_R0),
        'bus_limit_set': read(uc, 0x20000334, 4),
        'rejection_flag': read(uc, spec['failure'], 1),
        'bit_0x800': bool(read(uc, spec['bit'], 2) & 0x800),
        'instruction_count': len(executed)-1,
        'writes': writes,
    }
    return observed


def listing_slice(asm, start, end):
    lines=[]
    for line in asm.splitlines():
        m = re.match(r'([0-9a-f]{8})  ', line)
        if m and start <= int(m.group(1),16) < end:
            lines.append(line)
    return lines


def main():
    evidence={'scope': 'offline original Thumb parser only; RAM seeded from extracted initialization; artificial serials and sentinel prior bus value', 'versions': {}}
    for v, spec in SPEC.items():
        image=(ROOT/f's22-developer-pack/firmware/decrypted/S22-v{v}-decrypted.bin').read_bytes()
        ram=(ROOT/f's22-platform-research/initialized-data/S22-v{v}-decrypted-initialized-ram.bin').read_bytes()
        asm=(ROOT/f'decompiled/v{v}/listing.asm').read_text()
        diag=json.loads((ROOT/f's22-developer-pack/diagnostics/S22-v{v}-decrypted-diagnostics.json').read_text())
        assert diag['sha256'] == hashlib.sha256(image).hexdigest()
        assert [x['value_address'] for x in diag['records'] if x['name']=='BuscurLimit_set']==['0x20000334']
        cases={
            'accepted_01': 'KSSA01TEST',
            'accepted_02': 'KSSA02TEST',
            'accepted_09': 'KSSA09TEST',
            'invalid_prefix_02': 'NOPE02TEST',
            'invalid_lower_02': 'KSSB02TEST',
            'invalid_00': 'KSSA00TEST',
            'invalid_10': 'KSSA10TEST',
            'blank': '',
        }
        observations={key:execute(image,ram,spec,s) for key,s in cases.items()}
        for key in ['accepted_01','accepted_02','accepted_09']:
            assert observations[key]['return']==1
        for key in ['invalid_prefix_02','invalid_lower_02','invalid_00','invalid_10','blank']:
            assert observations[key]['return']==0
        for key in cases:
            assert observations[key]['bus_limit_set']==(8000 if cases[key][4:6]=='02' else 4321)
            assert observations[key]['bit_0x800']==(observations[key]['return']==0)
        parser_lines=listing_slice(asm,spec['parser'],spec['parser']+0x8c)
        default_lines=listing_slice(asm,spec['default'],spec['default']+0x5c)
        loader_lines=listing_slice(asm,spec['loader'],spec['loader']+0x58)
        assert any('0x1f40' in x for x in parser_lines)
        assert any('bl 0x%08x'%spec['default'] in x for x in loader_lines)
        assert sum('bl 0x%08x'%spec['parser'] in x for x in loader_lines)==3
        assert any('0x12' in x for x in default_lines)
        consumer_lines=listing_slice(asm,spec['consumer_start'],spec['consumer_end'])
        assert any('['+hex(spec['set_pointer']).replace('0x','0x0')+']' in x for x in consumer_lines)
        occurrences=[BASE+i for i in range(len(image)) if image.startswith(struct.pack('<I',0x20000334),i)]
        assert occurrences==sorted([spec['parser']+(0x98 if v==235 else 0x98), spec['set_pointer'],
                                    0x08026e9c if v==235 else 0x080278bc])
        # Repeat the original parser after an invalid 02 and serial clearing: it has no reset branch.
        repeated=execute(image,ram,spec,'', prior_bus_value=observations['invalid_prefix_02']['bus_limit_set'])
        assert repeated['return']==0 and repeated['bus_limit_set']==8000
        evidence['versions'][str(v)]={
            'sha256': {'application':hashlib.sha256(image).hexdigest(), 'initialized_ram':hashlib.sha256(ram).hexdigest()},
            'parser':hex(spec['parser']), 'default':hex(spec['default']), 'loader':hex(spec['loader']),
            'serial_buffer':hex(spec['serial']), 'bus_limit_set':hex(0x20000334),
            'synthetic_cases':cases, 'observations':observations,
            'repeat_parser_after_serial_clear':repeated,
            'application_pointer_occurrences_to_bus_limit_set':[hex(p) for p in occurrences],
            'original_instructions':{'parser':parser_lines,'default_initial':default_lines,
                                     'loader_initial':loader_lines,'limit_derivation':consumer_lines},
        }
    OUT.write_text(json.dumps(evidence,indent=2,ensure_ascii=False)+'\n')
    print('verified original Thumb parser v235/v241; wrote',OUT.relative_to(ROOT))


if __name__=='__main__':
    main()
