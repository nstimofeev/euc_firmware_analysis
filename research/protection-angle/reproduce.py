"""Bounded offline original-Thumb state-7 and angle controller observations."""
import hashlib
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 's22-code-audit'))
from emulation import Machine
from unicorn import UC_HOOK_MEM_WRITE
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB

CFG = {
    229: dict(motion_fn=0x0800f0fc, control_fn=0x08010428, motion=0x20003270,
              flags=0x2000327e, speed=0x20003284, target=0x200032b0,
              rolltag=0x200032bc, pitch=0x20003394, roll=0x20003398),
    231: dict(motion_fn=0x0800f0f0, control_fn=0x0801041c, motion=0x20003274,
              flags=0x20003282, speed=0x20003288, target=0x200032b4,
              rolltag=0x200032c0, pitch=0x2000339c, roll=0x200033a0),
}
OFFSET = 0x200002a0
REFERENCE = 0x20000298
MOTOR = 0x200002d0


def case(version, speed=0, initial_state=7, flags=4, roll=0, motor=4,
         initial_offset=0, pitch=0, rolltag=0x28000, rolltag_cap=None):
    c = CFG[version]
    m = Machine(version, mmio=True)
    for addr, val, fmt in (
        (c['motion'], initial_state, '<B'), (c['flags'], flags, '<H'),
        (c['speed'], speed, '<i'), (c['pitch'], pitch, '<i'),
        (c['roll'], roll, '<i'), (c['rolltag'], rolltag, '<i'),
        (c['target'], 0, '<i'), (OFFSET, initial_offset, '<i'),
        (MOTOR, motor, '<B'), (REFERENCE, 0x5555, '<i'),
        (0x200005f8, 100, '<H'), (0x200005f6, 0, '<H')):
        m.put(addr, val, fmt)
    if rolltag_cap is not None:
        m.put(c['target'] + 8, rolltag_cap, '<i')
    writes = []
    from unicorn.arm_const import UC_ARM_REG_PC
    def observe_named(u, access, address, size, value, user):
        if address in (c['target'], c['rolltag'], OFFSET, REFERENCE, 0x20000294, 0x20000314):
            writes.append(dict(pc=hex(u.reg_read(UC_ARM_REG_PC)), address=hex(address),
                               size=size, value=hex(value & ((1 << (size*8))-1))))
    m.u.hook_add(UC_HOOK_MEM_WRITE, observe_named)
    m.run(c['motion_fn'], count=100000)
    after_motion = dict(state=m.get(c['motion'], '<B'), target=m.get(c['target'], '<i'),
                        offset=m.get(OFFSET, '<i'), rolltag=m.get(c['rolltag'], '<i'))
    m.run(c['control_fn'], count=100000)
    return dict(input=dict(speed=speed, state=initial_state, flags=hex(flags), roll=roll,
                           motor=motor, offset=initial_offset, pitch=pitch, rolltag=rolltag,
                           rolltag_cap=rolltag_cap),
                after_motion=after_motion,
                after_control=dict(reference=m.get(REFERENCE, '<i'), command=m.get(0x20000294, '<i'),
                                   command_short=m.get(0x20000314, '<h')),
                writes=writes)


def linked_severe(version, severe=True):
    """Aggregate -> warning -> state 3 transition -> state 7 update -> controller."""
    c = CFG[version]
    m = Machine(version, mmio=True)
    status = 0x20004b3f if version == 229 else 0x20004b47
    aggregate = 0x0801e660 if version == 229 else 0x0801e7a4
    m.put(0x200009b0, 3, '<B')
    m.put(0x200009a8, 0, '<I')
    m.put(0x200030ce, 0, '<H')
    for address in range(0x2000311f, 0x20003142):
        m.put(address, 0, '<B')
    for base in (status, status + 0x1c0):
        for offset in range(5):
            m.put(base + offset, 0, '<B')
    for base in (status + 13, status + 13 + 0x1c0):
        for offset in range(2):
            m.put(base + offset, 0, '<B')
    m.put(status, 2 if severe else 0, '<B')
    for address in ((0x200049ae if version == 229 else 0x200049b6),
                    (0x20004b6e if version == 229 else 0x20004b76)):
        m.put(address, 0, '<B')
    m.run(aggregate, count=20000)
    aggregated = m.get(0x20003122, '<B')
    m.put(0x2000015e, 11, '<B')
    m.put(0x20000170, 0, '<H')
    m.put(MOTOR, 0, '<B')
    m.put(c['flags'], 4, '<H')
    m.stub((0x08015040, 0x0800ea7a) if version == 229 else (0x08015028, 0x0800ea6e))
    m.run(0x0800c622, count=200000)
    flags = m.get(c['flags'], '<H')
    m.put(c['motion'], 3, '<B')
    m.put(c['speed'], 100, '<i')
    m.put(c['pitch'], 0, '<i')
    m.put(c['roll'], 0, '<i')
    m.put(c['target'], 0, '<i')
    m.put(c['rolltag'], 0x28000, '<i')
    m.put(OFFSET, 0, '<i')
    m.run(c['motion_fn'], count=100000)
    entered = m.get(c['motion'], '<B')
    m.run(c['motion_fn'], count=100000)
    after = (m.get(c['motion'], '<B'), m.get(c['target'], '<i'), m.get(OFFSET, '<i'))
    # Synthetic active motor-state gate: not a prediction of inter-task timing.
    m.put(MOTOR, 4, '<B')
    m.put(0x200005f8, 100, '<H')
    m.put(0x200005f6, 0, '<H')
    m.run(c['control_fn'], count=100000)
    return dict(aggregated_severe=aggregated, warning_flags=hex(flags),
                state_after_first_motion=entered,
                after_second_motion=dict(state=after[0], target=after[1], offset=after[2]),
                controller_reference=m.get(REFERENCE, '<i'),
                controller_command=m.get(0x20000294, '<i'))


