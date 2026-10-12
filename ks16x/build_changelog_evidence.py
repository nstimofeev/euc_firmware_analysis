#!/usr/bin/env python3
"""Reproduce the KS-16X changelog's data comparisons from pinned saved evidence."""
import argparse
from collections import defaultdict
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
INPUTS = {
    "ks16x/evidence/initial-values.json": "c8ef87d8182d0f44b662ff02e588963d27a8d04a96b4ce51e27a51770dba4e76",
    "ks16x/evidence/diff.json": "4751de8361122f3b02c942d3e81a230bc9a42b05f4eff6aa690219b32b518990",
    "ks16x/evidence/catalog_version0.json": "11cbb349d8b3d9f128b104d97856a16f822ea906dc285eeb7651af2c3dad7c00",
}


def read(path):
    data = (ROOT / path).read_bytes()
    if hashlib.sha256(data).hexdigest() != INPUTS[path]:
        raise ValueError(f"Pinned input differs: {path}")
    return json.loads(data)


def key_records(records):
    counts = defaultdict(int)
    result = {}
    for record in records:
        name = record["name"]
        key = (name, counts[name])
        counts[name] += 1
        if len(bytes.fromhex(record["raw_le"])) != record["width_bytes"]:
            raise ValueError("Initial-value width mismatch")
        result[key] = record
    return result


def build():
    initial = read("ks16x/evidence/initial-values.json")
    diff = read("ks16x/evidence/diff.json")
    catalog = read("ks16x/evidence/catalog_version0.json")
    versions = {row["version"]: row for row in initial}
    if set(versions) != {212, 220, 223}:
        raise ValueError("Unexpected versions")
    pairs = []
    for entry in diff:
        before = key_records(versions[entry["from"]]["values"])
        after = key_records(versions[entry["to"]]["values"])
        common = before.keys() & after.keys()
        changed = []
        for key in sorted(common):
            a, b = before[key], after[key]
            if (a["width_bytes"], a["raw_le"]) != (b["width_bytes"], b["raw_le"]):
                changed.append({"name": key[0], "occurrence": key[1], "from": a, "to": b})
        pairs.append({
            "from": entry["from"], "to": entry["to"],
            "image_bytes_from": entry["from_bytes"], "image_bytes_to": entry["to_bytes"],
            "descriptor_names_added": entry["descriptor_names_added"],
            "descriptor_names_removed": entry["descriptor_names_removed"],
            "initialized_records_from": len(before), "initialized_records_to": len(after),
            "common_initialized_records": len(common), "unchanged_initialized_records": len(common) - len(changed),
            "changed_initialized_records": changed,
            "added_initialized_records": [after[key] for key in sorted(after.keys() - before.keys())],
            "removed_initialized_records": [before[key] for key in sorted(before.keys() - after.keys())],
        })
    return {
        "scope": "Saved-data comparisons only. Function-level behavior and runtime settings are not inferred.",
        "matching": "Name plus zero-based occurrence in descriptor order; compare width/raw bytes, ignore relocated addresses. Repeated names are retained.",
        "source_snapshot_commit": "896da3bde44e58ec9fe5ba7d90f8fa333f04dc52",
        "input_sha256": INPUTS,
        "catalog_entries": [{"version": int(row["versionNumber"]), "introduction": row["introduction"],
                             "binary_url_present": bool(row["file"]), "createtime": row["createtime"]}
                            for row in catalog["data"]],
        "pairs": pairs,
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check", action="store_true", help="Verify saved result without writing")
    args = parser.parse_args()
    result = build()
    target = ROOT / "ks16x/evidence/changelog-comparison.json"
    if args.check:
        if json.loads(target.read_text()) != result:
            raise ValueError("Saved changelog evidence differs")
    else:
        target.write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n")
    for pair in result["pairs"]:
        print(f'{pair["from"]}->{pair["to"]}: {pair["unchanged_initialized_records"]}/{pair["common_initialized_records"]} common initial records unchanged; {len(pair["added_initialized_records"])} added')


if __name__ == "__main__":
    main()
