"""Offline execution of the original integer limiter; no peripherals or wheel I/O."""
from inspect_s22 import *
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_THUMB
from unicorn.arm_const import UC_ARM_REG_SP,UC_ARM_REG_LR,UC_ARM_REG_R0,UC_ARM_REG_PC
ENTRIES={235:0x080156d0,236:0x08015758}
def run(v,request,calls):
 im=Image(v);u=Uc(UC_ARCH_ARM,UC_MODE_THUMB);u.mem_map(0x08000000,0x80000);u.mem_write(BASE,im.data);u.mem_map(0x20000000,0x20000);u.mem_write(0x20000000,im.ram)
 def put(a,x,fmt='<i'):u.mem_write(a,struct.pack(fmt,x))
 def get(a,fmt='<i'):return struct.unpack(fmt,u.mem_read(a,struct.calcsize(fmt)))[0]
 put(0x20000338,7500);put(0x20000360,10000 if request>=0 else -10000);put(0x2000031a,10,'<h')
 put(0x20000348,32000);put(0x2000034c,-32000)
 result=[]
 for n in range(1,max(calls)+1):
  before=get(0x2000036c,'<h');u.reg_write(UC_ARM_REG_SP,0x2001f000);u.reg_write(UC_ARM_REG_LR,0x08070001);u.reg_write(UC_ARM_REG_R0,request&0xffffffff)
  u.emu_start(ENTRIES[v]|1,0x08070000,count=1000);assert u.reg_read(UC_ARM_REG_PC)==0x08070000
  if n in calls:
   out=u.reg_read(UC_ARM_REG_R0);out=out-2**32 if out>=2**31 else out
   result.append({'call':n,'accumulator_before':before,'accumulator_after':get(0x2000036c,'<h'),'output_raw':out,'buscurlmt_vq_raw':get(0x20000354)})
 return {'version':v,'entry':hex(ENTRIES[v]),'source_sha256':__import__('hashlib').sha256(im.data).hexdigest(),'synthetic_request':request,'synthetic_BuscurLimit':7500,'synthetic_IbusRateRT':10,'synthetic_g_average_iq':10000 if request>=0 else -10000,'trace':result}
if __name__=='__main__':
 results=[run(v,r,[1,1001,5001,10001,15001]) for v in ENTRIES for r in [1000,-1000]]
 (ROOT/'s22-code-audit/limiter-emulation.json').write_text(json.dumps(results,indent=2)+'\n')
 print(json.dumps(results,indent=2))
