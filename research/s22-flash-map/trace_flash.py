"""Execute S22 v2.41 storage routines offline; intercept only FMC/SPI/IRQ/queue.

Synthetic flash contents are fixtures, not a dump of the user's wheel. FMC status
4 models success; non-erased programming returns 2 unless writing zero, following
GD32F30x manual 2.3.6. This cannot simulate power, wear, stalls or protected pages.
"""
import hashlib
import importlib.util
import io
import json
import re
import struct
import sys
from contextlib import redirect_stdout
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
OUT = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT / 's22-code-audit'))
from emulation import Machine
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2

APP_SHA = '99491754f5478caf5d97a5fa31c0a17bc7be55f0c14ee3f87058b55916fe9509'
BOOT_SHA = '53d73b57cdedcb46f99c97e81d071e422810d9ab1d0dc0139b38e7499e0c2326'


def call(m, address, *args):
    m.run(address, regs=dict(zip([UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2], args)), count=2000000)
    return m.u.reg_read(UC_ARM_REG_R0)


class Flash(Machine):
    def __init__(self):
        super().__init__(241, mmio=True)
        assert hashlib.sha256(self.im.data).hexdigest() == APP_SHA
        boot = (ROOT / 'research/s22-bootloader/S22-boot-area-20220406.bin').read_bytes()
        assert hashlib.sha256(boot).hexdigest() == BOOT_SHA
        self.u.mem_write(0x08000000, b'\xff' * 0x80000)
        self.u.mem_write(0x08000000, boot)
        self.u.mem_write(0x08008000, self.im.data)
        self.events = []
        self.spi = []
        self.fail_after = None
        self.writes = 0
        self.stub([0x0800b658, 0x0800b57c, 0x0800b5c8,
                   0x0800b588, 0x0800b5d8, 0x0800b610,
                   0x0800824c, 0x08008254, 0x0800fac0, 0x0800f56c], self.boundary)

    def boundary(self, m, entry):
        a = self.u.reg_read(UC_ARM_REG_R0)
        value = self.u.reg_read(UC_ARM_REG_R1)
        if entry == 0x0800f56c:
            self.spi.append(a & 255)
            self.u.reg_write(UC_ARM_REG_R0, 255)
            return
        if entry == 0x0800b588:
            assert a % 0x800 == 0 and 0x08000000 <= a < 0x08080000
            self.u.mem_write(a, b'\xff' * 0x800)
            self.events.append({'op': 'erase', 'address': hex(a), 'bytes': 2048})
        elif entry in (0x0800b5d8, 0x0800b610):
            n = 2 if entry == 0x0800b5d8 else 4
            assert a % n == 0 and 0x08000000 <= a <= 0x08080000 - n
            value &= (1 << (n * 8)) - 1
            old = bytes(self.u.mem_read(a, n))
            allowed = old == b'\xff' * n or value == 0
            if self.fail_after is not None and self.writes >= self.fail_after:
                allowed = False
            self.writes += 1
            if allowed:
                self.u.mem_write(a, value.to_bytes(n, 'little'))
            self.events.append({'op': 'program', 'address': hex(a), 'bytes': n,
                                'value': hex(value), 'status': 4 if allowed else 2})
            self.u.reg_write(UC_ARM_REG_R0, 4 if allowed else 2)
            return
        elif entry == 0x0800fac0:
            self.events.append({'op': 'queue', 'packet': bytes(self.u.mem_read(a, 20)).hex()})
        self.u.reg_write(UC_ARM_REG_R0, 4 if entry in (0x0800b588, 0x0800b57c) else 0)


def config_bytes(seed):
    return b''.join(struct.pack('<I', seed + i * 0x01010101) for i in range(66))


def slot_fixture(m, slot, data):
    total = sum(struct.unpack('<66I', data))
    m.u.mem_write(0x0803c000 + slot * 2048, data + struct.pack('<Q', total))


