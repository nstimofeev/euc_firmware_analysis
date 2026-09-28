"""Execute the original current filter updates; compare their rescaled output.
This does not execute the downstream complete balance controller.
"""
from emulation import *
def trunc(n,d):return n//d if n>=0 else -((-n)//d)
rows=[]
for iq in [-1000,-1,0,1,1000]:
 for v,start,end,addr,factor,divisor in [(229,0x0801140e,0x08011434,0x20003458,400,400),(231,0x08011402,0x08011424,0x20003460,80,80)]:
  m=Machine(v);m.put(0x2000035c,0);m.put(addr,iq);expected=0;trace=[]
  for step in range(1,2001):
   m.run(start,end);expected=trunc(399*expected+factor*iq,400)
   actual=m.get(0x2000035c);assert actual==expected
   if step in [1,10,100,400,1000,2000]:trace.append({'step':step,'accumulator_raw':actual,'rescaled_integer':trunc(actual,divisor)})
  rows.append({'version':v,'constant_iq_raw':iq,'input_multiplier':factor,'downstream_divisor':divisor,'trace':trace})
save('current-rescaling-emulation.json',rows)
