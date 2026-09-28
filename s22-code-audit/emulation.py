"""Minimal offline harness. Mapped MMIO is inert memory, not real hardware."""
from inspect_s22 import *
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_THUMB,UC_HOOK_CODE
from unicorn.arm_const import *
STOP=0x08070000
class Machine:
 def __init__(self,v,mmio=False):
  self.im=Image(v);self.u=Uc(UC_ARCH_ARM,UC_MODE_THUMB)
  self.u.mem_map(0x08000000,0x80000);self.u.mem_write(BASE,self.im.data)
  self.u.mem_map(0x20000000,0x20000);self.u.mem_write(0x20000000,self.im.ram)
  if mmio:
   self.u.mem_map(0x40000000,0x30000);self.u.mem_map(0x42210000,0x10000);self.u.mem_map(0xe000e000,0x2000)
 def put(self,a,v,fmt='<i'):self.u.mem_write(a,struct.pack(fmt,v))
 def get(self,a,fmt='<i'):return struct.unpack(fmt,self.u.mem_read(a,struct.calcsize(fmt)))[0]
 def run(self,start,end=STOP,regs=None,count=200000):
  self.u.reg_write(UC_ARM_REG_SP,0x2001e000);self.u.reg_write(UC_ARM_REG_LR,STOP|1)
  for r,v in (regs or {}).items():self.u.reg_write(r,v&0xffffffff)
  self.u.emu_start(start|1,end,count=count)
  assert self.u.reg_read(UC_ARM_REG_PC)==end,hex(self.u.reg_read(UC_ARM_REG_PC))
 def stub(self,addresses,callback=None):
  def hook(u,a,size,user):
   if a in addresses:
    if callback:callback(self,a)
    u.reg_write(UC_ARM_REG_PC,u.reg_read(UC_ARM_REG_LR))
  self.u.hook_add(UC_HOOK_CODE,hook)

def save(name,rows):
 (ROOT/'research'/name).write_text(json.dumps(rows,indent=2)+'\n')
 print(name,len(rows),'cases passed')
