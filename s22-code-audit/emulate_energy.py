"""Original energy-accounting blocks, including state gate and 50-call rollup."""
from emulation import *
rows=[]
for v,start,end,base in [(233,0x802013e,0x80201c2,0x20003290),(235,0x802027a,0x8020356,0x200032a4)]:
 for label,currents,state in [('positive',[1000]*50,4),('negative',[-1000]*50,4),('mixed',[1000]*25+[-1000]*25,4),('inactive',[1000]*50,2)]:
  m=Machine(v);m.put(base,state,'<B');m.put(base+0x20,12000)
  for a in [0x20000204,0x20000208,0x2000020c,0x20000210]:m.put(a,0)
  for off in [0x3c,0x40,0x44]:m.put(base+off,0)
  for c in currents:
   m.put(base+0x1c,c);m.run(start,end,{UC_ARM_REG_R1:base})
  net=m.get(base+0x3c);neg=m.get(base+0x40) if v==235 else None;pos=m.get(base+0x44) if v==235 else None
  expected=0 if state==2 else sum(int((c*13)/100) if v==235 else int(c/10) for c in currents)*120//500
  assert net==expected
  if v==235:
   assert pos==(0 if state==2 else sum(max(0,int(c*13/100))*120 for c in currents)//500)
   assert neg==(0 if state==2 else sum(max(0,-int(c*13/100))*120 for c in currents)//500)
  rows.append({'version':v,'case':label,'calls':50,'state':state,'voltage_raw':12000,'net_raw':net,'negative_magnitude_raw':neg,'positive_raw':pos})
save('energy-emulation.json',rows)
