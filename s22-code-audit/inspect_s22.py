import json,struct,sys,re
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB, CS_MODE_LITTLE_ENDIAN
from capstone.arm import ARM_OP_MEM, ARM_OP_REG, ARM_OP_IMM, ARM_REG_PC
ROOT=Path(__file__).resolve().parents[1]
BASE=0x08008000
md=Cs(CS_ARCH_ARM, CS_MODE_THUMB|CS_MODE_LITTLE_ENDIAN);md.detail=True
class Image:
 def __init__(self,v):
  self.v=v; self.data=(ROOT/f's22-developer-pack/firmware/decrypted/S22-v{v}-decrypted.bin').read_bytes()
  self.ram=(ROOT/f's22-platform-research/initialized-data/S22-v{v}-decrypted-initialized-ram.bin').read_bytes()
  self.records=json.loads((ROOT/f's22-developer-pack/diagnostics/S22-v{v}-decrypted-diagnostics.json').read_text())['records']
  self.names={int(r['value_address'],16):r['name'] for r in self.records}
 def word(self,a):return struct.unpack_from('<I',self.data,a-BASE)[0] if BASE<=a<=BASE+len(self.data)-4 else None
 def ann(self,i):
  if i.mnemonic.startswith('ldr') and len(i.operands)>1 and i.operands[1].type==ARM_OP_MEM and i.operands[1].mem.base==ARM_REG_PC:
   a=((i.address+4)&~3)+i.operands[1].mem.disp; val=self.word(a)
   if val is not None:return f' ; [{a:#x}] = {val:#x} {self.names.get(val,"")}'
  return ''
 def dis(self,start,size):
  for i in md.disasm(self.data[start-BASE:start-BASE+size],start):
   print(f'{i.address:08x}: {i.bytes.hex():<10} {i.mnemonic:<9} {i.op_str}{self.ann(i)}')
 def refs(self,target):
  # Candidate PC-relative literal refs. A halfword scan can include data: inspect control flow before claiming code.
  for off in range(0,min(len(self.data),int(self.records[0]['record_offset'],16)),2):
   h=struct.unpack_from('<H',self.data,off)[0]
   if h&0xf800!=0x4800 and h!=0xf8df:continue
   i=next(md.disasm(self.data[off:off+4],BASE+off,count=1),None)
   if i and i.mnemonic.startswith('ldr') and len(i.operands)>1 and i.operands[1].type==ARM_OP_MEM and i.operands[1].mem.base==ARM_REG_PC:
    a=((i.address+4)&~3)+i.operands[1].mem.disp; val=self.word(a)
    if val==target:print(f'{i.address:#x}: {i.mnemonic} {i.op_str}{self.ann(i)}')
if __name__=='__main__':
 im=Image(int(sys.argv[1]));mode=sys.argv[2]
 if mode=='refs':im.refs(int(sys.argv[3],0))
 elif mode=='dis':im.dis(int(sys.argv[3],0),int(sys.argv[4],0))
