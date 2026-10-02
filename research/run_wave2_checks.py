#!/usr/bin/env python3
"""Reproduce integrated offline wave-2 evidence using only this repository."""
import hashlib
import subprocess
import sys
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
SCRIPTS = [
 "research/change-coverage/build_coverage.py",
 "research/charge-states/emulate_transitions.py",
 "research/ks16x-configuration/trace_model_range.py",
 "research/protection-outputs/reproduce.py",
 "research/s22-configuration/trace_configuration.py",
 "research/update-trust-boundary/extract_descriptors.py",
 "research/protection-angle/reproduce.py",
 "research/charge-boundaries/emulate_boundaries.py",
 "research/s22-serial-effects/trace_serial_effects.py",
 "research/ks16x-id-origin/trace_id_origin.py",
]
def main():
 rows = (ROOT / "FIRMWARE_SHA256SUMS.txt").read_text().splitlines()
 if not rows: raise RuntimeError("Empty firmware manifest")
 for row in rows:
  expected, name = row.split("  ", 1)
  if hashlib.sha256((ROOT / name).read_bytes()).hexdigest() != expected:
   raise RuntimeError("Firmware checksum mismatch: " + name)
 print(f"PASS {len(rows)} binary hashes", flush=True)
 for name in SCRIPTS:
  result = subprocess.run([sys.executable, str(ROOT / name)], cwd=ROOT, text=True, capture_output=True)
  if result.returncode:
   print(result.stdout); print(result.stderr); raise SystemExit(result.returncode)
  print("PASS " + name, flush=True)
 print("Offline code/evidence checks only; no hardware validation.")
if __name__ == "__main__": main()
