"""Execute only the speed-dependent current correction basic-block region."""
from inspect_s22 import *
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_THUMB
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_PC
regions={239:(0x08021d32,0x08021e06),241:(0x0802231a,0x080223ee)}
rows=[]
for v,(start,end) in regions.items():
 im=Image(v);u=Uc(UC_ARCH_ARM,UC_MODE_THUMB);u.mem_map(0x08000000,0x80000);u.mem_write(BASE,im.data);u.mem_map(0x20000000,0x20000)
 for iq in [-32000,32000]:
  for speed in [-1601,-1600,-1599,-800,-1,0,1,800,1599,1600,1601]:
   u.mem_write(0x200002b4,struct.pack('<i',speed));u.mem_write(0x20000364,struct.pack('<i',iq))
   u.emu_start(start|1,end,count=200);assert u.reg_read(UC_ARM_REG_PC)==end
   r=u.reg_read(UC_ARM_REG_R0);r=r-2**32 if r>=2**31 else r
   rows.append({'version':v,'commbospeed_raw':speed,'g_averX10_iq_raw':iq,'correction_raw':r})
(ROOT/'s22-code-audit/transition-emulation.json').write_text(json.dumps(rows,indent=2)+'\n')
for r in rows:
 if r['g_averX10_iq_raw']==-32000 and r['commbospeed_raw']>=0:print(r)
