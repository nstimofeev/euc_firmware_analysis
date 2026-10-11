#!/usr/bin/env python3
"""Offline first slice: S22 mainboard current acquisition and BMS forwarding.

Executes original v2.41 mainboard instructions. This is NOT a BMS MCU emulator.
MMIO is inert memory; no wheel, UART or network is accessed.
"""
import hashlib
import json
import struct
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
sys.path.insert(0, str(ROOT / 's22-code-audit'))
from emulation import Machine, UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2

EXPECTED = {
    's22-developer-pack/firmware/decrypted/S22-v241-decrypted.bin':
        '99491754f5478caf5d97a5fa31c0a17bc7be55f0c14ee3f87058b55916fe9509',
    's22-platform-research/initialized-data/S22-v241-decrypted-initialized-ram.bin':
        'aaa8b3bc063cf1c0f7e200d01b6c1c204161abd764ad9b7dbce6048866a7ffea',
}


def truncdiv(a, b):
    return (abs(a) // abs(b)) * (-1 if (a < 0) != (b < 0) else 1)


def ascii_frame(data):
    payload = data.hex().upper()
    length = len(payload)
    check = (-sum((length >> n) & 15 for n in (0, 4, 8))) & 15
    body = f'25014600{(check << 12) | length:04X}' + payload
    return ('~' + body + f'{(-sum(body.encode())) & 65535:04X}\r').encode()


def run():
    for path, digest in EXPECTED.items():
        assert hashlib.sha256((ROOT / path).read_bytes()).hexdigest() == digest, path
    result = {'scope': 'Original S22 mainboard v2.41, not BMS firmware',
              'inputs_sha256': EXPECTED, 'stubbed_helpers': [], 'cases': []}
    m = Machine(241, mmio=True)
    m.run(0x0800c8e0)
    dma = {hex(a): hex(m.get(a, '<I')) for a in
           (0x40020008, 0x4002000c, 0x40020010, 0x40020014)}
    assert dma == {'0x40020008': '0x5a1', '0x4002000c': '0x9',
                   '0x40020010': '0x4001244c', '0x40020014': '0x200034f0'}
    result['dma_setup'] = {'entry': '0x0800c8e0', 'registers': dma,
                           'note': 'Inert MMIO, hardware transfers not simulated'}

    for adc, zero, old in ((2000, 2000, 0), (2100, 2000, 0),
                           (1900, 2000, 0), (2100, 2000, 100),
                           (1900, 2000, -100), (4095, 2048, 777)):
        m = Machine(241)
        m.put(0x200034f4, adc << 4, '<H')
        m.put(0x2000037c, zero, '<H')
        m.put(0x20000324, old)
        m.run(0x0800d978, end=0x0800d9a8)
        actual = m.get(0x20000324)
        expected = truncdiv(truncdiv((adc-zero)*38, 10) + 49*old, 50)
        assert actual == expected
        m.put(0x200032c4, 111)
        # Original filter block starts at 0x08020ba8 with r0 pointing to telemetry.
        m.run(0x08020ba8, end=0x08020bbe, regs={UC_ARM_REG_R0: 0x200032a8})
        filtered = m.get(0x200032c4)
        assert filtered == truncdiv(9*111 + actual, 10)
        result['cases'].append({'kind': 'mainboard_current', 'adc_12bit': adc,
                                'zero': zero, 'old_current_raw': old,
                                'current_raw': actual, 'BusCurrent': filtered})

    # The calibration sums 64+64 samples then divides the zero offset by 128.
    m = Machine(241, mmio=True)
    m.put(0x20000380, 1, '<B')
    m.put(0x20000381, 0, '<B')
    m.put(0x2000037c, 0)
    m.put(0x200034f4, 2048 << 4, '<H')
    for _ in range(127):
        m.run(0x0800c6b0)
    assert m.get(0x20000381, '<B') == 2
    m.run(0x0800c6b0)
    assert m.get(0x2000037c) == 2048
    result['calibration'] = {'entry': '0x0800c6b0', 'samples': 128,
                             'adc_12bit': 2048, 'zero_offset': m.get(0x2000037c)}

    for slot in (0, 1):
        for length in (93, 104):
            for raw in (0, 1000, 0xffff, 0x8000, 0xfc18):
                m = Machine(241)
                state = 0x20004e24 + slot*0x308
                m.put(state+1, 0x42, '<B')
                m.put(0x200032c4, 4321)
                payload = bytearray(length)
                payload[80:82] = struct.pack('>H', raw)
                payload[82:84] = struct.pack('>H', 12000)
                frame = ascii_frame(payload)
                m.u.mem_write(0x20018000, frame)
                m.run(0x08013d1c, regs={UC_ARM_REG_R0: slot,
                      UC_ARM_REG_R1: 0x20018000, UC_ARM_REG_R2: len(frame)})
                assert m.get(state+0x2a2, '<H') == raw
                assert m.get(state+0x2a4, '<H') == 12000
                assert m.get(0x200032c4) == 4321
                other_state = 0x20004e24 + (1-slot)*0x308
                assert m.get(other_state+0x2a2, '<H') == 0
                row = {'kind': 'BMS_response', 'slot': slot, 'payload_bytes': length,
                       'payload_current_raw': raw, 'state_current_address': hex(state+0x2a2),
                       'state_current_raw': m.get(state+0x2a2, '<H'),
                       'mainboard_BusCurrent_unchanged': m.get(0x200032c4)}
                if slot == 0:
                    m.put(0x200009d2, 0, '<B')
                    m.run(0x080178e8)
                    output = bytes(m.u.mem_read(0x200043be, 20))
                    assert output[16:18] == b'\xf1\0'
                    assert struct.unpack_from('<H', output, 4)[0] == raw
                    assert struct.unpack_from('<H', output, 2)[0] == 12000
                    row['forwarded_F1_page0'] = output.hex()
                result['cases'].append(row)

    (HERE/'evidence.json').write_text(json.dumps(result, indent=2)+'\n')
    print('PASS: DMA setup, 128-sample zero calibration, 6 current/filter cases, '
          '20 BMS parser cases and 10 F1 forwarding cases; no helper stubs.')


if __name__ == '__main__':
    run()
