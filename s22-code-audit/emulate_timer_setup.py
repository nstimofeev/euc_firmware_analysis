"""Execute original TIM1 init with inert MMIO and record actual register writes."""
from emulation import *
rows=[]
for v in [235,236]:
 m=Machine(v,True);m.run(0x8010618)
 registers={hex(o):hex(m.get(0x40012c00+o,'<I')) for o in [0,4,8,12,0x18,0x1c,0x20,0x28,0x2c,0x30,0x34,0x38,0x3c,0x40,0x44]}
 assert registers['0x28']=='0x0' and registers['0x2c']=='0xbb8' and registers['0x30']=='0x1'
 assert registers['0x0']=='0x120'
 m.run(0x800c790)
 assert m.get(0x40012808,'<I')==0x9000
 rows.append({'ADC2_CR2_injected_setup':'0x9000','version':v,'function':'0x08010618','peripheral_base':'0x40012c00','registers':registers,'mmio_model':'plain memory, no peripheral behavior'})
save('timer-setup-emulation.json',rows)
