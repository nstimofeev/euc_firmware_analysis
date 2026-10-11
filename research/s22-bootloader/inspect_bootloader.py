#!/usr/bin/env python3
"""Pinned S22 loader intake and bounded original-code inspection, no hardware."""
import argparse, hashlib, json, struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB, CS_MODE_MCLASS
from capstone.arm import ARM_OP_MEM, ARM_REG_PC
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_THUMB,UC_MODE_MCLASS,UC_HOOK_CODE,UC_HOOK_MEM_READ
from unicorn.arm_const import UC_ARM_REG_PC,UC_ARM_REG_SP,UC_ARM_REG_LR,UC_ARM_REG_R0
HERE=Path(__file__).resolve().parent
BASE=0x08000000
CAPTURE_SHA='e1ad38200189fd445cf9cf805206ed853398124b2ffa2f5326040269d7fc3552'

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument('--capture',type=Path,help='Optional pinned 512-KiB public SWD image, extracts first 32 KiB')
    args=parser.parse_args()
    image=HERE/'S22-boot-area-20220406.bin'
    if args.capture:
        full=args.capture.read_bytes()
        assert len(full)==0x80000 and hashlib.sha256(full).hexdigest()==CAPTURE_SHA
        image.write_bytes(full[:0x8000])
    b=image.read_bytes()
    assert len(b)==0x8000
    # SHA pinned in intake.json; the source date is a string, not board compatibility proof.
    manifest=json.loads((HERE/'intake.json').read_text())
    assert hashlib.sha256(b).hexdigest()==manifest['extracted_sha256']
    tag=b[0x1300:b.index(b'\0',0x1300)].decode()
    assert tag=='BootSoftVersion-Date-20220406-Model-KS-S22----CPUTYPE_0'
    def machine():
        u=Uc(UC_ARCH_ARM,UC_MODE_THUMB|UC_MODE_MCLASS)
        u.mem_map(BASE,0x80000);u.mem_write(BASE,b)
        u.mem_map(0x20000000,0x20000)
        u.reg_write(UC_ARM_REG_SP,0x20010000);u.reg_write(UC_ARM_REG_LR,0x08070001)
        return u
    # Descriptor consumer: controlled synthetic descriptors, not installable images.
    cases=[]
    for name,version,runflag,size,code,check,body in [
      ('sentinel',0x20211027,0x268479df,0,0x12345678,0x268479df,[1]),
      ('sentinel_body_changed',0x20211027,0x268479df,0,0x12345678,0x268479df,[2]),
      ('ordinary_sum_match',0x20211027,0xffffffff,8,3,(8+3+0x14502367)&0xffffffff,[1,2]),
      ('ordinary_sum_mismatch',0x20211027,0xffffffff,8,3,(8+3+0x14502367)&0xffffffff,[1,3]),
      ('ordinary_size_over',0x20211027,0xffffffff,0x32804,3,(0x32804+3+0x14502367)&0xffffffff,[1,2]),
      ('ordinary_invalid_runflag',0x20211027,0,8,3,(8+3+0x14502367)&0xffffffff,[1,2]),
      ('old_version',0x20211026,0xffffffff,8,3,(8+3+0x14502367)&0xffffffff,[1,2]),
      ('bad_relation',0x20211027,0xffffffff,8,3,0,[1,2]),
    ]:
        u=machine();u.mem_write(0x08008308,struct.pack('<6I',version,0xffffffff,runflag,size,code,check));u.mem_write(0x08008320,struct.pack('<'+'I'*len(body),*body))
        reads=[]
        u.hook_add(UC_HOOK_MEM_READ,lambda u,t,a,s,v,d:reads.append(hex(a)) if 0x08008320<=a<0x08008400 else None)
        u.emu_start(0x0800278d,0x08070000,count=1000000)
        assert u.reg_read(UC_ARM_REG_PC)==0x08070000
        result=u.reg_read(UC_ARM_REG_R0)
        expected={'sentinel':1,'sentinel_body_changed':1,'ordinary_sum_match':1,'ordinary_sum_mismatch':0,'ordinary_size_over':0,'ordinary_invalid_runflag':0,'old_version':0,'bad_relation':1}[name]
        assert result==expected
        cases.append({'name':name,'R0':result,'body_read_addresses':reads})
    # Local branch selection; do not execute setup routines or target images.
    branches=[]
    for marker,aux_sp,app_sp,target in [(0x28635690,0x200024d0,0x200076f0,0x080041ec),(0,0x200024d0,0x200076f0,0x0800820c),(0x28635690,0,0x200076f0,0x0800820c)]:
        u=machine();u.mem_write(0x0803d800,struct.pack('<I',marker));u.mem_write(0x08004000,struct.pack('<2I',aux_sp,0x080041ed));u.mem_write(0x08008000,struct.pack('<2I',app_sp,0x0800820d))
        helpers=[]
        def hook(u,a,s,d):
            if a in [0x0800225c,0x08001d8c,0x08002db0]:
                helpers.append(hex(a));u.reg_write(UC_ARM_REG_PC,u.reg_read(UC_ARM_REG_LR))
        u.hook_add(UC_HOOK_CODE,hook);u.emu_start(0x08002ca5,target,count=1000)
        assert u.reg_read(UC_ARM_REG_PC)==target
        assert u.reg_read(UC_ARM_REG_SP)==(aux_sp if target==0x080041ec else app_sp)
        branches.append({'marker':hex(marker),'aux_SP':hex(aux_sp),'target_PC':hex(target),'new_SP':hex(u.reg_read(UC_ARM_REG_SP)),'stubbed_setup_helpers':helpers})
    evidence={'input_sha256':manifest['extracted_sha256'],'loader_string':tag,'source':'public historical S22 SWD capture; not current wheel readout','vectors':{hex(BASE+o):[hex(x) for x in struct.unpack_from('<2I',b,o)] for o in [0,0x4000]},'descriptor_function':'0x0800278c','descriptor_cases':cases,'branch_entry':'0x08002ca4','branch_cases':branches,'signature_and_end_to_end_OTA_acceptance':'not established'}
    (HERE/'evidence.json').write_text(json.dumps(evidence,indent=2)+'\n')
    md=Cs(CS_ARCH_ARM,CS_MODE_THUMB|CS_MODE_MCLASS);md.detail=True
    lines=[]
    for a,n in [(0x080001cc,8),(0x080008ac,0x4e),(0x0800278c,0xb6),(0x08002ca4,0x88)]:
        for i in md.disasm(b[a-BASE:a-BASE+n],a):
            ann=''
            if i.mnemonic.startswith('ldr') and len(i.operands)>1 and i.operands[1].type==ARM_OP_MEM and i.operands[1].mem.base==ARM_REG_PC:
                off=((i.address+4)&~3)+i.operands[1].mem.disp-BASE
                if 0<=off<=len(b)-4:ann=' ; literal '+hex(struct.unpack_from('<I',b,off)[0])
            lines.append(f'{i.address:08x}: {i.bytes.hex():<10} {i.mnemonic:<9} {i.op_str}{ann}')
    (HERE/'selected-code.asm').write_text('\n'.join(lines)+'\n')
    print('PASS: pinned loader area, S22 identifier, 8 descriptor cases, 3 bounded branch cases')

if __name__=='__main__':main()
