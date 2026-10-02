#!/usr/bin/env python3
"""Validate bundled S22/KS-16X image hashes and extract app descriptors.

Run from the repository root:
  python research/update-trust-boundary/extract_descriptors.py
The script reads only the exact 18-image corpus declared below and writes JSON
beside this script (or to --output, relative paths anchored at repository root).
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
S22_DIR = ROOT / "s22-developer-pack/firmware/decrypted"
KS16_DIR = ROOT / "ks16x/firmware"
EXPECTED_S22 = {f"S22-v{v}-decrypted.bin" for v in (219, 221, 222, 223, 224, 227, 229, 231, 232, 233, 235, 236, 237, 239, 241)}
EXPECTED_KS16 = {f"KS-16X-v{v}-decrypted.bin" for v in (212, 220, 223)}
BASE = 0x08008000
DESC_OFFSET = 0x310
BODY_OFFSET = 0x320
CHECK_CONSTANT = 0x14502367
MANIFEST = ROOT / "FIRMWARE_SHA256SUMS.txt"


def exact_corpus():
    s22 = {p.name: p for p in S22_DIR.glob("S22-*-decrypted.bin")}
    ks16 = {p.name: p for p in KS16_DIR.glob("KS-16X-v*-decrypted.bin")}
    for label, actual, expected in (("S22", s22, EXPECTED_S22), ("KS-16X", ks16, EXPECTED_KS16)):
        if set(actual) != expected:
            missing, extra = sorted(expected - set(actual)), sorted(set(actual) - expected)
            raise ValueError(f"{label} corpus mismatch: missing={missing}, unexpected={extra}")
    return [s22[n] for n in sorted(EXPECTED_S22)] + [ks16[n] for n in sorted(EXPECTED_KS16)]


def read_manifest():
    entries = {}
    for line_no, line in enumerate(MANIFEST.read_text().splitlines(), 1):
        fields = line.split()
        if len(fields) == 2 and len(fields[0]) == 64:
            entries[fields[1]] = fields[0].lower()
        elif line.strip():
            raise ValueError(f"malformed SHA256 manifest line {line_no}")
    return entries


def describe(path: Path, manifest: dict) -> dict:
    rel = path.relative_to(ROOT).as_posix()
    expected_hash = manifest.get(rel)
    if not expected_hash:
        raise ValueError(f"{rel}: absent from {MANIFEST.relative_to(ROOT)}; refusing to interpret")
    data = path.read_bytes()
    actual_hash = hashlib.sha256(data).hexdigest()
    if actual_hash != expected_hash:
        raise ValueError(f"{rel}: SHA-256 mismatch: manifest={expected_hash}, actual={actual_hash}")
    if len(data) < DESC_OFFSET + 16:
        raise ValueError(f"{rel}: too short for 4-word descriptor")
    run_flag, app_size, app_sum, desc_check = struct.unpack_from("<4I", data, DESC_OFFSET)
    relation = (app_size + app_sum + CHECK_CONSTANT) & 0xFFFFFFFF
    body_end = BODY_OFFSET + app_size
    body_sum = None
    if app_size:
        if app_size % 4:
            raise ValueError(f"{rel}: malformed nonzero APPSIZE {app_size} is not uint32 aligned")
        if body_end > len(data):
            raise ValueError(f"{rel}: malformed APPSIZE {app_size} ends at 0x{body_end:x}, beyond image size 0x{len(data):x}")
        body_sum = sum(w[0] for w in struct.iter_unpack("<I", data[BODY_OFFSET:body_end])) & 0xFFFFFFFF
    return {
        "file": rel,
        "sha256": actual_hash,
        "size_bytes": len(data),
        "app_base": f"0x{BASE:08x}",
        "descriptor_file_offset": f"0x{DESC_OFFSET:x}",
        "descriptor_flash_address": f"0x{BASE + DESC_OFFSET:08x}",
        "run_flag": f"0x{run_flag:08x}",
        "app_size": app_size,
        "app_sum_field": f"0x{app_sum:08x}",
        "descriptor_check": f"0x{desc_check:08x}",
        "descriptor_relation_expected": f"0x{relation:08x}",
        "descriptor_relation_matches": relation == desc_check,
        "body_file_range": [f"0x{BODY_OFFSET:x}", f"0x{body_end:x}"] if app_size else None,
        "body_word_sum": f"0x{body_sum:08x}" if body_sum is not None else None,
        "body_sum_matches_field": body_sum == app_sum if body_sum is not None else None,
        "note": "Descriptor/additive checksum evidence only; does not establish bootloader policy or cryptographic authentication.",
    }


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--output", type=Path, default=Path(__file__).with_name("descriptor-evidence.json"))
    args = ap.parse_args()
    images = exact_corpus()
    manifest = read_manifest()
    records = [describe(p, manifest) for p in images]
    out = args.output if args.output.is_absolute() else ROOT / args.output
    out.parent.mkdir(parents=True, exist_ok=True)
    output = {
        "method": "validate each source SHA-256 against repository-root FIRMWARE_SHA256SUMS.txt before reading descriptors; read four little-endian uint32 fields at file offset 0x310; for nonzero aligned APPSIZE sum uint32_le words from 0x320 to 0x320+APPSIZE modulo 2^32",
        "expected_corpus": {"S22": len(EXPECTED_S22), "KS-16X": len(EXPECTED_KS16), "total": len(images)},
        "source_images": records,
    }
    out.write_text(json.dumps(output, indent=2) + "\n")
    print(f"wrote {out.relative_to(ROOT) if out.is_relative_to(ROOT) else out}; {len(records)} images")
    if not all(r["descriptor_relation_matches"] for r in records):
        raise SystemExit("descriptor relation mismatch")
    bad = [r["file"] for r in records if r["body_sum_matches_field"] is False]
    if bad:
        raise SystemExit("body sum mismatch: " + ", ".join(bad))

if __name__ == "__main__":
    main()
