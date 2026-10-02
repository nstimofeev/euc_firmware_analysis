"""Original-Thumb S22 charge boundaries. Inert MMIO; no physical board model."""
import hashlib
import json
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
sys.path.insert(0, str(ROOT / 's22-code-audit'))
from emulation import Machine, STOP  # noqa: E402
from unicorn import UC_HOOK_CODE, UC_HOOK_MEM_WRITE  # noqa: E402
from unicorn.arm_const import UC_ARM_REG_PC, UC_ARM_REG_R0  # noqa: E402

STATE = 0x2000066c
MMIO = (0x422101b0, 0x40011010, 0x40011014)
CONFIG = {
    237: {'entry': 0x0801b3b4, 'tail': 0x0801b9ae, 'percent': 0x0801785c,
          'percent_return': 0x0801b710, 'bms': (0x20004d39, 0x20004ef9),
          'late': (0x20003158, 0x20003159), 'pctbase': 0x20004ba4},
    241: {'entry': 0x0801b990, 'tail': 0x0801bf8a, 'percent': 0x08017450,
          'percent_return': 0x0801bcec, 'bms': (0x20005101, 0x20005409),
          'late': (0x2000315a, 0x2000315b), 'pctbase': 0x20004e24},
}


def put(m, address, value, fmt='<I'):
    m.put(address, value, fmt)


def run_case(version, name, changes, expected, *, edge=False, percent=None,
             tail_zero=False):
    c = CONFIG[version]
    m = Machine(version, mmio=True)
    # All tests enter the real function, including its pre-dispatch state-5 check.
    defaults = [
        (STATE, 2, '<B'), (0x20000648, 0, '<B'),
        (0x20000646, 0, '<h'), (0x2000064a, 1000, '<H'),
        (0x200034fe, 0, '<H'), (0x20000660, 0),
        (0x200030bc, 0), (0x20003152, 1, '<B'),
        (0x2000317b, 0, '<B'), (0x2000317c, 0, '<B'),
        (0x2000064c, 0), (0x20000650, 0), (0x20000654, 0),
        (0x20000658, 0), (0x2000065c, 0), (0x20000668, 0),
        (0x2000066e, 1 if edge else 0, '<B'),
        (0x2000066f, 0, '<B'), (0x20000670, 99, '<H'),
        (0x20000664, 77), (0x2000069a, 42, '<H'),
        (0x20000672, 0, '<B'), (0x20000673, 0, '<B'),
        (0x20000674, 0, '<B'), (0x20000675, 0, '<B'),
        (0x20000684, 0, '<B'), (0x20000685, 0, '<B'),
        (0x20000686, 0, '<B'), (0x2000069c, 0 if tail_zero else 1, '<B'),
        (0x2000069e, 26 if tail_zero else 0, '<B'),
        (0x2000069d, 26 if tail_zero else 0, '<B'),
        (0x200030f4, 0), (0x200030de, 0, '<H'),
        (0x200030e0, 0, '<H'),
        (c['bms'][0], 0, '<B'), (c['bms'][1], 0, '<B'),
        (c['late'][0], 0, '<B'), (c['late'][1], 0, '<B'),
        (0x20000678, 20000), (0x20000680, 100, '<H'),
    ]
    for a, v, *f in defaults + changes:
        put(m, a, v, f[0] if f else '<I')
    # A real percent routine in each image: nonzero status returns 255, whereas
    # status zero calculates the max of two percentage ratios capped at 100.
    pbase = c['pctbase']
    if percent == 255:
        put(m, pbase + 2, 1, '<B')
    elif percent is not None:
        put(m, pbase + 2, 0, '<B')
        if version == 237:
            fields = ((0x1c2, 0, '<B'), (0x15e, percent, '<H'),
                      (0x162, 100, '<H'), (0x31e, percent, '<H'),
                      (0x322, 100, '<H'))
        else:
            fields = ((0x30a, 0, '<B'), (0x2a6, percent, '<H'),
                      (0x2aa, 100, '<H'), (0x5ae, percent, '<H'),
                      (0x5b2, 100, '<H'))
        for off, v, f in fields:
            put(m, pbase + off, v, f)
    writes = []
    trace = {'tail_reached': False, 'percent_r0': []}

    def mem_write(u, access, address, size, value, user):
        if address == STATE or address in MMIO:
            writes.append({'pc': hex(u.reg_read(UC_ARM_REG_PC)),
                           'address': hex(address), 'size': size, 'value': value})

    def code(u, address, size, user):
        if address == c['tail']:
            trace['tail_reached'] = True
        if address == c['percent_return']:
            trace['percent_r0'].append(u.reg_read(UC_ARM_REG_R0))

    m.u.hook_add(UC_HOOK_MEM_WRITE, mem_write)
    m.u.hook_add(UC_HOOK_CODE, code)
    m.run(c['entry'], STOP, count=10000)
    result = {
        'version': version, 'case': name, 'entry': hex(c['entry']),
        'expected_state': expected, 'final_state': m.get(STATE, '<B'),
        'state_writes': [w for w in writes if w['address'] == hex(STATE)],
        'mmio_writes': [w for w in writes if w['address'] != hex(STATE)],
        **trace,
        'ram': {hex(a): m.get(a, fmt) for a, fmt in (
            (0x20000646, '<h'), (0x20000660, '<I'),
            (0x2000064c, '<I'), (0x20000650, '<I'),
            (0x20000654, '<I'), (0x20000658, '<I'),
            (0x2000065c, '<I'), (0x20000670, '<H'),
            (0x20000672, '<B'), (0x20000673, '<B'),
            (0x20000675, '<B'), (0x20000684, '<B'),
            (0x20000685, '<B'), (0x20000686, '<B'),
            (0x200030de, '<H'), (0x200030e0, '<H'),
            (0x200030bc + 0xc2, '<B'))},
    }
    assert result['final_state'] == expected and trace['tail_reached'], result
    if edge:
        assert result['state_writes'][0]['value'] == 20, result
        assert result['ram'][hex(0x20000670)] == 0, result
    if percent is not None:
        assert trace['percent_r0'] and trace['percent_r0'][0] == percent, result
    if name == 'entry_5_preempts_pending_edge':
        assert [w['value'] for w in result['state_writes']] == [5], result
    if name == 'both_edges_write_20_twice':
        assert [w['value'] for w in result['state_writes']] == [20, 20], result
    if name == 'edge_then_tail_bitband_clear':
        bit_writes = [w['value'] for w in result['mmio_writes']
                      if w['address'] == hex(0x422101b0)]
        assert bit_writes == [1, 0], result
    return result


