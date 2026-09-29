"""Offline execution of the original BMS aggregation function (S22 2.29/2.31).

Only the periodic poll tail is bypassed by preloading its internal counter to 3;
the status-bit aggregation and warning state mutations are original Thumb code.
Mapped peripheral memory is inert. No motorcycle/wheel is involved.
"""
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 's22-code-audit'))
from emulation import Machine
from unicorn.arm_const import UC_ARM_REG_R0

VERSIONS = {
    229: dict(start=0x0801e660, status=0x20004b3f, tail=0x20004b4c,
              cue=0x08021ebe, beep=0x0800fd0e, log=0x08015040, misc=0x0800ea7a),
    231: dict(start=0x0801e7a4, status=0x20004b47, tail=0x20004b54,
              cue=0x08022172, beep=0x0800fd02, log=0x08015028, misc=0x0800ea6e),
}


def scenario(version, category, index, bit, pack=0):
    cfg = VERSIONS[version]
    m = Machine(version, mmio=True)
    m.put(0x200009b0, 3, '<B')  # bounded return after the aggregation
    m.put(0x200009a8, 0, '<I')
    m.put(0x200030ce, 0, '<H')
    for addr in range(0x2000311f, 0x20003142):
        m.put(addr, 0, '<B')
    for base in (cfg['status'], cfg['status'] + 0x1c0):
        for i in range(5):
            m.put(base+i, 0, '<B')
    for base in (cfg['tail'], cfg['tail'] + 0x1c0):
        for i in range(2):
            m.put(base+i, 0, '<B')
    if category != 'none':
        base = cfg['status'] if category == 'status' else cfg['tail']
        m.put(base + 0x1c0*pack + index, bit, '<B')
    m.run(cfg['start'], count=20000)
    return {
        'version': version, 'category': category, 'index': index, 'bit': bit,
        'pack': pack, 'alarm_3122': m.get(0x20003122, '<B'),
        'flag_30ce': m.get(0x200030ce, '<H'),
        'warn_311f': m.get(0x2000311f, '<B'),
        'count_3123': m.get(0x20003123, '<B'),
        'count_3124': m.get(0x20003124, '<B'),
        'count_3125': m.get(0x20003125, '<B'),
    }


def alert_tick(version, severe, timeout):
    """Run warning task with isolated status predicates; intercept output helpers."""
    cfg = VERSIONS[version]
    m = Machine(version, mmio=True)
    calls = []
    for a in (cfg['cue'], cfg['beep'], cfg['log'], cfg['misc']):
        m.stub([a], lambda machine, addr: calls.append((hex(addr), machine.u.reg_read(UC_ARM_REG_R0))))
    m.put(0x20003122, int(severe), '<B')
    m.put(0x200030ce, 0x400 if timeout else 0, '<H')
    m.put(0x2000015e, 11, '<B')
    m.put(0x20000170, 0, '<H')
    m.put(0x200002d0, 0, '<B')
    m.run(0x0800c622, count=200000)
    return {'version': version, 'severe': severe, 'timeout': timeout,
            'output_calls': calls, 'new_counter': m.get(0x2000015e, '<B'),
            'cooldown': m.get(0x20000170, '<H')}


def main():
    rows = []
    for version in VERSIONS:
        rows.append(scenario(version, 'none', 0, 0))
        for pack in (0, 1):
            for index in range(5):
                for bit in (1 << n for n in range(8)):
                    rows.append(scenario(version, 'status', index, bit, pack))
            for index in range(2):
                for bit in (1 << n for n in range(8)):
                    rows.append(scenario(version, 'tail', index, bit, pack))
    path = Path(__file__).with_name('warning_groups.json')
    path.write_text(json.dumps(rows, indent=2) + '\n')
    print(f'{len(rows)} original-code scenarios -> {path}')
    alert_rows=[alert_tick(v,s,t) for v in VERSIONS for s,t in
                ((False,False),(False,True),(True,False),(True,True))]
    by_key={(r['version'],r['category'],r['index'],r['bit'],r['pack']):r for r in rows}
    for pack in (0,1):
        assert by_key[229,'status',0,1,pack]['alarm_3122'] == 1
        assert by_key[231,'status',0,1,pack]['alarm_3122'] == 0
        assert by_key[231,'status',0,1,pack]['flag_30ce'] & 0x200
        assert by_key[231,'status',0,2,pack]['alarm_3122'] == 1
        assert by_key[231,'status',0,1,pack]['count_3125'] == 1
    ar={(r['version'],r['severe'],r['timeout']):r for r in alert_rows}
    assert [a[1] for a in ar[229,False,True]['output_calls']] == [7,14]
    assert ar[231,False,True]['output_calls'] == []
    assert [a[1] for a in ar[231,True,False]['output_calls']] == [7,14]
    Path(__file__).with_name('warning_reactions.json').write_text(
        json.dumps(alert_rows, indent=2) + '\n')
    print('alert ticks', json.dumps(alert_rows))
    for v in VERSIONS:
        for cat, i, bit in [('status', 0, 1), ('status', 0, 2),
                            ('status', 2, 1), ('status', 4, 16),
                            ('tail', 0, 128)]:
            r = next(x for x in rows if x['version']==v and x['category']==cat and
                     x['index']==i and x['bit']==bit and x['pack']==0)
            print(v, cat, i, hex(bit), 'alarm', r['alarm_3122'],
                  'flags', hex(r['flag_30ce']), 'warn', hex(r['warn_311f']))


if __name__ == '__main__':
    main()