def config_cases():
    rows = []
    for slot in (0, 1):
        m = Flash()
        data = config_bytes(0x123456)
        m.u.mem_write(0x20003198, data)
        assert call(m, 0x08021b08, slot) == 0
        assert call(m, 0x08021934, slot) == 1
        start = 0x0803c000 + slot * 2048
        assert len(m.events) == 69 and m.events[0]['op'] == 'erase'
        assert m.events[-1]['address'] == hex(start + 268)
        assert bytes(m.u.mem_read(start, 264)) == data
        m.u.mem_write(start + 24, b'\x00' * 4)
        assert call(m, 0x08021934, slot) == 0
        rows.append({'case': f'write_validate_corrupt_slot_{slot}', 'events': m.events})
    m = Flash()
    data = config_bytes(0x342)
    slot_fixture(m, 1, data)
    assert call(m, 0x0802199c) == 2
    assert bytes(m.u.mem_read(0x20003198, 264)) == data
    rows.append({'case': 'invalid_primary_valid_backup', 'selected': 1})
    for source in (0, 1):
        m = Flash()
        serial = b'KSSA0123456789TEST00'
        assert len(serial) == 20
        m.u.mem_write(0x0803c000 + source * 2048 + 0x62, serial)
        assert call(m, 0x0802199c) == 0
        assert bytes(m.u.mem_read(0x200031fa, 20)) == serial
        rows.append({'case': f'both_invalid_serial_salvage_{source}', 'serial_hex': serial.hex()})
    # Every incomplete new copy: the old copy survives; this models a cut only
    # before a word write, not hardware brownout behavior within a word/erase.
    old, new = config_bytes(12), config_bytes(99)
    for writes in range(68):
        m = Flash()
        slot_fixture(m, 0, old)
        m.u.mem_write(0x20003198, new)
        m.fail_after = writes
        call(m, 0x08021a90)
        assert call(m, 0x08021934, 0) == 1
        assert bytes(m.u.mem_read(0x0803c000, 264)) == old
    rows.append({'case': 'repair_new_backup_incomplete', 'failure_boundaries': 68,
                 'old_primary_preserved': True})
    m = Flash()
    slot_fixture(m, 0, old)
    slot_fixture(m, 1, old)
    m.u.mem_write(0x20003198, new)
    call(m, 0x08021a90)
    assert [x['address'] for x in m.events if x['op'] == 'erase'] == ['0x803c000', '0x803c800']
    assert call(m, 0x08021934, 0) == call(m, 0x08021934, 1) == 1
    rows.append({'case': 'two_valid_slots_update_order', 'erase_order': ['0x803c000', '0x803c800']})
    return rows


def journal_cases():
    m = Flash()
    m.put(0x0803b000, 0, '<H')
    assert call(m, 0x0800c268) == 4
    assert m.get(0x20000138, '<I') == 0x0803b004
    key = m.get(0x200000a6, '<H')
    for v in (0x1234, 0x5678):
        assert call(m, 0x0800b458, key, v) == 4
    assert call(m, 0x0800b17c, key, 0x20018000) == 0
    assert m.get(0x20018000, '<H') == 0x5678
    m.put(0x20000138, 0x0803b800, '<I')
    assert call(m, 0x0800b458, key, 0x3456) == 4
    assert m.get(0x0803b000, '<H') == 0xffff
    assert m.get(0x0803b800, '<H') == 0
    assert call(m, 0x0800b17c, key, 0x20018000) == 0
    assert m.get(0x20018000, '<H') == 0x3456
    rows = [{'case': 'key_value_append_read_rollover', 'key': key, 'events': m.events}]
    m = Flash()
    m.put(0x0803b000, 0, '<H')
    call(m, 0x0800c268)
    offsets = [0x200033f8, 0x200033fc, 0x20003400, 0x20003404,
               0x20003408, 0x2000340c, 0x20003410]
    values = [110, -220, 330, 440, -550, 660, 7700]
    for address, value in zip(offsets, values):
        m.put(address, value, '<i')
    call(m, 0x08022c3c)
    for address in offsets:
        m.put(address, 0, '<i')
    assert call(m, 0x08020a04) == 1
    assert [m.get(a, '<i') for a in offsets] == values
    rows.append({'case': 'calibration_key_value_store_crc_reload', 'values': values,
                 'ram_addresses': list(map(hex, offsets)), 'events': m.events})
    m = Flash()
    for base, ptr in ((0x0803e000, 0x2000013c), (0x0803f000, 0x20000140)):
        m.put(base, 0, '<H')
        m.put(ptr, base + 4, '<I')
    m.u.mem_write(0x2000008c, struct.pack('<5I', 1, 2345, 3456, 4567, 0))
    call(m, 0x0800f664)
    a, b = bytes(m.u.mem_read(0x0803e004, 20)), bytes(m.u.mem_read(0x0803f004, 20))
    assert a == b == bytes(m.u.mem_read(0x2000008c, 20))
    assert len([x for x in m.events if x['op'] == 'program']) == 20
    rows.append({'case': 'same_crc_record_two_journals', 'record_hex': a.hex(), 'events': m.events})
    m = Flash()
    m.put(0x200001de, 0, '<H')
    m.put(0x200001e0, 100, '<I')
    assert call(m, 0x08022cc0, 7) == 0
    assert m.get(0x0803a000, '<H') == 7
    m.put(0x200001de, 0x3ff, '<H')
    assert call(m, 0x08022cc0, 7) == 1
    assert m.get(0x200001de, '<H') == 0
    assert m.get(0x200031f6, '<I') == 177
    rows.append({'case': 'accumulator_append_and_fold', 'events': m.events,
                 'folded_value': 177, 'note': 'Arithmetic differs by x10 between append and rollover; units not inferred.'})
    return rows


