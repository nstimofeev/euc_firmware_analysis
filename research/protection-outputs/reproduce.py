"""Bounded original-Thumb observations for S22 2.29 and 2.31 outputs.

No flash patching or hardware interaction. MMIO is inert mapped memory.
"""
import hashlib
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 's22-code-audit'))
from emulation import Machine, STOP
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_PC, UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_LR, UC_ARM_REG_SP

CONFIG = {
    229: {'motion_flag_helper': 0x0800fd0e, 'cue': 0x08021ebe, 'consumer': 0x08022514,
          'constructor': 0x08022038, 'flags': 0x2000327e, 'pending': 0x20005e2b,
          'busy': 0x20005df7, 'record': 0x20004d2c, 'frame': 0x20005d6c,
          'motion': 0x20003270, 'target': 0x200032b0, 'motion_function': 0x0800f0fc,
          'aggregate': 0x0801e660, 'status': 0x20004b3f, 'missing_count': 0x200049ae},
    231: {'motion_flag_helper': 0x0800fd02, 'cue': 0x08022172, 'consumer': 0x080227ca,
          'constructor': 0x080222ee, 'flags': 0x20003282, 'pending': 0x20005e33,
          'busy': 0x20005dff, 'record': 0x20004d34, 'frame': 0x20005d74,
          'motion': 0x20003274, 'target': 0x200032b4, 'motion_function': 0x0800f0f0,
          'aggregate': 0x0801e7a4, 'status': 0x20004b47, 'missing_count': 0x200049b6},
}


def warning(version, severe, missing, counter=11, cooldown=0, motor_gate=0):
    c = CONFIG[version]
    m = Machine(version, mmio=True)
    m.put(0x20003122, severe, '<B')
    m.put(0x200030ce, 0x400 if missing else 0, '<H')
    m.put(0x2000015e, counter, '<B')
    m.put(0x20000170, cooldown, '<H')
    m.put(0x200002d0, motor_gate, '<B')
    m.put(c['flags'], 0, '<H')
    m.put(c['pending'], 0, '<B')
    # Other unrelated outputs invoked elsewhere in this task are isolated.
    other = (0x08015040, 0x0800ea7a) if version == 229 else (0x08015028, 0x0800ea6e)
    m.stub(other)
    hits = []
    def observe(u, address, size, user):
        if address in (c['motion_flag_helper'], c['cue']):
            hits.append([hex(address), u.reg_read(UC_ARM_REG_R0)])
    m.u.hook_add(UC_HOOK_CODE, observe)
    m.run(0x0800c622, count=200000)
    return {'severe': severe, 'missing': missing, 'counter': counter, 'cooldown_in': cooldown,
            'motor_gate': motor_gate,
            'calls': hits, 'flags': hex(m.get(c['flags'], '<H')),
            'pending': m.get(c['pending'], '<B'),
            'counter_out': m.get(0x2000015e, '<B'),
            'cooldown_out': m.get(0x20000170, '<H')}


def consume(version, pending=14, busy=0):
    c = CONFIG[version]
    m = Machine(version, mmio=True)
    m.put(c['pending'], pending, '<B')
    m.put(c['busy'], busy, '<B')
    # Communication task's outer gate: neither current transfer nor storage phase.
    m.put(0x20005dad if version == 229 else 0x20005db5, 0, '<B')
    m.put(0x20005dac if version == 229 else 0x20005db4, 0, '<B')
    m.put(0x20005e2a if version == 229 else 0x20005e32, 0, '<B')
    seen = []
    def stop_at_constructor(u, a, size, user):
        if a == c['constructor']:
            seen.append(u.reg_read(UC_ARM_REG_R0))
            u.emu_stop()
    m.u.hook_add(UC_HOOK_CODE, stop_at_constructor)
    m.u.reg_write(UC_ARM_REG_SP, 0x2001e000)
    m.u.reg_write(UC_ARM_REG_LR, STOP | 1)
    m.u.emu_start(c['consumer'] | 1, STOP, count=20000)
    return {'pending': pending, 'busy': busy, 'constructor_args': seen,
            'pc': hex(m.u.reg_read(UC_ARM_REG_PC))}


def construct(version, code=14):
    c = CONFIG[version]
    m = Machine(version, mmio=True)
    m.put(0x200009c4, 0, '<B')
    m.put(c['record'] + 8, 0xff, '<B')
    m.run(c['constructor'], regs={UC_ARM_REG_R0: code}, count=10000)
    record = bytes(m.u.mem_read(c['record'], 64))
    return {'code': code, 'ring_index': m.get(0x200009c4, '<B'),
            'record_type_at_plus_8': record[8], 'record_header_hex': record[:12].hex(),
            'source_frame_type_at_plus_8': m.get(c['frame'] + 8, '<B')}


def motion(version, alert_bit):
    c = CONFIG[version]
    m = Machine(version, mmio=True)
    m.put(c['motion'], 3, '<B')
    m.put(c['flags'], 4 | (0x20 if alert_bit else 0), '<H')
    m.put(c['target'], 0, '<i')
    # Original initialized RAM has zero pitch, roll, and speed in this setup.
    m.run(c['motion_function'], count=100000)
    return {'initial_motion_state': 3, 'initial_flags': hex(4 | (0x20 if alert_bit else 0)),
            'final_motion_state': m.get(c['motion'], '<B'),
            'pending_after_motion': m.get(c['pending'], '<B')}


