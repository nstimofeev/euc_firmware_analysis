#!/usr/bin/env python3
"""Build/check v2.41 diagnostic read-branch catalog from the pinned firmware."""
import argparse
import hashlib
import json
from pathlib import Path
import struct

ROOT = Path(__file__).resolve().parents[2]
EXPECTED = "99491754f5478caf5d97a5fa31c0a17bc7be55f0c14ee3f87058b55916fe9509"


def build():
    firmware = ROOT / "s22-developer-pack/firmware/decrypted/S22-v241-decrypted.bin"
    raw = firmware.read_bytes()
    if hashlib.sha256(raw).hexdigest() != EXPECTED:
        raise ValueError("Firmware hash mismatch")
    source = json.loads((ROOT / "s22-developer-pack/diagnostics/S22-v241-decrypted-diagnostics.json").read_text())
    if source["sha256"] != EXPECTED or len(source["records"]) != 115:
        raise ValueError("Source catalog identity/count mismatch")
    allowed, excluded = [], []
    for index, entry in enumerate(source["records"]):
        offset = int(entry["record_offset"], 16)
        if offset != 0x1f5fc + 16 * index:
            raise ValueError("Unexpected table layout")
        record = raw[offset:offset + 16]
        address, metadata, pointer, name_field = struct.unpack("<IIII", record)
        if (address != int(entry["value_address"], 16) or
                metadata != int(entry["metadata_raw"], 16) or
                pointer != int(entry["name_pointer"], 16) or
                name_field != int(entry["name_field_raw"], 16)):
            raise ValueError("Source record mismatch")
        if record[13] not in (0, 1) or record[5] not in (1, 2, 4):
            raise ValueError("Unexpected action/size")
        item = {"index": index, "name": entry["name"], "record_address": entry["record_address"],
                "value_address": entry["value_address"], "size_bytes": record[5], "action": record[13]}
        (allowed if record[13] == 0 else excluded).append(item)
    if len(allowed) != 95 or len(excluded) != 20:
        raise ValueError("Unexpected branch counts")
    return {"firmware_version": "2.41", "firmware_sha256": EXPECTED,
            "handler_address": "0x080151a4", "table_address": "0x080275fc",
            "scope": "action=0 selects RAM-to-response branch. BLE reachability, mode-entry effects, units and other firmware versions are not established.",
            "read_count": len(allowed), "excluded_write_count": len(excluded),
            "read_records": allowed, "excluded_write_records": excluded}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--write", action="store_true", help="Regenerate catalog; default checks existing JSON")
    args = parser.parse_args()
    result = build()
    target = Path(__file__).with_name("read-only-v241.json")
    if args.write:
        target.write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n")
    elif json.loads(target.read_text()) != result:
        raise ValueError("Saved catalog differs from pinned firmware")
    print("S22 v2.41: 95 read-branch records, 20 write-branch records excluded; source bytes verified.")


if __name__ == "__main__":
    main()