def calibration_cases():
    m = Flash()
    assert call(m, 0x08015fbc, 0) == 1
    assert m.get(0x200002ec, '<H') == 1341
    m.put(0x08001342, 0xffffffff, '<I')
    m.put(0x200030f4, 400, '<I')
    m.put(0x200002ec, 1341, '<H')
    names = {r['name']: int(r['value_address'], 16) for r in m.im.records}
    m.put(names['TotalVoltage'], 13000, '<i')
    m.put(names['cartstep'], 0, '<B')
    m.put(names['motionstep'], 0, '<B')
    assert call(m, 0x08023444, 12600) == 1
    assert [(e['address'], e['value']) for e in m.events] == [('0x8001342', '0x513'), ('0x8001344', '0x3f10')]
    assert m.get(0x08001342, '<H') == 1299
    return [{'case': 'read_historical_calibration_then_program_synthetic_blank_fields',
             'historical_gain': 1341, 'events': m.events, 'affected_erase_page': '0x08001000-0x08001800'}]


def bms_cases():
    rows = []
    for count in (5800, 5801):
        m = Flash()
        packet = bytearray(20)
        packet[:2] = b'\xaaU'
        struct.pack_into('<H', packet, 14, count)
        packet[16:18] = b'\x7a\x30'
        m.u.mem_write(0x20018000, bytes(packet))
        checksum = call(m, 0x080157d4, 0x20018002, 16)
        packet[18:20] = (checksum & 0xffff).to_bytes(2, 'big')
        m.u.mem_write(0x20018000, bytes(packet))
        call(m, 0x080164bc, 0x20018000, len(packet))
        erases = [e for e in m.events if e['op'] == 'erase']
        assert len(erases) == (32 if count == 5800 else 0)
        assert m.get(0x200009c8, '<H') == (5800 if count == 5800 else 0)
        rows.append({'case': f'original_bms_header_count_{count}', 'events': m.events})
    for index in (5460, 5799):
        m = Flash()
        m.u.mem_write(0x20018000, bytes(range(12)))
        call(m, 0x0801739c, index, 0x20018000, 1)
        assert len(m.events) == 3
        assert int(m.events[-1]['address'], 16) == 0x08029008 + index * 12 + 8
        rows.append({'case': f'original_bms_writer_index_{index}', 'events': m.events,
                     'end_exclusive': hex(int(m.events[-1]['address'], 16) + 4)})
    # The parser checks cursor < total before the chunk, not cursor+count <= total.
    # A valid 36-record final chunk with cursor 5799 can cross into 0x0803a000.
    m = Flash()
    payload = bytes(i & 255 for i in range(36 * 12))
    packet = bytearray(20) + payload
    packet[:2] = b'\xaaU'
    struct.pack_into('<H', packet, 4, 36)
    struct.pack_into('<H', packet, 14, 5799)
    packet[16:18] = b'\x7a\x31'
    m.u.mem_write(0x20018000, payload)
    packet[2:4] = (call(m, 0x080157d4, 0x20018000, len(payload)) & 0xffff).to_bytes(2, 'big')
    m.u.mem_write(0x20018000, bytes(packet))
    packet[18:20] = (call(m, 0x080157d4, 0x20018002, 16) & 0xffff).to_bytes(2, 'big')
    m.u.mem_write(0x20018000, bytes(packet))
    m.put(0x200009c8, 5800, '<H')
    m.put(0x200009ce, 5799, '<H')
    call(m, 0x080164bc, 0x20018000, len(packet))
    programs = [x for x in m.events if x['op'] == 'program']
    assert len(programs) == 108 and m.get(0x200009ce, '<H') == 5835
    assert int(programs[-1]['address'], 16) + 4 == 0x0803a18c
    rows.append({'case': 'synthetic_final_chunk_exceeds_declared_total', 'cursor_after': 5835,
                 'end_exclusive': '0x0803a18c', 'events': m.events})
    return rows


