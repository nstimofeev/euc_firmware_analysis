"""Check literal evidence in original-image Ghidra exports; no device I/O."""
import json
from pathlib import Path
root=Path(__file__).resolve().parents[2]
def section(v,addr):
    s=(root/f'decompiled/v{v}/automatic_decompilation.c').read_text()
    key=f'/* ENTRY {addr} :'

    if key not in s: raise AssertionError((v,addr))
    begin=s.index(key)
    end=s.find('/* ENTRY ',begin+len(key))
    return s[begin:end if end>=0 else None]
checks={
 'uart_dma_irq':[(235,'0x08011560','uVar4 = 0x40 - iVar3;','DAT_4002005c = 0x40;'),(236,'0x08011560','uVar4 = 0x1f0 - iVar3;','DAT_4002005c = 0x1f0;')],
 'uart_dma_init':[(235,'0x08011974','local_54 = 0x40;'),(236,'0x08011978','local_54 = 0x1f0;')],
 'legacy_dispatch':[(235,'0x08011e54','param_1[0x11] != \'\\x10\'','FUN_08016944(local_10);','DAT_e000ed0c = (uVar8 & 0x700 | 0x5fa0000) + 4;'),(236,'0x08011e5c','param_1[0x11] != \'\\x10\'','FUN_080169cc(local_10,local_c);','DAT_e000ed0c = (uVar8 & 0x700 | 0x5fa0000) + 4;')],
 'bms_receiver':[(235,'0x08016944','uVar3 == 0x11','FUN_08017574(DAT_200009ca,local_2c + 2);'),(236,'0x080169cc','local_21b == 0x31','uVar2 < 0x25','FUN_08017764(DAT_200009ca,auStack_218,uVar2);')],
 'bms_writer':[(235,'0x08017574','uVar1 < 3','param_1 * 0xc + 0x8029008'),(236,'0x08017764','uVar2 < param_3','(param_1 + uVar2) * 0xc + 0x8029008')],
 'bms_forward':[(235,'0x08018b14','0x80'),(236,'0x08018d20','uVar3 = 0x84;','param_2 + 0x8029008 + uVar1')],
}
rows={}
for name,versions in checks.items():
    rows[name]=[]
    for v,addr,*needles in versions:
        text=section(v,addr)
        missing=[x for x in needles if x not in text]
        if missing:raise AssertionError((name,v,addr,missing))
        rows[name].append({'version':v,'entry':addr,'asserted_literals':needles})
out=Path(__file__).with_name('update-delta-evidence.json')
out.write_text(json.dumps(rows,ensure_ascii=False,indent=2)+'\n')
print(out)
