"""v237 charge state 20 and transition from state 2; MMIO is inert memory."""
from emulation import *
rows=[]
for bit0,bit1,latch0,latch1 in [(2,2,0,0),(0,2,1,0),(2,0,0,1),(0,0,0,0)]:
 m=Machine(237,True);m.put(0x2000066c,2,'<B');m.put(0x20000670,999,'<H')
 m.put(0x20004d39,bit0,'<B');m.put(0x20004ef9,bit1,'<B');m.put(0x2000066e,latch0,'<B');m.put(0x2000066f,latch1,'<B')
 m.run(0x801b568,0x801b5d4)
 state=m.get(0x2000066c,'<B');assert state==(20 if ((bit0==0 and latch0==1) or (bit1==0 and latch1==1)) else 2)
 rows.append({'case':'status_transition','status_bits':[bit0,bit1],'prior_latches':[latch0,latch1],'state_after':state,'counter_after':m.get(0x20000670,'<H')})
for timer in [1799,1800,1801,1999,2000]:
 for batstate,latch in [(0,0),(1,0),(1,1)]:
  m=Machine(237,True);m.put(0x2000066c,20,'<B');m.put(0x20000670,timer,'<H');m.put(0x20003152,batstate,'<B');m.put(0x2000066d,latch,'<B')
  m.run(0x801b51a,0x801b9ac)
  state=m.get(0x2000066c,'<B');assert state==(2 if batstate!=0 and latch==0 and timer>1800 else 20)
  assert m.get(0x20000670,'<H')==min(timer+1,2000)
  rows.append({'case':'state20','counter_before':timer,'BatState':batstate,'latch_before':latch,'state_after':state,'counter_after':m.get(0x20000670,'<H')})
save('charge-recovery-emulation.json',rows)