def spi_cases():
    rows = []
    for fn, args, expected in [
        (0x080153f0, (1, 0x20), [0xd8, 0x20, 0, 0]),
        (0x08015438, (1,), [0xc7]),
        (0x080154e0, (0x20018000, 0x401234, 4), [3, 0x40, 0x12, 0x34] + [255] * 4),
    ]:
        m = Flash()
        call(m, fn, *args)
        assert m.spi == expected
        rows.append({'case': hex(fn), 'arguments': list(args), 'spi_tx': m.spi})
    for address, length in ((0x80, 64), (0x400080, 64), (0x1234f0, 16)):
        m = Flash()
        m.u.mem_write(0x20018000, bytes(range(64)))
        assert call(m, 0x08015660, 0x20018000, address) == length
        assert m.spi == [6, 2, (address >> 16) & 255, (address >> 8) & 255, address & 255] + list(range(length))
        rows.append({'case': 'page_program_boundary', 'address': hex(address), 'bytes': length, 'spi_tx': m.spi})
    for state, address in ((0x30, 0x80), (0xb0, 0x400080), (0x12, 0x200000), (0x92, 0x600000)):
        m = Flash()
        m.put(0x20006643, state, '<B')
        m.put(0x20006671, 2, '<I')
        m.put(0x200066a7, 2, '<I')
        call(m, 0x0801a4d0)
        assert m.spi[:5] == [6, 2, (address >> 16) & 255, (address >> 8) & 255, address & 255]
        assert len(m.spi) == 69
        rows.append({'case': 'log_state_program', 'state': hex(state), 'address': hex(address), 'bytes': 64})
    m = Flash()
    m.put(0x200065f4, 1, '<B')
    call(m, 0x0801a4d0)
    assert m.spi == [0xc7]
    rows.append({'case': 'log_state_chip_erase', 'state': 1, 'spi_tx': m.spi})
    # Complete stock initialization: 32 data blocks + one marker block per log.
    for state, start in ((0x10, 0), (0x90, 0x40)):
        m = Flash()
        m.put(0x20006643, state, '<B')
        for _ in range(75):
            m.put(0x200065f5, 0, '<B')  # synthetic busy complete between scheduler ticks
            call(m, 0x0801a4d0)
            if any(m.spi[i:i+2] == [6, 2] for i in range(len(m.spi)-1)):
                break
        erase_blocks = [m.spi[i+1] for i, b in enumerate(m.spi[:-3]) if b == 0xd8 and m.spi[i+2:i+4] == [0, 0]]
        assert erase_blocks == list(range(start, start + 33)), erase_blocks
        rows.append({'case': 'complete_log_reset', 'initial_state': hex(state),
                     'erase_64k_blocks': erase_blocks, 'marker_program_bytes': 64})
    return rows


def ota_erase_cases():
    spec = importlib.util.spec_from_file_location('historical_s22_recovery',
        ROOT / 'research/s22-bootloader/trace_recovery.py')
    boot = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(boot)
    rows = []
    for length, end in ((132992, 0x08028800), (135168, 0x08029000),
                        (135184, 0x08029800), (204800, 0x0803a000),
                        (229376, 0x08040000), (262144, 0x08048000)):
        m = boot.Machine()
        m.parser()
        assert m.parser(boot.header(length)) == 2
        erases = [x for x in m.ops if x['op'] == 'erase']
        assert [int(x['address'], 16) for x in erases] == list(range(0x08008000, end, 2048))
        rows.append({'case': 'historical_loader_header_declared_size', 'declared_bytes': length,
                     'synthetic_capacity_register': '0x0100 (fixture, not measured)',
                     'erase_start': '0x08008000', 'erase_end_exclusive': hex(end),
                     'erase_pages': len(erases), 'parser_result': 2,
                     'scope': 'Header admission and erase only; no modified application is supplied or started.'})
    return rows


