#!/usr/bin/env python3
"""Bounded execution of unmodified S22 v2.41 phase-current acquisition.
MMIO is inert memory, not an ADC, power stage, motor or live wheel.
"""
import sys,json,hashlib,struct,contextlib,io
from pathlib import Path
from unicorn import UC_HOOK_CODE,UC_HOOK_MEM_READ
HERE=Path(__file__).resolve().parent;ROOT=HERE.parents[1]
sys.path.insert(0,str(ROOT/'s22-code-audit'))
from emulation import Machine,UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3
from inspect_s22 import Image,md
EXPECTED={
 's22-developer-pack/firmware/decrypted/S22-v241-decrypted.bin':'99491754f5478caf5d97a5fa31c0a17bc7be55f0c14ee3f87058b55916fe9509',
 's22-platform-research/initialized-data/S22-v241-decrypted-initialized-ram.bin':'aaa8b3bc063cf1c0f7e200d01b6c1c204161abd764ad9b7dbce6048866a7ffea',
}
def div(a,b):return (abs(a)//abs(b))*(-1 if (a<0)!=(b<0) else 1)
def sat(x):return max(-32768,min(32767,x))
def pair(sector,x,y,za,zb,zc):
 if sector in [1,6]:
  ib=sat(zb-2*x);ia=sat(2*y-zc-ib)
 elif sector in [2,3]:
  ia=sat(za-2*x);ib=sat(2*y-zc-ia)
 else:ia=sat(za-2*x);ib=sat(zb-2*y)
 return ia,ib
PCS=set()
def machine(mmio=True):
 m=Machine(241,mmio);m.u.hook_add(UC_HOOK_CODE,lambda u,a,s,d:PCS.add(a));return m
def run():
 for p,h in EXPECTED.items():assert hashlib.sha256((ROOT/p).read_bytes()).hexdigest()==h,p
 out={'version':'S22 mainboard 2.41','inputs_sha256':EXPECTED,'firmware_helper_stubs':0,'MMIO':'inert memory','phase_cases':[],'sector_selector_cases':[],'IRQ_to_Clarke_cases':[],'Park_cases':[]}
 m=machine();m.run(0x0800bb24,end=0x0800bb40)
 selectors=[m.get(a,'<I') for a in [0x200034d8,0x200034dc,0x200034e0]]
 assert selectors==[3<<15,1<<15,2<<15]
 m.run(0x0800c978)
 assert m.get(0x40012838,'<I')==0x108c00
 assert m.get(0x40012808,'<I')==0x9000
 out['injected_init']={'entry':'0x0800c978','JSQR':'0x108c00','CR2':'0x9000','phase_A_B_C_channels':[3,1,2],'injected_conversions':2}
 vectors=[(1000,-1000,1),(0,-1000,2),(-1000,-1000,3),(-1000,1000,4),(0,1000,5),(1000,1000,6)]
 for va,vb,sector in vectors:
  m=machine();m.run(0x0800bb24,end=0x0800bb40)
  m.run(0x080101b4,regs={UC_ARM_REG_R0:va,UC_ARM_REG_R1:vb})
  assert m.get(0x20000378,'<B')==sector
  m.run(0x0800c944)
  jsqr=m.get(0x40012838,'<I');channels=[(jsqr>>10)&31,(jsqr>>15)&31]
  assert channels==([1,2] if sector in [1,6] else [3,2] if sector in [2,3] else [3,1])
  # Original update-IRQ path reprograms JSQR and rearms injected trigger.
  m.put(0x40012c10,1,'<H');m.put(0x40012c0c,1,'<H');m.put(0x40012808,0x1000,'<I')
  m.run(0x08010b84);assert m.get(0x40012808,'<I')&0x8000
  out['sector_selector_cases'].append({'voltage_alpha_beta':[va,vb],'sector':sector,'channels':channels,'JSQR':hex(jsqr),'TIM1_CCR4':m.get(0x40012c40,'<H'),'trigger_rearmed':True})
 # Two calibration stages: A/B have 64 samples; C has a separate 64 samples.
 m=machine();m.put(0x20000380,1,'<B');m.put(0x20000381,0,'<B')
 m.put(0x4001283c,16384);m.put(0x40012840,16400)
 for i in range(64):m.run(0x0800c6b0)
 assert [m.get(a) for a in [0x200034e4,0x200034e8]]==[32768,32800]
 m.put(0x40012840,16500)
 for i in range(64):m.run(0x0800c6b0)
 assert m.get(0x200034ec)==33000
 out['phase_zero_calibration']={'entry':'0x0800c6b0','samples_per_phase':64,'ADC_register_inputs':[16384,16400,16500],'offsets_A_B_C':[32768,32800,33000]}
 # Direction, non-identical offsets and saturation for all six sectors.
 for sector in range(1,7):
  for x,y,zeros in [(16384,16384,(32768,32768,32768)),(16300,16500,(32768,32768,32768)),(16500,16300,(32768,32768,32768)),(0,65520,(32768,32768,32768)),(16200,16600,(32768,32800,33000))]:
   m=machine();m.put(0x20000378,sector,'<B')
   for a,z in zip([0x200034e4,0x200034e8,0x200034ec],zeros):m.put(a,z)
   m.put(0x4001283c,x);m.put(0x40012840,y)
   reads=[];m.u.hook_add(UC_HOOK_MEM_READ,lambda u,t,a,s,v,d:reads.append(hex(a)) if 0x4001283c<=a<=0x40012840 else None)
   m.run(0x0800c560,regs={UC_ARM_REG_R0:0x20018000})
   actual=(m.get(0x20018000),m.get(0x20018004));assert actual==pair(sector,x,y,*zeros)
   assert reads==['0x4001283c','0x40012840']
   out['phase_cases'].append({'sector':sector,'JDR1_JDR2':[x,y],'zeros':zeros,'IA_IB':actual,'actual_MMIO_reads':reads})
 # Interrupt states 4/5 route real ADC readings through IA/IB and Clarke.
 for state in [4,5]:
  for sector in range(1,7):
   m=machine();m.put(0x20000308,state,'<B');m.put(0x20000378,sector,'<B')
   for a in [0x200034e4,0x200034e8,0x200034ec]:m.put(a,32768)
   m.put(0x4001283c,16300);m.put(0x40012840,16500);m.put(0x40012800,4,'<I');m.put(0x200032c4,12345)
   m.run(0x0800863c,end=0x0800b942)
   ia,ib=pair(sector,16300,16500,32768,32768,32768)
   assert [m.get(0x20003488),m.get(0x2000348c)]==[ia,ib]
   alpha,beta=m.get(0x20003498),m.get(0x2000349c)
   assert (alpha,beta)==(ia,div(-(ia*0x49e6+ib*0x93cc),32767))
   assert m.get(0x200032c4)==12345
   out['IRQ_to_Clarke_cases'].append({'IRQ_state':state,'sector':sector,'IA_IB':[ia,ib],'Ialpha_Ibeta':[alpha,beta],'BusCurrent_unchanged':12345})
 # Original trig helper and angle-dependent rotation, without stubs.
 for angle in [0,7500,15000,22500]:
  m=machine(False);m.run(0x0800b708,regs={UC_ARM_REG_R0:0x20018000,UC_ARM_REG_R1:168,UC_ARM_REG_R2:170,UC_ARM_REG_R3:angle})
  c,s=m.get(0x2000038c),m.get(0x20000390)
  iq,id_=m.get(0x20018000),m.get(0x20018004)
  assert (iq,id_)==(div(168*c-170*s,32767),div(170*c+168*s,32767))
  out['Park_cases'].append({'angle_raw':angle,'coefficients':[c,s],'IQ_ID_before_slew_limiter':[iq,id_]})
 # Executed original stores and +/-3000 slew limit to diagnostic IQ/ID.
 for old_iq,old_id in [(0,0),(10000,-10000)]:
  m=machine(False);m.put(0x200034a0,old_iq);m.put(0x200034a4,old_id)
  m.run(0x0800b708,regs={UC_ARM_REG_R0:0x20018000,UC_ARM_REG_R1:168,UC_ARM_REG_R2:170,UC_ARM_REG_R3:0})
  m.put(0x2001e000,167);m.put(0x2001e004,169)
  m.run(0x0800b998,end=0x0800ba1c)
  assert m.get(0x200034a0)==old_iq+max(-3000,min(3000,167-old_iq))
  assert m.get(0x200034a4)==old_id+max(-3000,min(3000,169-old_id))
 out['IQ_ID_slew_cases']=2
 out['status']='PASS';out['unique_executed_addresses']=len(PCS)
 (HERE/'evidence.json').write_text(json.dumps(out,indent=2)+'\n')
 # Annotated function regions; code stops before literal pools/tables.
 ranges=[(0x0800863c,0x08008660),(0x0800866a,0x08008694),(0x0800b6d4,0x0800b708),(0x0800b708,0x0800b768),(0x0800b91c,0x0800ba56),(0x0800bb24,0x0800bb40),(0x0800c560,0x0800c576),(0x0800c580,0x0800c6a0),(0x0800c6b0,0x0800c834),(0x0800c944,0x0800c95a),(0x0800c978,0x0800c9c8),(0x08010b84,0x08010ba4)]
 ranges.append((0x080101b4,0x08010800))
 im=Image(241);lines=[]
 for a in sorted(PCS):
  if any(lo<=a<hi for lo,hi in ranges):
   i=next(md.disasm(im.data[a-0x08008000:a-0x08008000+4],a,count=1))
   lines.append(f'{i.address:08x}: {i.bytes.hex():<10} {i.mnemonic:<9} {i.op_str}{im.ann(i)}')
 (HERE/'current-path-v241.asm').write_text('\n'.join(lines)+'\n')
 print('PASS: 6 ADC pairs/sectors, 64-sample phase zeros, 30 signed/saturation cases, 12 IRQ-to-Clarke cases, 4 Park cases, 2 IQ/ID slew cases; no helper stubs')
if __name__=='__main__':run()
