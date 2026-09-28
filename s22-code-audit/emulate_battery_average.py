"""Execute original sample aggregation blocks. Sample semantics remain inferred."""
from inspect_s22 import *
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_THUMB
from unicorn.arm_const import UC_ARM_REG_PC
cases={'all_2980':[2980]*16,'one_zero':[0]+[2980]*15,
       'one_ffff':[65535]+[2980]*15,'half_missing':[2980]*8+[0]*8,
       'all_zero':[0]*16,'all_ffff':[65535]*16}
rows=[]
for v,start,end,arrays in [(239,0x08023aa4,0x08023af0,[0x20004cea,0x20004eaa]),
                          (241,0x080240a0,0x08024124,[0x200050b2,0x200053ba])]:
 im=Image(v);u=Uc(UC_ARCH_ARM,UC_MODE_THUMB)
 u.mem_map(0x08000000,0x80000);u.mem_write(BASE,im.data);u.mem_map(0x20000000,0x20000)
 for name,values in cases.items():
  for n,a in enumerate(arrays):u.mem_write(a,struct.pack('<8H',*values[n*8:n*8+8]))
  u.emu_start(start|1,end,count=1500);assert u.reg_read(UC_ARM_REG_PC)==end
  out=struct.unpack('<b',u.mem_read(0x20003138,1))[0]
  selected=values if v==239 else [x for x in values if 0<x<65535]
  mean=sum(selected)//max(1,len(selected)); expected=int((mean-2730)/10)
  expected=(expected+128)%256-128
  assert out==expected
  rows.append({'version':v,'case':name,'input_u16':values,'output_i8_raw':out,
               'valid_count_in_model':len(selected),'mean_in_model':mean})
(ROOT/'s22-code-audit/battery-average-emulation.json').write_text(json.dumps(rows,indent=2)+'\n')
for r in rows:print(r['version'],r['case'],r['output_i8_raw'])
