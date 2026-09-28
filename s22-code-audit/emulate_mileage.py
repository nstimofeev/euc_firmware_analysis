"""Execute the original mileage gate only, not the command/transport path."""
from inspect_s22 import *
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_THUMB
from unicorn.arm_const import UC_ARM_REG_PC, UC_ARM_REG_R8
rows=[]
for v,start,end in [(237,0x08022fe6,0x08022ffa),(239,0x08022ff6,0x0802300a)]:
 im=Image(v); u=Uc(UC_ARCH_ARM,UC_MODE_THUMB)
 u.mem_map(0x08000000,0x80000);u.mem_write(BASE,im.data)
 u.mem_map(0x20000000,0x20000);u.mem_write(0x20000000,im.ram)
 for mileage in [0,999,1000,1001,1999,2000,2001]:
  u.mem_write(0x20003108,struct.pack('<I',mileage))
  u.emu_start(start|1,end,count=50);assert u.reg_read(UC_ARM_REG_PC)==end
  cap=u.reg_read(UC_ARM_REG_R8)
  assert cap==(70 if mileage>(2000 if v==237 else 1000) else 46)
  rows.append({'version':v,'kilometer_raw':mileage,'setting_cap_raw':cap})
(ROOT/'s22-code-audit/mileage-emulation.json').write_text(json.dumps(rows,indent=2)+'\n')
print(json.dumps(rows,indent=2))
