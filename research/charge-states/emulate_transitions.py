"""Bounded original-Thumb charge transitions; inert MMIO, no board model."""
import hashlib
import json
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
sys.path.insert(0, str(ROOT / 's22-code-audit'))
from emulation import Machine  # noqa: E402
from unicorn import UC_HOOK_MEM_WRITE  # noqa: E402
from unicorn.arm_const import UC_ARM_REG_PC  # noqa: E402

STATE = 0x2000066c
MMIO = {0x422101b0, 0x40011010, 0x40011014}
ENTRY = {
    237: {0: 0x0801b47e, 1: 0x0801b49a, 2: 0x0801b568,
          6: 0x0801b94a, 'end': 0x0801b9ac},
    241: {0: 0x0801ba5a, 1: 0x0801ba76, 2: 0x0801bb44,
          6: 0x0801bf26, 'end': 0x0801bf88},
}


def run_case(version, name, state, setup, observations):
    m = Machine(version, mmio=True)
    m.put(STATE, state, '<B')
    # Empty BMS status bits prevent an accidental edge only if the prior latches
    # are zero; set them to 2 for the state-2 age-mode case explicitly below.
    for address, value, fmt in setup:
        m.put(address, value, fmt)
    writes = []

    def record(u, access, address, size, value, _):
        if address in MMIO:
            writes.append({'pc': hex(u.reg_read(UC_ARM_REG_PC)),
                           'address': hex(address), 'size': size, 'value': value})

    m.u.hook_add(UC_HOOK_MEM_WRITE, record)
    m.run(ENTRY[version][state], ENTRY[version]['end'])
    return {'version': version, 'case': name, 'initial_state': state,
            'entry': hex(ENTRY[version][state]), 'stop_before': hex(ENTRY[version]['end']),
            'state_after': m.get(STATE, '<B'),
            'observed_ram': {hex(a): m.get(a, fmt) for a, fmt in observations},
            'mmio_writes': writes}


def main():
    cases = []
    for version in (237, 241):
        rows = [
            ('0_to_1', 0, [(0x20000690, 50, '<H')],
             [(0x20000690, '<H')], 1),
            ('1_to_2_out_of_range', 1,
             [(0x20000698, 39, '<B'), (0x20000694, 20000, '<I')],
             [(0x20000698, '<B'), (0x2000064a, '<H'), (0x20000648, '<B')], 2),
            ('2_to_6_age_mode', 2,
             [(0x20003152, 1, '<B'), (0x2000317b, 1, '<B'),
              (0x2000317c, 0, '<B'), (0x20000668, 100, '<I'),
              (0x20000664, 42, '<I'), (0x2000069a, 19, '<H'),
              (0x2000066e, 0, '<B'), (0x2000066f, 0, '<B'),
              ((0x20004d39 if version == 237 else 0x20005101), 2, '<B'),
              ((0x20004ef9 if version == 237 else 0x20005409), 2, '<B')],
             [(0x20000668, '<I'), (0x20000664, '<I'), (0x2000069a, '<H')], 6),
            ('6_to_2_voltage_low', 6,
             [(0x200030bc, 0x2db3, '<I'), (0x2000317b, 0, '<B'),
              (0x20000685, 0, '<B'), (0x20000664, 100, '<I'),
              (0x20000673, 7, '<B'), (0x20000684, 250, '<B'),
              (0x20000674, 1, '<B'), (0x20000672, 1, '<B')],
             [(0x20000664, '<I'), (0x20000673, '<B'),
              (0x20000684, '<B'), (0x20000674, '<B'),
              (0x20000672, '<B')], 2),
        ]
        for name, state, setup, observations, expected in rows:
            row = run_case(version, name, state, setup, observations)
            assert row['state_after'] == expected, row
            cases.append(row)
    images = {}
    dispatch = {}
    for version in (237, 241):
        path = ROOT / f's22-developer-pack/firmware/decrypted/S22-v{version}-decrypted.bin'
        binary = path.read_bytes()
        images[str(path.relative_to(ROOT))] = hashlib.sha256(binary).hexdigest()
        address = 0x0801b464 if version == 237 else 0x0801ba40
        offset = address - 0x08008000
        assert binary[offset:offset + 2] == bytes.fromhex('dfe8')
        targets = [address + 4 + 2 * x for x in binary[offset + 4:offset + 25]]
        assert targets[0] == ENTRY[version][0]
        assert targets[1] == ENTRY[version][1]
        assert targets[2] == ENTRY[version][2]
        assert targets[6] != ENTRY[version][6]  # branch trampoline for state 6
        assert targets[20] == (0x0801b51a if version == 237 else 0x0801baf6)
        dispatch[str(version)] = {'tbb_address': hex(address),
                                  'instruction_bytes': binary[offset:offset + 4].hex(),
                                  'table_bytes': binary[offset + 4:offset + 25].hex(),
                                  'state_targets': {str(i): hex(target)
                                                    for i, target in enumerate(targets)}}
    result = {'scope': 'single branch to common tail, original Thumb, inert MMIO',
              'input_sha256': images, 'dispatch': dispatch, 'cases': cases}
    dest = HERE / 'transitions.json'
    dest.write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n')
    print(f'{len(cases)} bounded original-Thumb cases passed: {dest}')


if __name__ == '__main__':
    main()