def main():
    rows = []
    for v in CONFIG:
        c = CONFIG[v]
        def add(name, changes, expected, **kw):
            rows.append(run_case(v, name, changes, expected, **kw))
        bat = (0x20003152, 1, '<B')
        # Signed voltage boundaries, with the previous counter value decisive.
        for counter, target, voltage, threshold in (
            (0x2000064c, 3, 0x30ee, 270500),
            (0x20000650, 4, 0x3265, 20)):
            add(f'2_to_{target}_counter_below', [(bat), (0x200030bc, voltage),
                (counter, threshold - 1)], 2)
            add(f'2_to_{target}_counter_at', [bat, (0x200030bc, voltage),
                (counter, threshold)], target)
            add(f'2_to_{target}_voltage_equal', [bat,
                (0x200030bc, voltage - 1), (counter, threshold)], 2)
        # Both disjuncts of the percent consumer, using the original routine.
        add('2_to_8_percent_255_below', [bat, (0x200030bc, 12000),
            (0x20000678, 11000), (0x20000654, 19)], 2, percent=255)
        add('2_to_8_percent_255_at', [bat, (0x200030bc, 12000),
            (0x20000678, 11000), (0x20000654, 20)], 8, percent=255)
        add('2_to_8_percent_80_at', [bat, (0x200030bc, 10000),
            (0x20000678, 11000), (0x20000680, 79, '<H'),
            (0x20000654, 20)], 8, percent=80)
        add('2_to_8_percent_80_equal_limit', [bat, (0x200030bc, 10000),
            (0x20000678, 11000), (0x20000680, 80, '<H'),
            (0x20000654, 20)], 2, percent=80)
        add('2_to_9_first_below', [(c['late'][0], 11, '<B'),
            (0x20000658, 49)], 2)
        add('2_to_9_first_at', [(c['late'][0], 11, '<B'),
            (0x20000658, 50)], 9)
        add('2_to_9_second_below', [(c['late'][1], 11, '<B'),
            (0x20000646, 601, '<h'), (0x2000065c, 199)], 2)
        add('2_to_9_second_at', [(c['late'][1], 11, '<B'),
            (0x20000646, 601, '<h'), (0x2000065c, 200)], 9)
        add('2_to_9_second_current_equal', [(c['late'][1], 11, '<B'),
            (0x20000646, 600, '<h'), (0x2000065c, 200)], 2)
        add('2_to_9_both', [(c['late'][0], 11, '<B'), (c['late'][1], 11, '<B'),
            (0x20000646, 601, '<h'), (0x20000658, 50),
            (0x2000065c, 200)], 9)
        # 1705 and 1706 ADC-scale samples give 11985 and 12002 respectively.
        for sample, old, expected in ((1705, 50, 2), (1706, 49, 2),
                                      (1706, 50, 5)):
            add(f'2_to_5_sample_{sample}_counter_{old}', [
                (0x20000648, 1, '<B'), (0x200034fe, sample << 4, '<H'),
                (0x20000660, old)], expected)
        add('entry_5_preempts_pending_edge', [
            (0x20000648, 1, '<B'), (0x200034fe, 1706 << 4, '<H'),
            (0x20000660, 50), (0x2000066e, 1, '<B')], 5)
        add('edge_remains_20', [], 20, edge=True)
        add('both_edges_write_20_twice', [(0x2000066f, 1, '<B')], 20,
            edge=True)
        add('edge_overwritten_by_3', [bat, (0x200030bc, 0x30ee),
            (0x2000064c, 270500)], 3, edge=True)
        add('edge_overwritten_by_4', [bat, (0x200030bc, 0x3265),
            (0x20000650, 20)], 4, edge=True)
        add('edge_overwritten_by_8', [bat, (0x200030bc, 12000),
            (0x20000678, 11000), (0x20000654, 20)], 8,
            edge=True, percent=255)
        add('edge_overwritten_by_9', [(c['late'][0], 11, '<B'),
            (0x20000658, 50)], 9, edge=True)
        add('edge_overwritten_by_6', [bat, (0x2000317b, 1, '<B'),
            (0x20000668, 100)], 6, edge=True)
        add('edge_then_tail_bitband_clear', [(0x20003152, 0, '<B'),
            (c['late'][0], 11, '<B'), (0x20000658, 50)], 9,
            edge=True, tail_zero=True)
    images = {}
    for v in CONFIG:
        path = ROOT / f's22-developer-pack/firmware/decrypted/S22-v{v}-decrypted.bin'
        images[str(path.relative_to(ROOT))] = hashlib.sha256(path.read_bytes()).hexdigest()
    result = {'scope': 'full original Thumb call through common tail; inert MMIO',
              'input_sha256': images, 'stubbed_helpers': [], 'cases': rows}
    output = HERE / 'evidence.json'
    output.write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n')
    print(f'{len(rows)} original-Thumb boundary cases passed: {output}')


if __name__ == '__main__':
    main()
