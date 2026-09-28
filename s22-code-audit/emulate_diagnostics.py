"""Offline test of v235 diagnostic table handler, with output helpers intercepted.
No BLE/UART framing, authentication, device access, or persistence is implemented.
"""
from inspect_s22 import *
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_THUMB,UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_SP,UC_ARM_REG_LR,UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_PC
im=Image(235);results=[]
for name,test_value in [('BusCurrent',12345),('pidk_p',61)]:
 index,r=next((n,r) for n,r in enumerate(im.records) if r['name']==name)
 addr=int(r['value_address'],16);width=(int(r['metadata_raw'],16)>>8)&255;flag=(int(r['name_field_raw'],16)>>8)&255
 u=Uc(UC_ARCH_ARM,UC_MODE_THUMB);u.mem_map(0x08000000,0x80000);u.mem_write(BASE,im.data);u.mem_map(0x20000000,0x20000);u.mem_write(0x20000000,im.ram)
 if not flag:u.mem_write(addr,test_value.to_bytes(width,'little'))
 before=bytes(u.mem_read(addr,width));u.mem_write(0x20018000,bytes([0,index])+test_value.to_bytes(width,'little')+bytes(16))
 captured=[]
 def hook(uc,a,size,user):
  if a in [0x0800d8b4,0x080207dc]:
   p=uc.reg_read(UC_ARM_REG_R0 if a==0x0800d8b4 else UC_ARM_REG_R1)
   length=uc.mem_read(p,1)[0];captured.append({'helper':hex(a),'buffer':bytes(uc.mem_read(p,length)).hex()})
   uc.reg_write(UC_ARM_REG_PC,uc.reg_read(UC_ARM_REG_LR))
 u.hook_add(UC_HOOK_CODE,hook)
 u.reg_write(UC_ARM_REG_SP,0x2001f000);u.reg_write(UC_ARM_REG_LR,0x08070001);u.reg_write(UC_ARM_REG_R0,0x20018000)
 u.emu_start(0x0801562d,0x08070000,count=10000);assert u.reg_read(UC_ARM_REG_PC)==0x08070000
 after=bytes(u.mem_read(addr,width));assert int.from_bytes(after,'little')==test_value
 if not flag:assert before==after
 response=bytes.fromhex(captured[0]['buffer']);assert response[1:3]==bytes([0xe6,index]);assert response[3:3+width]==after
 results.append({'name':name,'index':index,'address':hex(addr),'width_from_record_byte5':width,'write_flag_from_record_byte13':flag,'before_raw':int.from_bytes(before,'little'),'after_raw':int.from_bytes(after,'little'),'output_helpers_stubbed':captured})
(ROOT/'s22-code-audit/diagnostic-emulation.json').write_text(json.dumps(results,indent=2)+'\n');print(json.dumps(results,indent=2))
