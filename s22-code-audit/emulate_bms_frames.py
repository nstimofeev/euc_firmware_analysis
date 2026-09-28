"""Replay synthetic ASCII BMS frames into original parsers, with non-codec helpers stubbed.
Raw command identifiers and field offsets are evidence; physical units are not assumed.
"""
from emulation import *
def ascii_frame(data,version=0x25,address=1,category=0x46,result=0):
 payload=data.hex().upper();length=len(payload)
 check=(-sum((length>>n)&15 for n in [0,4,8]))&15
 body=f'{version:02X}{address:02X}{category:02X}{result:02X}{(check<<12)|length:04X}'+payload
 checksum=(-sum(body.encode()))&65535
 return ('~'+body+f'{checksum:04X}'+'\r').encode()
rows=[]
for v,entry,base,stride,codecs,label in [(239,0x8013b40,0x20004ba4,0x1c0,[0x801140e,0x8016e7c,0x801ef80],'bms0-parser'),(241,0x8013d1c,0x20004e24,0x308,[0x80115ea,0x8016940,0x801f54c],'bms-parser')]:
 meta=json.loads((ROOT/f'research/v{v}-{label}.json').read_text())
 stubs={int(c['target'],16) for c in meta['calls']}-set(codecs)
 for slot in ([0] if v==239 else [0,1]):
  for length in [92,93,94,103,104,105]:
   m=Machine(v);state=base+slot*stride;m.put(state+1,0x42,'<B')
   frame=ascii_frame(bytes((i+1)%256 for i in range(length)));m.u.mem_write(0x20018000,frame+bytes(512-len(frame)))
   before=bytes(m.u.mem_read(state,stride));other=bytes(m.u.mem_read(base+(1-slot)*stride,stride));called=[]
   def stub(m,a):called.append(hex(a));m.u.reg_write(UC_ARM_REG_R0,0)
   m.stub(stubs,stub)
   regs={UC_ARM_REG_R0:0x20018000,UC_ARM_REG_R1:len(frame)} if v==239 else {UC_ARM_REG_R0:slot,UC_ARM_REG_R1:0x20018000,UC_ARM_REG_R2:len(frame)}
   m.run(entry,regs=regs)
   after=bytes(m.u.mem_read(state,stride));changes=[{'offset':hex(i),'before':a,'after':b} for i,(a,b) in enumerate(zip(before,after)) if a!=b]
   celloff=0x104 if v==239 else 0x24c;tempoff=0x146 if v==239 else 0x28e
   accepted=length in ([93] if v==239 else [93,104])
   payload=bytes((i+1)%256 for i in range(length))
   assert not called, called
   assert bytes(m.u.mem_read(base+(1-slot)*stride,stride))==other
   expected_cells=list(struct.unpack('>30H',payload[3:63])) if accepted else list(struct.unpack('<30H',before[celloff:celloff+60]))
   expected_temps=list(struct.unpack('>8H',payload[64:80])) if accepted else list(struct.unpack('<8H',before[tempoff:tempoff+16]))
   assert list(struct.unpack('<30H',after[celloff:celloff+60]))==expected_cells
   assert list(struct.unpack('<8H',after[tempoff:tempoff+16]))==expected_temps
   rows.append({'version':v,'slot':slot,'pending_command':'0x42','payload_bytes':length,'frame_bytes':len(frame),'changed_bytes':changes,'cell_array_u16_raw':list(struct.unpack('<30H',after[celloff:celloff+60])),'temperature_like_array_u16_raw':list(struct.unpack('<8H',after[tempoff:tempoff+16])),'stubbed_helpers_called':called})
   print(v,slot,length,'changed',len(changes),'helpers',called)
save('bms-frame-emulation.json',rows)