def main():
    result = {'image_sha256': APP_SHA, 'historical_boot_sha256': BOOT_SHA,
              'scope': 'Original Thumb routines with synthetic input and intercepted hardware boundaries; no wheel writes.',
              'stubbed_entries': ['0x0800b658', '0x0800b57c', '0x0800b5c8', '0x0800b588',
                                 '0x0800b5d8', '0x0800b610', '0x0800824c', '0x08008254',
                                 '0x0800fac0', '0x0800f56c']}
    m = Flash()
    boot = (ROOT / 'research/s22-bootloader/S22-boot-area-20220406.bin').read_bytes()
    ff_pages = [hex(0x08000000 + off) for off in range(0, len(boot), 2048)
                if boot[off:off + 2048] == b'\xff' * 2048]
    assert ff_pages == ['0x8003800', '0x8006800', '0x8007000', '0x8007800']
    assert 0x08008000 + len(m.im.data) == 0x08028780
    result['geometry'] = {'application_end_exclusive': '0x08028780',
                          'tail_shared_with_application_page': 128,
                          'whole_gap_page': '0x08028800-0x08029000',
                          'historical_boot_entire_ff_pages': ff_pages,
                          'ff_note': 'Not proof of allocation availability or current wheel contents.'}
    for name, fn in [('config', config_cases), ('journals', journal_cases),
                     ('calibration', calibration_cases), ('bms', bms_cases), ('spi', spi_cases),
                     ('historical_ota_erase', ota_erase_cases)]:
        result[name] = fn()
        print(name, len(result[name]), 'cases PASS')
    OUT.joinpath('evidence.json').write_text(json.dumps(result, indent=2) + '\n')
    m = Flash()
    entries = [(0x0800abb0, 0x58), (0x0800af54, 0xf8), (0x0800b2b0, 0x88),
               (0x0800b338, 0x90), (0x0800f664, 0x40), (0x0800fdec, 0x130), (0x080153f0, 0x48),
               (0x08015438, 0x2c), (0x08015610, 0x50), (0x08015660, 0x20),
               (0x0801a4d0, 0xe20), (0x08020a04, 0x84), (0x08022c3c, 0x84),
               (0x08015fbc, 0x6c), (0x080164bc, 0x540), (0x08017344, 0x58),
               (0x0801739c, 0x64), (0x08021934, 0x68), (0x0802199c, 0x30),
               (0x080219f8, 0x98), (0x08021a90, 0x78), (0x08021b08, 0xb4),
               (0x08022cc0, 0x94), (0x08023444, 0xec)]
    buf = io.StringIO()
    with redirect_stdout(buf):
        for address, size in entries:
            print(f'\n# Original v2.41 bytes, entry {address:#010x}, span {size:#x}')
            m.im.dis(address, size)
    OUT.joinpath('selected-code.asm').write_text(buf.getvalue())
    source = (ROOT / 'decompiled/v241/automatic_decompilation.c').read_text()
    parts = re.split(r'/\* ENTRY (0x[0-9a-f]+) : ([^ ]+) \*/', source)
    functions = list(zip(parts[1::3], parts[2::3], parts[3::3]))
    drivers = ['0800b588', '0800b5d8', '0800b610', '0800b658', '0800b57c', '0800b5c8']
    candidates = []
    for address, name, body in functions:
        refs = sorted(set(re.findall(r'080(?:3[a-f][0-9a-f]{3}|0134[024]|0830[04])', body)))
        calls = [d for d in drivers if 'FUN_' + d in body]
        if refs or calls:
            candidates.append({'function': address, 'name': name,
                               'candidate_flash_literals': refs, 'candidate_fmc_calls': calls})
    selected = {f'0x{a:08x}' for a, _ in entries} | {x['function'] for x in candidates}
    selected |= {'0x080219cc', '0x08020944', '0x08022b18', '0x08022ae4',
                 '0x08020a88', '0x0800b17c', '0x080225b8', '0x08022800', '0x08024990'}
    OUT.joinpath('candidate-functions.json').write_text(json.dumps({
        'scope': 'Direct candidates in automatic Ghidra C; may duplicate overlapping entries and omit indirect references.',
        'source_sha256': hashlib.sha256(source.encode()).hexdigest(),
        'functions': candidates}, indent=2) + '\n')
    OUT.joinpath('selected-decompilation.c').write_text(
        '/* AUTOMATIC GHIDRA PSEUDOCODE: navigation only; original bytes in selected-code.asm. */\n' +
        ''.join(f'\n/* ENTRY {a} : {n} */\n{b}' for a, n, b in functions if a in selected))


if __name__ == '__main__':
    main()
