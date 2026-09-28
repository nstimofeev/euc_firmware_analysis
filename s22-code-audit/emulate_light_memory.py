"""Boot-time config-byte handling and v237 lighting selection basic blocks."""
from emulation import *
rows=[]
for initial in [0,1,0x10,0x11,0x21,0xff]:
 for v,start,end,base in [(236,0x8021f18,0x8021f20,0x20003194),(237,0x802207c,0x802208c,0x20003198)]:
  m=Machine(v);m.put(base+0x7a,initial,'<B');m.run(start,end)
  after=m.get(base+0x7a,'<B');assert after==(0 if v==236 else initial&0xf0)
  if v==237:
   m.put(0x200006c4,0);m.put(0x200006c8,0);m.run(0x8022170,0x8022188)
   assert m.get(0x200006c4)==(0x13 if after>>4==1 else 0)
  rows.append({'version':v,'case':'boot','config_before':initial,'config_after':after,'restored_mode':m.get(0x200006c4) if v==237 else None})
for command in [0x12,0x13,0x14,0x15]:
 m=Machine(237);m.put(0x20003212,0xa5,'<B')
 m.u.mem_write(0x20018000,bytes([0,0,command])+bytes(20));m.put(0x2001e028,0x20018000,'<I')
 m.run(0x8012c96,0x8012cea)
 result=m.get(0x20003212,'<B');expected=0x15 if command in [0x12,0x13] else 5 if command==0x14 else 0xa5
 assert result==expected
 rows.append({'version':237,'case':'selection','input_subcommand':command,'config_before':0xa5,'config_after':result})
save('light-memory-emulation.json',rows)
