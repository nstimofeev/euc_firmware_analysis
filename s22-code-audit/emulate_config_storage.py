"""Observe the original config serializer; physical Flash helpers are stubbed."""
from emulation import *
rows=[]
for slot in [0,1]:
 m=Machine(237);m.put(0x20003212,0x15,'<B');writes=[]
 def capture(m,a):
  if a==0x800b428:writes.append({'address':hex(m.u.reg_read(UC_ARM_REG_R0)),'word':m.u.reg_read(UC_ARM_REG_R1)})
  m.u.reg_write(UC_ARM_REG_R0,0)
 m.stub([0x800b470,0x800b394,0x800b3a0,0x800b428,0x800b3e0],capture)
 m.run(0x8021510,regs={UC_ARM_REG_R0:slot})
 assert len(writes)==68
 base=int(writes[0]['address'],16);stored=next(w['word'] for w in writes if int(w['address'],16)==base+0x78)
 assert (stored>>16)&255==0x15
 rows.append({'slot':slot,'flash_base':hex(base),'words_serialized':len(writes),'lighting_config_offset':'0x7a','lighting_config_byte':(stored>>16)&255,'writes':writes,'hardware_flash_helpers_stubbed':True})
save('config-storage-emulation.json',rows)
