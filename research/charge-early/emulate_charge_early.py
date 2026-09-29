"""Bounded original-Thumb execution of the v222/v223 charge state-1 path.

Only initialized RAM and inert MMIO are mapped. Stop before the shared tail;
the two one-instruction GPIO helpers execute as original code.
"""
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "s22-code-audit"))
from emulation import Machine  # noqa: E402
from unicorn import UC_HOOK_MEM_WRITE  # noqa: E402
from unicorn.arm_const import UC_ARM_REG_PC  # noqa: E402

STATE = 0x2000065c
COUNT = 0x20000684
SUM = 0x20000680
ADC = 0x200034a6
ZERO = 0x2000063a
STATUS = 0x20000638
CART = 0x20003140
BITBAND = 0x422101b0
PORT_SET = 0x40011010
PORT_RESET = 0x40011014
WATCH = {BITBAND, PORT_SET, PORT_RESET}
END = {222: 0x08014358, 223: 0x0801434a}


def case(version, cart, sample):
    m = Machine(version, mmio=True)
    m.put(STATE, 1, '<B')
    m.put(COUNT, 18, '<B')
    m.put(SUM, 0, '<I')
    m.put(ADC, sample << 4, '<H')
    m.put(CART, cart, '<B')
    # Sentinel helps distinguish absence of a write from a value left at zero.
    for addr in WATCH:
        m.put(addr, 0xaaaaaaaa, '<I')
    writes = []
    current = [None]

    def on_write(u, access, addr, size, value, user):
        if addr in WATCH:
            writes.append({'counter_before': current[0], 'pc': hex(u.reg_read(UC_ARM_REG_PC)),
                           'address': hex(addr), 'value': value, 'size': size})

    m.u.hook_add(UC_HOOK_MEM_WRITE, on_write)
    rows = []
    # 18->19 issues set writes; 19->20 through 38->39 collect 20 samples;
    # 39->40 calculates the average and issues a reset write.
    for before in range(18, 40):
        assert m.get(COUNT, '<B') == before
        current[0] = before
        m.run(0x080141f0, END[version])
        rows.append({'counter_before': before, 'counter_after': m.get(COUNT, '<B'),
                     'sum_after': m.get(SUM, '<I'), 'zero_after': m.get(ZERO, '<H'),
                     'status_after': m.get(STATUS, '<B'), 'state_after': m.get(STATE, '<B')})

    assert rows[-2]['sum_after'] == sample * 20
    assert rows[-1]['zero_after'] == sample
    assert rows[-1]['state_after'] == 2
    assert rows[-1]['status_after'] == (1 if 0x43a <= sample <= 0xcae else 2)
    assert [w['address'] for w in writes if w['counter_before'] == 18] == [hex(BITBAND), hex(PORT_SET)]
    assert [w['address'] for w in writes if w['counter_before'] == 39] == (
        [hex(PORT_RESET), hex(BITBAND)] if version == 222 and cart == 0 else [hex(PORT_RESET)])
    assert not [w for w in writes if 19 <= w['counter_before'] <= 38]
    return {'version': version, 'cartstep': cart, 'adc_shifted_sample': sample,
            'steps': rows, 'watched_mmio_writes': writes}


def main():
    cases = [case(v, cart, sample) for v in (222, 223) for cart in (0, 1)
             for sample in (1000, 1082, 2048, 3246, 3300)]
    output = Path(__file__).with_name('charge-early-emulation.json')
    output.write_text(json.dumps({'scope': 'state-1 only; inert MMIO; no physical board',
                                  'cases': cases}, indent=2) + '\n')
    print(f'{len(cases)} original-Thumb cases passed: {output}')


if __name__ == '__main__':
    main()