def linked_warning_motion(version, severe, missing):
    """Execute the warning task, then the motion task on the same original RAM image."""
    c = CONFIG[version]
    m = Machine(version, mmio=True)
    m.put(0x20003122, severe, '<B')
    m.put(0x200030ce, 0x400 if missing else 0, '<H')
    m.put(0x2000015e, 11, '<B')
    m.put(0x20000170, 0, '<H')
    m.put(0x200002d0, 0, '<B')
    m.put(c['flags'], 4, '<H')
    m.put(c['pending'], 0, '<B')
    m.stub((0x08015040, 0x0800ea7a) if version == 229 else (0x08015028, 0x0800ea6e))
    m.run(0x0800c622, count=200000)
    flags_after_warning = m.get(c['flags'], '<H')
    pending_after_warning = m.get(c['pending'], '<B')
    m.put(c['motion'], 3, '<B')
    m.put(c['target'], 0, '<i')
    m.run(c['motion_function'], count=100000)
    return {'severe': severe, 'missing': missing, 'flags_after_warning': hex(flags_after_warning),
            'pending_after_warning': pending_after_warning,
            'motion_state_after_next_tick': m.get(c['motion'], '<B')}


def linked_bms_aggregate(version, status_bit=0, missing_count=0):
    """Original aggregator -> warning task -> motion state with isolated BMS inputs."""
    c = CONFIG[version]
    m = Machine(version, mmio=True)
    m.put(0x200009b0, 3, '<B')  # bounded return before communication tail
    m.put(0x200009a8, 0, '<I')
    m.put(0x200030ce, 0, '<H')
    for addr in range(0x2000311f, 0x20003142):
        m.put(addr, 0, '<B')
    for base in (c['status'], c['status'] + 0x1c0):
        for i in range(5):
            m.put(base + i, 0, '<B')
    for base in (c['status'] + 13, c['status'] + 13 + 0x1c0):
        for i in range(2):
            m.put(base + i, 0, '<B')
    m.put(c['status'], status_bit, '<B')
    for addr in (c['missing_count'], c['missing_count'] + 0x1c0):
        m.put(addr, missing_count, '<B')
    m.run(c['aggregate'], count=20000)
    severe = m.get(0x20003122, '<B')
    missing_flag = m.get(0x200030ce, '<H') & 0x400
    m.put(0x2000015e, 11, '<B')
    m.put(0x20000170, 0, '<H')
    m.put(0x200002d0, 0, '<B')
    m.put(c['flags'], 4, '<H')
    m.put(c['pending'], 0, '<B')
    m.stub((0x08015040, 0x0800ea7a) if version == 229 else (0x08015028, 0x0800ea6e))
    m.run(0x0800c622, count=200000)
    flags = m.get(c['flags'], '<H')
    pending = m.get(c['pending'], '<B')
    m.put(c['motion'], 3, '<B')
    m.put(c['target'], 0, '<i')
    m.run(c['motion_function'], count=100000)
    return {'status_byte_0': status_bit, 'missing_counter_each': missing_count,
            'aggregated_severe': severe, 'aggregated_missing_flag': bool(missing_flag),
            'flags_after_warning': hex(flags), 'pending_after_warning': pending,
            'motion_state_after_next_tick': m.get(c['motion'], '<B')}


def main():
    result = {}
    for version, c in CONFIG.items():
        tests = [warning(version, s, t) for s, t in ((0, 0), (1, 0), (0, 1), (1, 1))]
        tests += [warning(version, 1, 0, counter=9), warning(version, 1, 0, cooldown=2),
                  warning(version, 1, 0, motor_gate=1), warning(version, 1, 0, cooldown=1)]
        consumers = [consume(version, 14, 0), consume(version, 0, 0), consume(version, 14, 1)]
        item = {'firmware_sha256': hashlib.sha256((ROOT / f's22-developer-pack/firmware/decrypted/S22-v{version}-decrypted.bin').read_bytes()).hexdigest(),
                'initialized_ram_sha256': hashlib.sha256((ROOT / f's22-platform-research/initialized-data/S22-v{version}-decrypted-initialized-ram.bin').read_bytes()).hexdigest(),
                'warning': tests, 'consumer': consumers, 'construct': construct(version),
                'motion': [motion(version, False), motion(version, True)],
                'linked_warning_motion': [linked_warning_motion(version, s, t)
                                          for s, t in ((0, 0), (1, 0), (0, 1))],
                'linked_bms_aggregate': [linked_bms_aggregate(version, b, n)
                                         for b, n in ((0, 0), (2, 0), (0, 21))]}
        assert tests[0]['calls'] == [] and tests[1]['pending'] == 14 and tests[1]['flags'] == '0x20'
        assert tests[4]['calls'] == [] and tests[5]['calls'] == []
        assert [x[1] for x in tests[6]['calls']] == [14] and tests[6]['flags'] == '0x0'
        assert [x[1] for x in tests[7]['calls']] == [7, 14]
        assert (tests[2]['pending'] == 14) == (version == 229)
        assert consumers[0]['constructor_args'] == [14]
        assert consumers[1]['constructor_args'] == [] and consumers[2]['constructor_args'] == []
        assert item['construct']['record_type_at_plus_8'] == 14
        assert [x['final_motion_state'] for x in item['motion']] == [4, 7]
        assert [x['motion_state_after_next_tick'] for x in item['linked_warning_motion']] == (
            [4, 7, 7] if version == 229 else [4, 7, 4])
        assert [x['motion_state_after_next_tick'] for x in item['linked_bms_aggregate']] == (
            [4, 7, 7] if version == 229 else [4, 7, 4])
        result[str(version)] = item
    path = Path(__file__).with_name('evidence.json')
    path.write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps(result, indent=2))


if __name__ == '__main__':
    main()
