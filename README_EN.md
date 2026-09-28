# KingSong S22 binary audit, 2026-09-28

This is a reproducible, offline binary analysis of 15 KS-S22 firmware images from the manufacturer's catalog snapshot dated 2026-09-23. It does not contain recovered original C sources or modified firmware for flashing.

Confirmed findings:

1. **2.35 → 2.36:** one adaptive limiter's accumulator ceiling and initial value change from 5000 to 15000; its divisor changes from 15000 to 45000. Maximum relative augmentation stays at 1/3, while normalized decay/recovery takes roughly three times as many calls. Call frequency and physical output are not established.
2. **2.37 → 2.39:** a speed/alarm settings handler changes its mileage comparison from strictly greater than 2000 to strictly greater than 1000. Under restored defaults, the selected settings cap changes from 46 to 70. This is not a complete model of speed limiting.
3. **2.39 → 2.41:** a speed-dependent current correction changes four 3200 constants to 1600 while keeping its ±1600 branch boundaries. A correction that previously jumped to zero now tapers to zero at the boundary. This is consistent with the manufacturer's near-stop braking fix, not a hardware validation.
4. **2.39 → 2.41:** averaging of two eight-element arrays now excludes 0 and 65535 and divides by valid sample count. The subsequent `(mean-2730)/10` suggests battery temperature data, but protocol-level field identity remains unconfirmed.
5. **2.35:** the diagnostic handler uses a record flag to choose between reading and writing the addressed value. Its table has 93 read records and 20 write/echo records. Execution confirms one read and one RAM write with output helpers intercepted. BLE reachability, authorization and persistence have not been established.
6. Five named initial parameters are identical across all 15 images. Initialization is not necessarily the final runtime configuration.

See `REPORT_RU.md` for addresses, formulas, results and limitations; `CHANGELOG_EVIDENCE_RU.md` separates manufacturer claims from binary findings. All numeric values are raw internal units unless explicitly established otherwise.

Run from the unpacked archive root:

```sh
python -m venv .venv
.venv/bin/python -m pip install -r requirements.txt
.venv/bin/python s22-code-audit/run_checks.py
```

The checks verify original/encrypted hashes, reproduce decryption and initialized RAM, validate diagnostic record bytes, and execute original code in Unicorn. They perform no device or network I/O. Output helpers in the diagnostic test are stubbed; no transport packet should be inferred from its internal buffers.

The heuristic function matcher is only a navigation aid. It drops call/branch target identities and Flash pointer identities and has incomplete function recovery. A `normalized_identical` label does **not** establish semantic identity or a complete diff. Only the specifically documented findings were inspected and tested beyond that heuristic.

Manufacturer binaries remain the manufacturer's material. This archive makes no claim to relicense them. It contains no bootloader dump from an S22 and provides no proof that a modified application would be accepted by its bootloader.

## Extended analysis

See `ANALYSIS_EXTENDED_RU.md` for UART diagnostic framing/CRC, energy accounting, persistent light mode, charging state 20, old/new BMS payload lengths, nominal timer configuration, initial parameter changes and compensated current-filter rescaling. All 15 images now have automatic Ghidra C exports, listings and direct-call maps under `decompiled/`; reproducible importer/exporter scripts are in `ghidra/`. These are decompiler outputs, not original or buildable source. Manual semantic coverage remains partial. `run_checks.py` includes the extended offline emulation checks. No wheel or hardware validation has been performed.

New: `PROFILES_AND_CONTROL_RU.md` documents built-in profiles and speed-dependent gain scheduling across all 15 releases. Version 2.29 changes both profile values and the meaning of k_pcurr (divisor in the old current path, multiplier in the new one). Added 450 scheduling trajectories, 825 selector cases, 45 gating cases and 10 full balance-function synthetic cases. Next model after completing S22 analysis: **KingSong 16X**; see `ROADMAP_RU.md`.

Binary inputs are currently omitted from the GitHub branch pending explicit owner approval after an automatic publication review block. Tests require the original/decrypted firmware and restored RAM from the previously supplied `euc_firmware_analysis_2026-09-28.zip`, placed at their original paths. See `FIRMWARE_SHA256SUMS.txt`; text-only publication hashes are in `SHA256SUMS.txt`.
