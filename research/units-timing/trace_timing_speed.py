#!/usr/bin/env python3
"""Read-only call-graph and clock/speed evidence from the checked-in S22 exports.

Run from anywhere: python research/units-timing/trace_timing_speed.py
No hardware access, decompiler invocation, or emulation is needed.
"""
import json
import re
import struct
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]


def body(source, entry):
    start = source.index(f"/* ENTRY {entry} : ")
    end = source.find("/* ENTRY ", start + 10)
    return source[start:] if end == -1 else source[start:end]


def read_version(version):
    base = ROOT / "decompiled" / f"v{version}"
    functions = json.loads((base / "functions.json").read_text())["functions"]
    source = (base / "automatic_decompilation.c").read_text()
    callers = defaultdict(list)
    for function in functions:
        for callee in function["called_functions"]:
            callers[callee].append(function["entry"])
    return source, callers


def single_parent(callers, function):
    parents = callers[function]
    assert len(parents) == 1, (function, parents)
    return parents[0]


def clock_evidence(version, source):
    binary = (ROOT / "s22-developer-pack/firmware/decrypted" /
              f"S22-v{version}-decrypted.bin").read_bytes()
    ram = (ROOT / "s22-platform-research/initialized-data" /
           f"S22-v{version}-decrypted-initialized-ram.bin").read_bytes()
    vector = struct.unpack_from("<I", binary, 15 * 4)[0]
    hclk = struct.unpack_from("<I", ram)[0]
    tick_entry = f"0x{vector & ~1:08x}"
    tick = body(source, tick_entry)
    assert "FUN_" in tick and "DAT_20000035" in tick
    assert hclk == 72_000_000 and (vector & 1)
    assert "DAT_e000e014 = uVar1 / 100 - 1;" in source
    assert "DAT_e000e010 = uVar1 | 5;" in source
    assert "DAT_e000e010 = uVar1 | 2;" in source
    assert re.search(r"\*\(int \*\)\(iVar\d+ \+ 0x28\) \+ -1", source)
    return {"initialized_clock_word_0x20000000": hclk,
            "systick_vector_15": f"0x{vector:08x}",
            "systick_handler": tick_entry,
            "systick_reload_nominal": hclk // 100 - 1,
            "tick_hz_conditional_on_72MHz_hclk": 100}


def main():
    mapping = json.loads((ROOT / "research/profile-function-map.json").read_text())
    profiles = []
    for item in mapping:
        version = item["version"]
        source, callers = read_version(version)
        schedule = item["schedule"]
        wrapper = single_parent(callers, schedule)
        task = single_parent(callers, wrapper)
        task_text = body(source, task)
        wrapper_text = body(source, wrapper)
        assert schedule.replace("0x", "FUN_") + "();" in wrapper_text
        assert wrapper.replace("0x", "FUN_") + "();" in task_text
        waits = re.findall(r"(FUN_080[0-9a-f]+)\(DAT_200000[0-9a-f]+,100,&uStack_8\)", task_text)
        assert len(waits) == 1, (version, task, waits)
        assert task_text.count("do {") == 1 and "} while( true );" in task_text
        wait_text = body(source, waits[0].replace("FUN_", "0x"))
        assert "(DAT_20000048 + 0x28) = param_2;" in wait_text
        profiles.append({"version": version, "profile_schedule": schedule,
                         "wrapper": wrapper, "task_loop": task,
                         "wait_function": waits[0].replace("FUN_", "0x"),
                         "wait_timeout_ticks": 100, "clock": clock_evidence(version, source)})

    version = 237
    source, callers = read_version(version)
    charge = "0x0801b3b4"
    charge_wrapper = single_parent(callers, charge)
    charge_task = single_parent(callers, charge_wrapper)
    assert charge_task == "0x08009ea8"
    task_text = body(source, charge_task)
    wrapper_text = body(source, charge_wrapper)
    assert "charge_state_machine();" in wrapper_text
    assert "FUN_0802479c();" in task_text
    assert "FUN_0800dca8(DAT_20000070,100,&uStack_8);" in task_text

    setup = body(source, "0x0800e3d0")
    tick = body(source, "0x0800e3a8")
    decrement = body(source, "0x0800e2b4")
    wait = body(source, "0x0800dca8")
    assert "DAT_e000e014 = uVar1 / 100 - 1;" in setup
    assert "DAT_e000e010 = uVar1 | 5;" in setup
    assert "DAT_e000e010 = uVar1 | 2;" in setup
    assert "FUN_0800e2b4();" in tick
    assert "*(int *)(iVar3 + 0x28) + -1" in decrement
    assert "*(undefined4 *)(DAT_20000048 + 0x28) = param_2;" in wait
    clock = clock_evidence(version, source)
    assert clock["systick_vector_15"] == "0x0800e3a9"

    speed = body(source, "0x08020560")
    visible = body(source, "0x08023854")
    assert "diag_HallRSP * 0x13240" in speed and "/ 15000" in speed
    assert "diag_VehicleSpeed = (DAT_200032bc + diag_VehicleSpeed * 4) / 5;" in visible
    assert "diag_LimitSpeed = (uint)DAT_20000611 * 1000;" in source
    assert "DAT_20005f7a = (undefined2)(diag_VehicleSpeed / 100);" in source
    charge_text = body(source, charge)
    assert "0x708 < DAT_20000670" in charge_text
    assert "DAT_20000670 < 2000" in charge_text

    output = {"source": "Ghidra C and function-call exports, original decrypted binary/initialized RAM",
              "profile_tasks": profiles,
              "charge_v237": {"state_machine": charge, "wrapper": charge_wrapper,
                              "task_loop": charge_task, "wait_timeout_ticks": 100,
                              "state20_strict_threshold": 1800,
                              "state20_saturation": 2000},
              "clock_v237": {**clock, "setup": "0x0800e3d0", "tick_decrement": "0x0800e2b4",
                             "wait": "0x0800dca8", "systick_reload_nominal": 719999,
                             "tick_hz_conditional_on_72MHz_hclk": 100},
              "speed_v237": {"hall_to_filtered_raw": "((HallRSP*78400)/15000 + old*9)/10",
                             "raw_to_VehicleSpeed": "(filtered_raw + old_VehicleSpeed*4)/5",
                             "configured_limit": "config_byte * 1000",
                             "telemetry_field": "VehicleSpeed / 100"}}
    print(json.dumps(output, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
