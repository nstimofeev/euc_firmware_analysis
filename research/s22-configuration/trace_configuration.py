#!/usr/bin/env python3
"""Bounded, offline evidence extraction for S22 config/serial first slice.

The C export is used to navigate dataflow; listed original instructions and
initialized RAM bytes corroborate selected claims. No wheel or Flash emulation.
"""
import hashlib
import json
import re
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
OUT = Path(__file__).with_name("evidence.json")
VERSIONS = {
    219: {"serial_parser": "0x0801a15a", "range": ["KSSA01", "KSSA04"]},
    235: {"serial_parser": "0x0800f250", "range": ["KSSA01", "KSSA09"],
          "loader": "0x08021c0c", "check": "0x08020fa0", "copy": "0x08021038",
          "fallback": "0x08021064", "bt": "0x0801b8c4", "angle": "0x0800bc14"},
    241: {"serial_parser": "0x0800f438", "range": ["KSSA01", "KSSA09"],
          "loader": "0x080225b8", "check": "0x08021934", "copy": "0x080219cc",
          "fallback": "0x080219f8", "bt": "0x0801c1f0", "angle": "0x0800bdfc"},
}


def function(c, address):
    marker = f"/* ENTRY {address} : "
    start = c.index(marker)
    end = c.find("/* ENTRY ", start + len(marker))
    return c[start:end if end != -1 else None]


def listing_slice(asm, start, end):
    rows = []
    for line in asm.splitlines():
        m = re.match(r"([0-9a-f]{8})  ", line)
        if m and start <= int(m.group(1), 16) < end:
            rows.append(line)
    return rows


def main():
    evidence = {"scope": "offline selected application functions; no live Flash contents",
                "image_base": "0x08008000", "versions": {}}
    for v, spec in VERSIONS.items():
        image_path = ROOT / f"s22-developer-pack/firmware/decrypted/S22-v{v}-decrypted.bin"
        ram_path = ROOT / f"s22-platform-research/initialized-data/S22-v{v}-decrypted-initialized-ram.bin"
        diag_path = ROOT / f"s22-developer-pack/diagnostics/S22-v{v}-decrypted-diagnostics.json"
        c_path = ROOT / f"decompiled/v{v}/automatic_decompilation.c"
        asm_path = ROOT / f"decompiled/v{v}/listing.asm"
        image, ram = image_path.read_bytes(), ram_path.read_bytes()
        c, asm = c_path.read_text(), asm_path.read_text()
        diag = json.loads(diag_path.read_text())
        assert diag["sha256"] == hashlib.sha256(image).hexdigest()
        named = {}
        for name in ("motor_spdir", "motor_egdir", "halloffset"):
            records = [r for r in diag["records"] if r["name"] == name]
            assert records and len({r["value_address"] for r in records}) == 1
            rec = records[0]
            addr = int(rec["value_address"], 16)
            assert 0 <= addr - 0x20000000 <= len(ram) - 2
            named[name] = {"ram": hex(addr), "initial_signed_16": struct.unpack_from("<h", ram, addr - 0x20000000)[0],
                           "diagnostic_record": rec["record_address"]}
        assert [named[k]["initial_signed_16"] for k in ("motor_spdir", "motor_egdir", "halloffset")] == [1, -1, 32767]
        parser = function(c, spec["serial_parser"])
        assert all('"' + s + '"' in parser for s in spec["range"])
        assert "0x10 < uVar2" in parser and "= !bVar1" in parser
        result = {"sha256": {"application": hashlib.sha256(image).hexdigest(),
                              "initialized_ram": hashlib.sha256(ram).hexdigest()},
                  "serial_parser": spec["serial_parser"], "comparison_literal_bounds": spec["range"],
                  "diagnostic_initialized": named}
        if v != 219:
            loader = function(c, spec["loader"])
            check = function(c, spec["check"])
            copy = function(c, spec["copy"])
            fallback = function(c, spec["fallback"])
            bt = function(c, spec["bt"])
            assert "FUN_" + spec["serial_parser"][2:] in loader
            assert ("FUN_08021008" if v == 235 else "FUN_0802199c") in loader
            assert "0x42" in check
            if v == 235:
                assert "local_1c == *puVar1" in check
            assert "0x42" in copy and "0x803c000" in fallback and "0x803c800" in fallback
            pointer_address = 0x08026650 if v == 235 else 0x08027070
            slot_addresses = struct.unpack_from("<II", image, pointer_address - 0x08008000)
            assert slot_addresses == (0x0803c000, 0x0803c800)
            assert "0x37" in bt and "0x39" in bt and "s_S22Pro" in bt and "0x2b" in bt
            assert "'0'" in parser and "'2'" in parser and "diag_BuscurLimit_set = 8000" in parser
            # Original Thumb code reads the sixth serial byte through config+0x67.
            bt_start = 0x0801b8fe if v == 235 else 0x0801c22a
            rows = listing_slice(asm, bt_start, bt_start + 0x40)
            assert any("#0x67" in line for line in rows)
            assert any("#0x37" in line for line in rows)
            assert any("#0x39" in line for line in rows)
            p_rows = listing_slice(asm, int(spec["serial_parser"], 16), int(spec["serial_parser"], 16) + 0x8a)
            assert any("[r2,#0x4]" in line for line in p_rows)
            assert any("[r2,#0x5]" in line for line in p_rows)
            result["original_instructions"] = {"serial_parser": p_rows,
                                                "bluetooth_selector": rows}
            result.update({"config_loader": spec["loader"], "config_checksum": spec["check"],
                           "config_copy": spec["copy"], "serial_fallback": spec["fallback"],
                           "flash_slot_pointer_table": hex(pointer_address),
                           "flash_slots": [hex(a) for a in slot_addresses],
                           "checksum_words": 66, "copied_words": 66,
                           "bluetooth_name_selector": spec["bt"], "angle_consumer": spec["angle"]})
            assert "diag_motor_egdir" in function(c, spec["angle"])
        evidence["versions"][str(v)] = result
    OUT.write_text(json.dumps(evidence, indent=2, ensure_ascii=False) + "\n")
    print(f"verified {', '.join(map(str, VERSIONS))}; wrote {OUT.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
