"""Synthetic full balance-function tests for the changed meaning of k_pcurr.
Equal synthetic numbers at different signal stages do not imply equal physical current.
"""
from emulation import *
from unicorn import UC_HOOK_MEM_READ
rows=[]
for v,entry,state,out in [(227,0x0801017c,0x200002d4,0x20000318),(229,0x08010428,0x200002d0,0x20000314)]:
 for gain in [0,1,3,10,100]:
  m=Machine(v);names={r['name']:r for r in m.im.records}
  def named(n,value):
   r=names[n];width=(int(r['metadata_raw'],16)>>8)&255
   m.u.mem_write(int(r['value_address'],16),int(value%(1<<(8*width))).to_bytes(width,'little'))
  named('motionstep',3);m.put(state,3,'<B')
  for n in ['pintch','angleoffset_int','s_acc','HallRSP']:named(n,0)
  named('k_pcurr',gain)
  m.put(0x20003294,11400);m.put(0x2000327e,0x40,'<B')
  m.put(0x2000028c,32000);m.put(0x20000290,32000)
  if v==227:
   named('g_average_iq',5000);named('commbopcurr',4000);named('commbospeed0',0)
   m.put(0x200002ac,0);m.put(0x200002a8,0)
   expected=4000//(gain+1)
  else:
   named('g_averX10_iq',5000*400);m.put(0x200002b0,0);m.put(0x200002a4,0)
   expected=((4800*gain//100)*2000)//5000
  watched=[];lo=int(names['pidk_cmbtn']['value_address'],16);hi=int(names['pidk_ncurr']['value_address'],16)+2
  m.u.hook_add(UC_HOOK_MEM_READ,lambda u,access,address,size,value,data:watched.append((address,size)) if address<hi and address+size>lo else None)
  m.run(entry)
  actual=m.get(out,'<h');assert actual==expected,(v,gain,actual,expected)
  assert not watched
  rows.append({'version':v,'k_pcurr':gain,'synthetic_output_raw':actual,'reads_of_three_zeroed_parameters':watched})
save('current-gain-semantics.json',rows)