def main():
    output = {}
    for v in CFG:
        cases = {name: case(v, **kw) for name, kw in {
            'zero_speed': {}, 'positive_speed': {'speed': 100},
            'negative_speed': {'speed': -100}, 'fast_positive': {'speed': 13000},
            'fast_negative': {'speed': -13000},
            'near_target': {'speed': 100, 'initial_offset': 0x19000 - 200},
            'roll_gate': {'speed': 100, 'roll': 0x46000},
            'flag_gate': {'speed': 100, 'flags': 0},
            'motor_gate': {'speed': 100, 'motor': 1},
            'state4': {'speed': 100, 'initial_state': 4},
            'rolltag_7': {'speed': 7000, 'rolltag_cap': 0x30000},
            'rolltag_4': {'speed': 7000, 'initial_state': 4, 'rolltag_cap': 0x30000},
        }.items()}
        assert cases['zero_speed']['after_motion']['target'] == -0x19000
        assert cases['zero_speed']['after_motion']['offset'] == -100
        for name, target in [('positive_speed', 0x19000), ('negative_speed', -0x19000),
                             ('fast_positive', 0x12000), ('fast_negative', -0x12000)]:
            assert cases[name]['after_motion']['target'] == target, (v,name,cases[name])
            assert cases[name]['after_motion']['offset'] == (100 if target > 0 else -100)
            assert cases[name]['after_control']['reference'] == cases[name]['after_motion']['offset']
        assert cases['near_target']['after_motion']['offset'] == 0x19000
        assert cases['roll_gate']['after_motion']['state'] == 2
        assert cases['flag_gate']['after_motion']['state'] == 2
        assert cases['motor_gate']['after_control']['reference'] == 0x5555
        assert cases['state4']['after_motion']['target'] == 0
        assert cases['rolltag_7']['after_motion']['rolltag'] == 0x28000 + 500
        assert cases['rolltag_4']['after_motion']['rolltag'] == 0x28000 + 1000
        linked = [linked_severe(v, severe) for severe in (False, True)]
        assert linked[0]['state_after_first_motion'] == 4
        assert linked[1]['state_after_first_motion'] == 7
        assert linked[1]['after_second_motion']['target'] == 0x19000
        assert linked[1]['after_second_motion']['offset'] == 100
        assert linked[1]['controller_reference'] == 100
        fw = (ROOT / f's22-developer-pack/firmware/decrypted/S22-v{v}-decrypted.bin').read_bytes()
        decoder = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
        anchors = [0x0800f62e, 0x0800f670, 0x0800f68c, 0x0800f696,
                   0x0800f5be, 0x08010468, 0x0801097a] if v == 229 else [
                   0x0800f622, 0x0800f664, 0x0800f680, 0x0800f68a,
                   0x0800f5b2, 0x0801045c, 0x0801096e]
        instructions = {}
        for address in anchors:
            insn = next(decoder.disasm(fw[address-0x08008000:address-0x08008000+4], address, count=1))
            instructions[hex(address)] = dict(bytes=insn.bytes.hex(), text=insn.mnemonic+' '+insn.op_str)
        output[str(v)] = dict(firmware_sha256=hashlib.sha256(fw).hexdigest(),
                              initialized_ram_sha256=hashlib.sha256((ROOT / f's22-platform-research/initialized-data/S22-v{v}-decrypted-initialized-ram.bin').read_bytes()).hexdigest(),
                              instructions=instructions, cases=cases, linked_severe=linked)
    path = Path(__file__).with_name('evidence.json')
    path.write_text(json.dumps(output, indent=2) + '\n')
    print('pass:', path)


if __name__ == '__main__':
    main()
