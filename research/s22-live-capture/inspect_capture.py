#!/usr/bin/env python3
"""Offline extraction/structural inspection of Android btsnoop logs. No device I/O."""
import argparse
import csv
import hashlib
import json
from pathlib import Path
import shutil
import struct
import subprocess
import zipfile

MAGIC = b"btsnoop\0"
MAX_BYTES = 128 * 1024 * 1024
FIELDS = ("frame.number", "frame.time_epoch", "btatt.opcode", "btatt.handle", "btatt.value")


def inspect(data):
    if len(data) < 16 or data[:8] != MAGIC:
        raise ValueError("Missing/truncated btsnoop header")
    version, link = struct.unpack_from(">II", data, 8)
    if version != 1:
        raise ValueError(f"Unsupported btsnoop version {version}")
    pos, count, clipped, drops = 16, 0, 0, 0
    first = last = None
    backwards = False
    while pos < len(data):
        if len(data) - pos < 24:
            raise ValueError(f"Truncated record header at byte {pos}")
        original, included, flags, cumulative, timestamp = struct.unpack_from(">IIIIq", data, pos)
        if included > original:
            raise ValueError(f"Captured length exceeds original at byte {pos}")
        pos += 24
        if included > len(data) - pos:
            raise ValueError(f"Truncated record body at byte {pos}")
        clipped += included < original
        drops = max(drops, cumulative)
        if first is None:
            first = timestamp
        if last is not None and timestamp < last:
            backwards = True
        last = timestamp
        pos += included
        count += 1
    return {
        "version": version, "datalink": link, "records": count,
        "clipped_records": clipped, "max_reported_cumulative_drops": drops,
        "duration_seconds": None if first is None else (last - first) / 1_000_000,
        "timestamps_backwards": backwards,
        "scope": "Record framing only; payload filtering, session coverage and S22 identity are unverified.",
    }


def candidates(source):
    if zipfile.is_zipfile(source):
        with zipfile.ZipFile(source) as archive:
            for entry in archive.infolist():
                # Read matching members, never extract archive paths to disk.
                if entry.is_dir() or "btsnoop" not in entry.filename.lower():
                    continue
                if entry.file_size > MAX_BYTES:
                    yield entry.filename, None, "Member exceeds 128 MiB limit"
                    continue
                with archive.open(entry) as stream:
                    data = stream.read(MAX_BYTES + 1)
                if len(data) > MAX_BYTES:
                    yield entry.filename, None, "Member exceeds 128 MiB limit"
                elif data.startswith(MAGIC):
                    yield entry.filename, data, None
    else:
        if source.stat().st_size > MAX_BYTES:
            raise ValueError("Raw capture exceeds 128 MiB limit")
        yield source.name, source.read_bytes(), None


def decode(trace, output):
    executable = shutil.which("tshark")
    if executable is None:
        return {"status": "unavailable", "reason": "Install wireshark-cli for ATT decoding"}
    command = [executable, "-n", "-r", str(trace), "-Y", "btatt", "-T", "fields",
               "-E", "header=y", "-E", "separator=,", "-E", "quote=d"]
    for field in FIELDS:
        command.extend(["-e", field])
    with output.open("w", encoding="utf-8") as stream:
        result = subprocess.run(command, stdout=stream, stderr=subprocess.PIPE, text=True)
    if result.returncode:
        return {"status": "error", "stderr": result.stderr[-2000:]}
    with output.open(encoding="utf-8", newline="") as stream:
        rows = csv.DictReader(stream)
        total = values = 0
        for row in rows:
            total += 1
            values += bool(row.get("btatt.value", "").strip())
    return {"status": "decoded", "csv": output.name, "att_rows": total,
            "att_rows_with_value": values,
            "scope": "Values may belong to other devices; manually match S22 connection and handles."}


def run(source, out, with_tshark=False):
    out.mkdir(parents=True, exist_ok=False)
    with source.open("rb") as stream:
        digest = hashlib.file_digest(stream, "sha256").hexdigest()
    report = {"input_sha256": digest, "traces": [], "warnings": [
        "A structurally valid log does not prove a complete, unfiltered S22 session.",
        "Bugreports and traces can contain private phone/device data; keep captures local.",
    ]}
    for index, (member, data, error) in enumerate(candidates(source)):
        item = {"archive_member_or_input_name": member}
        if error:
            item["error"] = error
        else:
            try:
                item["structure"] = inspect(data)
            except ValueError as exc:
                item["error"] = str(exc)
            else:
                trace = out / f"trace-{index:03d}.btsnoop"
                trace.write_bytes(data)
                item.update(file=trace.name, sha256=hashlib.sha256(data).hexdigest())
                if with_tshark:
                    item["att"] = decode(trace, trace.with_suffix(".csv"))
        report["traces"].append(item)
    if not report["traces"]:
        report["warnings"].append(
            "No raw btsnoop member found. Check Android full HCI logging; btsnooz extraction is a separate fallback.")
    (out / "inspection.json").write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n")
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("input", type=Path, help="adb bugreport ZIP or raw btsnoop file")
    parser.add_argument("--out", required=True, type=Path, help="New local output directory")
    parser.add_argument("--tshark", action="store_true", help="Also decode ATT into CSV")
    args = parser.parse_args()
    try:
        report = run(args.input, args.out, args.tshark)
    except (OSError, ValueError, zipfile.BadZipFile) as exc:
        parser.exit(2, f"{exc}\n")
    print(json.dumps(report, ensure_ascii=False, indent=2))
    return 0 if any("structure" in trace for trace in report["traces"]) else 2


if __name__ == "__main__":
    raise SystemExit(main())
