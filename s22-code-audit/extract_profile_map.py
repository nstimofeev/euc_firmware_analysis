"""Locate profile routines in the supplied Ghidra exports; emulation validates them."""
from inspect_s22 import *
rows=[]
for p in sorted((ROOT/'decompiled').glob('*/automatic_decompilation.c')):
 blocks=p.read_text().split('/* ENTRY ')[1:]
 apply=next(b for b in blocks if 'diag_pidk_acc =' in b)
 init=next(b for b in blocks if '= 0xe000;' in b and len(b)<2000)
 applyaddr=apply[:10];name='FUN_'+applyaddr[2:]
 dyn=next(b for b in blocks if name+'(' in b and 'diag_VehicleSpeed' in b and len(b)<5000)
 base=re.search(r'DAT_(2000[0-9a-f]+) = 0xe000;',init).group(1)
 flags=re.findall(r'DAT_(2000[0-9a-f]+) ==',dyn)[:2]
 offsets=re.findall(r'DAT_(2000[0-9a-f]+) = 0;',dyn)[:2]
 rows.append({'version':int(p.parent.name[1:]),'apply':applyaddr,'initialize':init[:10],'schedule':dyn[:10],'profile_base':'0x'+base,'gating_flags':['0x'+x for x in flags],'delta_p':'0x'+offsets[0],'delta_acc':'0x'+offsets[1]})
assert len(rows)==15
(ROOT/'research/profile-function-map.json').write_text(json.dumps(rows,indent=2)+'\n')
print('PASS: located profile routines in 15 supplied exports')
