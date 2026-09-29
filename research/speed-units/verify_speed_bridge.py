#!/usr/bin/env python3
"""Offline, bounded S22 legacy-speed bridge check; requires androguard."""
from __future__ import annotations

import hashlib
import argparse
import struct
import zipfile
from pathlib import Path

from androguard.core.dex import DEX
from loguru import logger

ROOT = Path(__file__).resolve().parents[2]
APK = ROOT.parent / "s22-platform-research/SoftTuner139-original.apk"
EXPECTED_SHA256 = "23abbf159a6f061a6f577b2627a7817dc2f326b76c8a4cd8bb49d1129025e4e1"


def method(dex, klass, name, descriptor=None):
    cls = next(c for c in dex.get_classes() if c.get_name() == klass)
    return next(m for m in cls.get_methods() if m.get_name() == name and
                (descriptor is None or m.get_descriptor() == descriptor))


def instructions(m):
    offset = 0
    for ins in m.get_code().get_bc().get_instructions():
        yield offset, ins
        offset += ins.get_length()


def main():
    parser_args = argparse.ArgumentParser(description=__doc__)
    parser_args.add_argument('--apk', type=Path, default=APK, help='Path to the unmodified SoftTuner 1.39 APK')
    args = parser_args.parse_args()
    logger.disable('androguard')
    assert hashlib.sha256(args.apk.read_bytes()).hexdigest() == EXPECTED_SHA256
    with zipfile.ZipFile(args.apk) as z:
        dex = DEX(z.read("classes2.dex"))
    parser = list(instructions(method(dex, "Lcom/kingsong/tune/common/ble/BleDataParse;", "parseData")))
    excerpt = "\n".join(i.get_name() + " " + i.get_output() for _, i in parser[70:158])
    assert "const/16 v5, 169" in excerpt  # legacy command at index 16
    assert "const/16 v2, 6010" in excerpt  # speed field
    assert "aget-byte v5, v1, v10" in excerpt and "aget-byte v9, v1, v9" in excerpt
    assert "byteArrayInt2(B B)S" in excerpt
    endian = list(instructions(method(dex, "Lcom/kingsong/tune/common/ble/BleDataParse;", "byteArrayInt2")))
    assert "shl-int/lit8 v0, v3, 8" in [i.get_name() + " " + i.get_output() for _, i in endian]

    formatter = method(dex, "Lcom/kingsong/tune/common/ble/BleDataFactory;", "setValue", "(I I)V")
    by_offset = dict(instructions(formatter))
    switch_offset = next(o for o, i in by_offset.items() if i.get_name() == "packed-switch" and
                         formatter.get_code().get_bc().get_ins_off(o + i.get_ref_off() * 2).first_key == 6004)
    switch = by_offset[switch_offset]
    payload = formatter.get_code().get_bc().get_ins_off(switch_offset + switch.get_ref_off() * 2)
    case_offset = switch_offset + 2 * payload.get_targets()[6010 - payload.first_key]
    case = "\n".join(i.get_name() + " " + i.get_output() for o, i in by_offset.items()
                     if case_offset <= o < case_offset + 252)
    assert "div-float v0, v0, v16" in case and 'append(Ljava/lang/String;)' in case
    prefix = "\n".join(i.get_name() + " " + i.get_output() for o, i in by_offset.items() if o < 180)
    assert 'const-string v11, "Km/h"' in prefix and "const/high16 v16, 1120403456" in prefix
    assert struct.unpack("<f", struct.pack("<I", 1120403456))[0] == 100.0

    v235 = (ROOT / "decompiled/v235/automatic_decompilation.c").read_text()
    v237 = (ROOT / "decompiled/v237/automatic_decompilation.c").read_text()
    for c in (v235, v237):
        assert "sVar3 = (short)(diag_VehicleSpeed / 10);" in c
        assert "sVar3 = -sVar3;" in c
        assert "FUN_0800fa84(0xa9," in c
        assert "local_38[2] = (char)param_2;" in c
        assert "local_34 = (char)param_3;" in c
        assert "local_33 = (char)((uint)param_3 >> 8);" in c
        assert "local_28 = param_1;" in c
    for signed_speed in (-12009, -12000, -999, 0, 8000, 12009, 70000):
        firmware_quotient = abs(int(signed_speed / 10))  # C integer division truncates toward zero
        frame = bytearray(20)
        frame[:2] = b"\xaa\x55"
        frame[4:6] = struct.pack("<H", firmware_quotient & 0xffff)
        frame[16:20] = b"\xa9\x14\x5a\x5a"
        app_value = struct.unpack_from("<h", frame, 4)[0] / 100
        assert app_value == firmware_quotient / 100
        print(f"VehicleSpeed={signed_speed:6d} frame[4:6]={frame[4:6].hex()} app_km_h={app_value:.2f}")
    print(f"APK SHA256 {EXPECTED_SHA256}; formatter case 6010 @ DEX method byte offset 0x{case_offset:x}: /100, Km/h")


if __name__ == "__main__":
    main()
