#!/usr/bin/env python3
"""Read layout and execute bounded original helpers; no hardware access."""
import argparse, hashlib, json, struct, sys, io, contextlib
from pathlib import Path
HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
sys.path.insert(0, str(ROOT / 's22-code-audit'))
from emulation import Machine, UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3
from inspect_s22 import Image

def main():
    p = argparse.ArgumentParser()
    p.add_argument('--capture', type=Path, help='Optional pinned public older SWD capture; not v2.41')
    args = p.parse_args()
    im = Image(241)
    digest = hashlib.sha256(im.data).hexdigest()
    assert digest == '99491754f5478caf5d97a5fa31c0a17bc7be55f0c14ee3f87058b55916fe9509'
    scatter = struct.unpack_from('<8I', im.data, 0x08028418 - 0x08008000)
    assert scatter == (0x08028438,0x20000000,0x9f4,0x0800816c,0x08028774,0x200009f4,0x757c,0x080081c8)
    m = Machine(241)
    m.run(0x08008228)
    limits = [m.u.reg_read(r) for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]]
    assert limits == [0x20006b70,0x20007f70,0x20007370,0x20007370]
    # Verify the original zero initializer and exact bounds, including guards.
    m.u.mem_write(0x200009f0, b'\xa5' * (0x757c + 8))
    m.run(0x080081c8, regs={UC_ARM_REG_R1:scatter[5],UC_ARM_REG_R2:scatter[6]})
    assert bytes(m.u.mem_read(scatter[5],scatter[6])) == bytes(scatter[6])
    assert bytes(m.u.mem_read(0x200009f0,4)) == b'\xa5'*4
    assert bytes(m.u.mem_read(0x20007f70,4)) == b'\xa5'*4
    # Execute staging erase loop; stub only flash driver calls, record addresses.
    calls = []
    def driver(m, a):
        calls.append({'pc':hex(a),'r0':hex(m.u.reg_read(UC_ARM_REG_R0)),'r1':hex(m.u.reg_read(UC_ARM_REG_R1))})
        m.u.reg_write(UC_ARM_REG_R0,4)
    m.stub([0x0800b658,0x0800b57c,0x0800b588,0x0800b5d8,0x0800b5c8], driver)
    m.run(0x08017344,regs={UC_ARM_REG_R0:5115,UC_ARM_REG_R1:0xe81a})
    erase = [int(c['r0'],16) for c in calls if c['pc']=='0x800b588']
    assert erase == list(range(0x08029000,0x08039000,0x800))
    out = {'version':'S22 mainboard 2.41','input_sha256':digest,
      'app':{'base':'0x08008000','end_exclusive':hex(0x08008000+len(im.data)),'bytes':len(im.data),'gap_before_BMS_bytes':0x08029000-(0x08008000+len(im.data))},
      'RAM':{'initialized_bytes':scatter[2],'zeroed_bytes_including_heap_and_main_stack':scatter[6],'reserved_total_bytes':scatter[2]+scatter[6],'heap_bytes':limits[2]-limits[0],'main_stack_bytes':limits[1]-limits[3],'initial_SP':hex(struct.unpack_from('<I',im.data)[0]),'helper_R0_R1_R2_R3':[hex(x) for x in limits],'live_stack_and_heap_free_bytes':None},
      'BMS_staging':{'erase_start':hex(erase[0]),'erase_end_exclusive':hex(erase[-1]+0x800),'erase_pages':len(erase),'page_bytes':0x800,'stubbed_flash_driver_calls':calls},
      'physical_MCU_variant':'unverified; binary layout is not a capacity measurement'}
    if args.capture:
        b=args.capture.read_bytes()
        assert len(b)==0x80000
        assert hashlib.sha256(b).hexdigest()=='e1ad38200189fd445cf9cf805206ed853398124b2ffa2f5326040269d7fc3552'
        assert b[0x40000:]==b'\xff'*0x40000
        out['older_public_capture']={'sha256':hashlib.sha256(b).hexdigest(),'bytes':len(b),'upper_256KiB_all_FF':True,'not_physical_capacity_proof':True,'not_v241_flash_snapshot':True}
    (HERE/'evidence.json').write_text(json.dumps(out,indent=2)+'\n')
    buf=io.StringIO()
    with contextlib.redirect_stdout(buf):
        for a,n in [(0x08008228,10),(0x080081c8,28),(0x08017344,78)]: im.dis(a,n)
    (HERE/'memory-helpers.asm').write_text(buf.getvalue())
    print('PASS: firmware hash, scatter layout, original heap/stack helper, zeroing bounds, 32-page staging erase loop' + (', pinned older capture' if args.capture else ''))

if __name__=='__main__': main()
