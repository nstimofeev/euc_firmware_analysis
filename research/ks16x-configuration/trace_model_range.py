#!/usr/bin/env python3
"""Offline address-grounded trace of KS16X model string consumers.

Run from repository root with Python and requirements.txt installed.
Only reads existing images/RAM artifacts and writes JSON in this directory.
"""
import hashlib
import json
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC

ROOT = Path(__file__).resolve().parents[2]
OUT = Path(__file__).resolve().parent / "model_range_evidence.json"
BASE = 0x08008000
RAM = 0x20000000
VERSIONS = {
    212: dict(sha="e8d9514d4c83ebe58ff501b990634670d8428fdd60599d8f545242359d78bf1f",
              ram_sha="819339e4d577f7c837d18d201d93ef19dee51e9412953361fba4cb14a7cbe7c1",
              lower=0x0801fff0, upper=0x0801ffde, pool=0x08019330,
              function=0x08018f40, end=0x08018faa, call=0x08014c74,
              input=0x20002f32, state=0x20002e44, flag=0x20000662),
    220: dict(sha="46409227bface8b270334a779efb2308a34d32e826b3f88b893a3aaedbbe22f5",
              ram_sha="896b184a6052c6f63316dfb369e70ebfe0e43ff1f6935eb681fe1782b976f883",
              lower=0x080203e0, upper=0x080203ce, pool=0x080196f0,
              function=0x08019300, end=0x0801936a, call=0x08015048,
              input=0x20002f52, state=0x20002e64, flag=0x2000067e),
    223: dict(sha="3a8c938c7325d63d9ea54845a99ec7d23c7a2b603a5149a7fdf245eb89d7f215",
              ram_sha="655406eb5deab20716930b9628bd161a53cbdbc4d9b9987aba43eb5385d55b7d",
              lower=0x0802088c, upper=0x0802087a, pool=0x08019a30,
              function=0x0801963c, end=0x080196a6, call=0x0801532e,
              input=0x20002f62, state=0x20002e74, flag=0x2000068e),
}


def word(blob, addr):
    return struct.unpack_from("<I", blob, addr - BASE)[0]


def insn_dict(ins, blob):
    row = dict(address=hex(ins.address), bytes=ins.bytes.hex(), mnemonic=ins.mnemonic,
               operands=ins.op_str)
    for operand in ins.operands:
        if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
            pool = ((ins.address + 4) & ~3) + operand.mem.disp
            row["literal_at"] = hex(pool)
            row["literal_value"] = hex(word(blob, pool))
    return row


def trace(version, cfg):
    image = ROOT / "ks16x" / "firmware" / f"KS-16X-v{version}-decrypted.bin"
    ram_path = ROOT / "ks16x" / "firmware" / "ram" / f"KS-16X-v{version}-decrypted-initialized-ram.bin"
    blob, ram = image.read_bytes(), ram_path.read_bytes()
    assert hashlib.sha256(blob).hexdigest() == cfg["sha"]
    assert hashlib.sha256(ram).hexdigest() == cfg["ram_sha"]
    upper = blob[cfg["upper"]-BASE:cfg["upper"]-BASE+7]
    lower = blob[cfg["lower"]-BASE:cfg["lower"]-BASE+7]
    assert (upper, lower) == (f"KS16X{4 if version == 212 else 9}\0".encode(), b"KS16X1\0")
    # The loop tests 17 positions; prove all post-prefix template bytes are zero.
    for key in ("upper", "lower"):
        off = cfg[key] - BASE
        assert blob[off + 6:off + 17] == bytes(11)
    expected_pool = ([cfg["upper"], cfg["lower"], cfg["state"], cfg["flag"]] if version == 223
                     else [cfg["upper"], cfg["lower"], cfg["input"], cfg["state"], cfg["flag"]])
    assert [word(blob, cfg["pool"]+4*i) for i in range(len(expected_pool))] == expected_pool

    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    md.detail = True
    start, end = cfg["function"], cfg["end"]
    insns = list(md.disasm(blob[start-BASE:end-BASE], start))
    assert insns and insns[-1].address + insns[-1].size == end
    rows = [insn_dict(i, blob) for i in insns]
    string_loads = [r for r in rows if r.get("literal_value") in (hex(cfg["lower"]), hex(cfg["upper"]))]
    assert len(string_loads) == 4
    assert [r["literal_value"] for r in string_loads] == [hex(cfg["upper"]), hex(cfg["lower"]), hex(cfg["lower"]), hex(cfg["upper"])]
    assert any(r.get("literal_value") == hex(cfg["input"]) for r in rows) if version != 223 else not any(r.get("literal_value") == hex(cfg["input"]) for r in rows)
    assert any(r.get("literal_value") == hex(cfg["state"]) for r in rows)
    assert any(r.get("literal_value") == hex(cfg["flag"]) for r in rows)
    assert sum(i.mnemonic == "cmp" for i in insns) >= 4
    call = next(md.disasm(blob[cfg["call"]-BASE:cfg["call"]-BASE+4], cfg["call"], count=1))
    assert call.mnemonic == "bl" and call.operands[0].type == ARM_OP_IMM and call.operands[0].imm == start
    caller_start = cfg["call"] - (2 if version == 223 else 6)
    caller = [insn_dict(i, blob) for i in md.disasm(blob[caller_start-BASE:cfg["call"]-BASE+6], caller_start)]
    if version == 223:
        assert caller[0]["mnemonic"] == "ldr" and caller[0]["literal_value"] == hex(cfg["input"])
    return dict(version=version, image=str(image.relative_to(ROOT)), image_sha256=cfg["sha"],
                ram_artifact=str(ram_path.relative_to(ROOT)), ram_sha256=cfg["ram_sha"],
                upper_string=dict(address=hex(cfg["upper"]), bytes=upper.hex(), text=upper[:-1].decode()),
                lower_string=dict(address=hex(cfg["lower"]), bytes=lower.hex(), text=lower[:-1].decode()),
                literal_pool=[dict(address=hex(cfg["pool"]+i*4), bytes=blob[cfg["pool"]+i*4-BASE:cfg["pool"]+i*4-BASE+4].hex(), value=hex(value)) for i,value in enumerate(expected_pool)],
                function=hex(start), caller=caller, instructions=rows,
                ram=dict(input=hex(cfg["input"]), state_halfword=hex(cfg["state"]+0x22), flag_byte=hex(cfg["flag"])),
                observation="Six ASCII bytes bounded inclusively; NUL bytes bypassed through loop bound 0x11. This function changes state bit 0x800 and a separate flag byte.")


def main():
    result = dict(scope="offline static disassembly; no firmware execution or device observations",
                  flash_base=hex(BASE), versions=[trace(v, c) for v,c in VERSIONS.items()])
    OUT.write_text(json.dumps(result, indent=2, ensure_ascii=False)+"\n")
    print(f"Verified 3 image/RAM SHA-256 pairs, string literal pools, and three call sites; wrote {OUT}")


if __name__ == "__main__":
    main()
