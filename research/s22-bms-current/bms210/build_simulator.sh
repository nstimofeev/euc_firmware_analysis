#!/usr/bin/env bash
set -euo pipefail
TASK_ROOT="$(cd "$(dirname "$0")" && pwd)"
NAKEN_SOURCE="${1:?Pass the path to a clone of https://github.com/mikeakohn/naken_asm}"
EXPECTED=247c23706909f09bac77c587780b8a826bbda27c
[[ "$(git -C "$NAKEN_SOURCE" rev-parse HEAD)" == "$EXPECTED" ]] || { echo "Wrong naken_asm revision" >&2; exit 1; }
mkdir -p "$TASK_ROOT/build"
python "$TASK_ROOT/patch_naken.py" "$NAKEN_SOURCE/simulate/stm8.cpp" "$TASK_ROOT/build/stm8-quiet.cpp"
c++ -shared -fPIC -O2 -I"$NAKEN_SOURCE" "$TASK_ROOT/stm8shim.cpp" "$NAKEN_SOURCE/core/Memory.cpp" "$NAKEN_SOURCE/core/print_error.cpp" "$NAKEN_SOURCE/simulate/Simulate.cpp" "$TASK_ROOT/build/stm8-quiet.cpp" "$NAKEN_SOURCE/disasm/stm8.cpp" "$NAKEN_SOURCE/table/stm8.cpp" -o "$TASK_ROOT/build/stm8shim.so"
