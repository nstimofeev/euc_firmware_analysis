"""Offline diagnostic ingress, CRC, dispatch, response framing and mode gate.
Original code runs through the encoder; only queue insertion/legacy handler are stubbed.
No serial/BLE implementation and no hardware writes are included.
"""
from emulation import *
def crc(data):
 c=0xffff
 for b in data:
  c^=b<<8
  for _ in range(8):c=((c<<1)^0x1021 if c&0x8000 else c<<1)&0xffff
 return c^0xffff
def wire(payload):
 body=bytes([len(payload)+2])+payload
 return bytes.fromhex('55aa')+body+crc(body).to_bytes(2,'big')
rows=[]
for bootcounter in [499,500]:
 for correct in [True,False]:
  m=Machine(235);m.put(0x200005e4,0,'<B');m.put(0x200030b8+0x38,bootcounter,'<I')
  token=bytearray(m.im.ram[0x5e5:0x5ed]);token[0]^=0 if correct else 1
  packet=bytes.fromhex('55aa0bed')+token+bytes(2)
  m.u.mem_write(0x20018000,packet);m.stub([0x8011e54])
  m.run(0x8020f00,regs={UC_ARM_REG_R0:0x20018000,UC_ARM_REG_R1:len(packet)})
  enabled=m.get(0x200005e4,'<B');assert enabled==int(bootcounter<500 and correct)
  rows.append({'case':'mode_gate','startup_counter_raw':bootcounter,'token_matches':correct,'enabled':enabled})
for index,value,width,addr in [(48,12345,4,0x200032c0),(1,61,2,0x20000600)]:
 for valid in [True,False]:
  m=Machine(235);m.put(0x200005e4,1,'<B')
  if index==48:m.put(addr,value)
  before=bytes(m.u.mem_read(addr,width));payload=bytes([0xe6,index])+(value.to_bytes(width,'little') if index==1 else b'')
  frame=bytearray(wire(payload));frame[-1]^=0 if valid else 1;m.u.mem_write(0x20018000,bytes(frame));captured=[]
  def capture(m,a):
   p=m.u.reg_read(UC_ARM_REG_R1);n=m.get(p,'<B');captured.append(bytes(m.u.mem_read(p+1,n)))
   m.u.reg_write(UC_ARM_REG_R0,0)
  m.stub([0x802079c],capture)
  m.run(0x8020f00,regs={UC_ARM_REG_R0:0x20018000,UC_ARM_REG_R1:len(frame)})
  after=bytes(m.u.mem_read(addr,width))
  if valid:
   assert after==value.to_bytes(width,'little');assert captured==[wire(bytes([0xe6,index])+after)]
  else:assert not captured and before==after
  rows.append({'case':'framed_diagnostic','index':index,'valid_crc':valid,'before_raw':int.from_bytes(before,'little'),'after_raw':int.from_bytes(after,'little'),'response_frame':captured[0].hex() if captured else None,'stubbed':'queue insertion only'})
save('diagnostic-path-emulation.json',rows)
