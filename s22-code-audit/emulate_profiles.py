"""Execute stock profile defaults, selector, and speed-dependent gain scheduling.
All units are raw; no hardware or stability model. No function stubs.
"""
from emulation import *
metadata=json.loads((ROOT/'research/profile-function-map.json').read_text())
names=['pidk_p','pidk_acc','k_pcurr','pidk_speed']
rows=[];bounds=[];decay=[]
for meta in metadata:
 v=meta['version'];base=int(meta['profile_base'],16)
 init=int(meta['initialize'],16);apply=int(meta['apply'],16);schedule=int(meta['schedule'],16)
 im=Image(v);addresses={r['name']:int(r['value_address'],16) for r in im.records}
 def values(m):return {n:m.get(addresses[n],'<H') for n in names}
 for mode in [0,1,2]:
  for speed in [0,8000,8001,10000,10001,12000,12001,20000,20001,-12000]:
   m=Machine(v);m.run(init);m.put(base,0xe000+mode,'<H')
   for flag in meta['gating_flags']:m.put(int(flag,16),0,'<B')
   m.put(addresses['AgeModeflg'],0,'<B');m.put(addresses['VehicleSpeed'],speed)
   m.put(int(meta['delta_p'],16),0,'<h');m.put(int(meta['delta_acc'],16),0,'<h')
   m.run(apply,regs={UC_ARM_REG_R0:base});initial=values(m)
   table=list(struct.unpack('<19H',m.u.mem_read(base,38)))
   off=[2,14,8][mode]
   assert initial==dict(zip(names,[table[off]//100,table[off+1]//100,table[off+2]//100,table[off+3]//100]))
   delta_a=delta_p=0;trace=[]
   for step in range(1,161):
    s=abs(speed)
    target_a=(min(5000,max(0,(s-10000)*5000//10000)) if v<229 else min(12000,max(0,(s-8000)*12000//4000)))
    target_p=0 if v<229 else min(3000,max(0,(s-8000)*3000//4000))
    if delta_a<target_a:delta_a+=100
    elif delta_a>target_a+100:delta_a-=100
    if v>=229:
     if delta_p<target_p:delta_p+=30
     elif delta_p>target_p+30:delta_p-=30
    m.run(schedule)
    assert m.get(int(meta['delta_acc'],16),'<h')==delta_a
    assert m.get(int(meta['delta_p'],16),'<h')==delta_p
    fa=delta_a if mode==0 else (delta_a*2//3 if mode==1 and v>=229 else delta_a//3 if mode==2 and v>=229 else 0)
    fp=delta_p if mode==0 else (delta_p*2//3 if mode==1 else delta_p//3)
    expected=dict(zip(names,[(table[off]+fp)//100,(table[off+1]+fa)//100,table[off+2]//100,table[off+3]//100]))
    assert values(m)==expected,(v,mode,speed,step,values(m),expected)
    if step in [1,30,100,120,160]:trace.append({'call':step,'values':values(m),'delta_p_raw':delta_p,'delta_acc_raw':delta_a})
   rows.append({'version':v,'mode':hex(0xe000+mode),'speed_raw':speed,'base_profile_words':table,'initial_gains':initial,'trace':trace})
   if speed==20001:
    m.put(addresses['VehicleSpeed'],0)
    for _ in range(200):m.run(schedule)
    assert m.get(int(meta['delta_acc'],16),'<h')==100
    assert m.get(int(meta['delta_p'],16),'<h')==(30 if v>=229 else 0)
    decay.append({'version':v,'mode':hex(0xe000+mode),'speed_after_drop':0,'calls_after_drop':200,'gains':values(m),'residual_acc_raw':100,'residual_p_raw':30 if v>=229 else 0})
 # Each of the three gates clears deltas but does not immediately reapply base gains.
 for gate in meta['gating_flags']+[hex(addresses['AgeModeflg'])]:
  m=Machine(v);m.run(init)
  for n in names:m.put(addresses[n],123,'<H')
  for f in meta['gating_flags']+[hex(addresses['AgeModeflg'])]:m.put(int(f,16),0,'<B')
  m.put(int(gate,16),1,'<B');m.put(int(meta['delta_p'],16),90,'<h');m.put(int(meta['delta_acc'],16),900,'<h')
  m.run(schedule)
  assert values(m)==dict.fromkeys(names,123)
  assert m.get(int(meta['delta_p'],16),'<h')==m.get(int(meta['delta_acc'],16),'<h')==0
 for mode in [0xe000,0xe001,0xe002,0,0xffff]:
  for raw in [0,99,100,199,20000,20001,24000,24001,64000,64001,65535]:
   m=Machine(v);m.u.mem_write(0x20018000,struct.pack('<19H',mode,*([raw]*18)))
   for n in names:m.put(addresses[n],123,'<H')
   m.run(apply,regs={UC_ARM_REG_R0:0x20018000})
   expected=dict.fromkeys(names,123) if mode not in [0xe000,0xe001,0xe002] else dict(zip(names,[max(1,min(raw//100,cap)) for cap in [240,640,200,200]]))
   assert values(m)==expected,(v,mode,raw,values(m),expected)
   bounds.append({'version':v,'mode':hex(mode),'input_u16':raw,'gains':values(m)})
save('profile-scheduling-emulation.json',rows)
save('profile-selector-bounds.json',bounds)
save('profile-speed-drop.json',decay)
print('PASS 45 gating cases; no helper stubs')
