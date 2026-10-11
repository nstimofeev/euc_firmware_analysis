#!/usr/bin/env python3
"""Bounded execution of original STM8 BMS 2.10 instructions; no firmware helper stubs."""
from pathlib import Path
import struct,hashlib,json,binascii,math
from stm8_cpu import CPU,ROOT
IMAGE=ROOT/'KSS22BA-2202-2.10-staged.bin'
SHA='2003d5236b08f7a8dc51585ef34fb60eb7ad796f0716a6c1530c61cfcd09f843'
def fp(cpu,a):return struct.unpack('>f',cpu.rd(a,4))[0]
def adc(cpu,value):
 cpu.u16(0x5344,value)
 return cpu.run(0x15072,{0x1512f,0x15144})
def main():
 b=IMAGE.read_bytes();assert hashlib.sha256(b).hexdigest()==SHA
 assert len(b)==5115*12 and binascii.crc_hqx(b,0)==0xe81a
 assert b[0x5c2:].startswith(b'KSS22BA-2202-2.10')
 cases=[];pcs=set()
 # Firmware applies zero/deadband gates. Set a documented RAM mode bit to
 # admit negative samples; this is a controlled input, not a code patch.
 for counts in [0,50,100,1000,-50,-100,-1000]:
  cpu=CPU();cpu.u16(0x10,3300);cpu.fl(0x73f,1);cpu.fl(0x743,1)
  cpu.wr(0x815,b'\x04');cpu.wr(0x862,b'\x0a')
  for i in range(200):
   adc(cpu,max(counts,0));assert cpu.rd(0x7d2)==b'\x01'
   adc(cpu,max(-counts,0));assert cpu.rd(0x7d2)==b'\x00'
   actual=int.from_bytes(cpu.rd(0x16f+2*i,2),'big',signed=True)
   assert actual==counts,(counts,i,actual)
  cpu.run(0x114ac,0x11734)
  current=fp(cpu,0x737);filtered=fp(cpu,0x73b)
  gain=struct.unpack('>f',bytes.fromhex('3fe60419'))[0]/struct.unpack('>f',bytes.fromhex('40633333'))[0] if counts>=0 else .5
  expected=counts*3300/4096*struct.unpack('>f',bytes.fromhex('42010831'))[0]*gain
  assert math.isclose(current,expected,rel_tol=2e-6,abs_tol=1e-4),(current,expected)
  assert current==filtered
  cpu.run(0x12534,0x125ce)
  word=cpu.rd(0x4f2,2);signed=int.from_bytes(word,'big',signed=True)
  expected_word=math.trunc((current+(50 if 0<current<5000 else -50 if -5000<current<0 else 0))/10)
  assert signed==expected_word,(counts,current,signed,expected_word)
  # Command dispatcher maps 0x42 to 0x9b28, then formatter reads 0x4f2.
  cpu.reg('SP',0xfff);cpu.reg('A',0x42);cpu.reg('X',0x8f0b)
  cpu.wr(0x1000,b'\x00\x91\xf1');cpu.run(0x179eb,0x91f1)
  assert cpu.reg('X')==0x9b28
  cpu.reg('SP',0xfff);cpu.wr(0x1000,b'\x01');cpu.u16(0x7c4,0)
  cpu.wr(0x49c,b'\x1e');cpu.wr(0x4dd,b'\x08')
  cpu.run(0x9b28,0xc93e)
  n=int.from_bytes(cpu.rd(0x7c4,2),'big');assert n==186
  payload=bytes.fromhex(cpu.rd(0x2ff,n).decode())
  assert len(payload)==93 and payload[80:82]==word
  pcs.update(cpu.trace)
  cases.append({'adc_signed_counts':counts,'samples':200,'reference_input_RAM_0x10':3300,'positive_gain':1,'negative_gain':1,'mode_RAM_0x815':4,'raw_current_RAM_0x737':current,'filtered_current_RAM_0x73b':filtered,'wire_int16':signed,'payload_80_81_hex':word.hex(),'payload_bytes':len(payload)})
 # Trim one high and one low outlier from the 200-entry buffer.
 cpu=CPU();cpu.u16(0x10,3300);cpu.fl(0x743,1);cpu.fl(0x73f,1);cpu.wr(0x862,b'\x0a')
 for i,v in enumerate([0,200]+[100]*198):cpu.u16(0x16f+2*i,v)
 cpu.run(0x114ac,0x11734)
 assert math.isclose(fp(cpu,0x737),cases[2]['raw_current_RAM_0x737'],rel_tol=2e-6)
 pcs.update(cpu.trace)
 # Filter branch executes original 0.3 * new + 0.7 * old instructions.
 cpu=CPU();cpu.fl(0x737,1000);cpu.fl(0x73b,500)
 cpu.run(0x116f0,0x11721);assert math.isclose(fp(cpu,0x73b),650,abs_tol=.001)
 pcs.update(cpu.trace)
 evidence={'status':'PASS','image_sha256':SHA,'staging_crc16_ccitt_init0':'e81a','architecture':'STM8','image_base':'0x8b00','naken_asm_commit':'247c23706909f09bac77c587780b8a826bbda27c','simulator_changes':['suppress run banner','correct 8/16-bit signed overflow flags; see patch_naken.py'],'firmware_helper_stubs':0,'real_peripherals_modeled':False,'cases':cases,'trimmed_mean_outliers':'PASS','filter_0_3_new_0_7_old':'PASS','unique_executed_addresses':len(pcs)}
 (ROOT/'evidence.json').write_text(json.dumps(evidence,indent=2)+'\n')
 # Disassemble only executed instruction starts. Inline float literals are
 # intentionally absent: the original helpers consume those data bytes.
 cpu=CPU();lines=[]
 ranges=[(0x15072,0x15145),(0x114ac,0x11734),(0x12534,0x125ce),(0x9b28,0x9bc4),(0xe5a6,0xe7ae)]
 for a in sorted(pcs):
  if any(lo<=a<hi for lo,hi in ranges):
   size,asm=cpu.dec(a);lines.append(f'0x{a:05x}: {cpu.rd(a,size).hex(" "):16s} {asm}')
 (ROOT/'executed-current-path.asm').write_text('\n'.join(lines)+'\n')
 print(f'PASS: {len(cases)} ADC-to-0x42 cases, trimmed mean, filter; no helper stubs')
if __name__=='__main__':main()
