"""Inspect named initialized values, not effective riding configuration."""
from emulation import *
rows=[]
for v in [219,221,222,223,224,227,229,231,232,233,235,236,237,239,241]:
 im=Image(v); values={}
 for r in im.records:
  if r['name'] not in ['k_pcurr','pidk_cmbfw','pidk_cmbtn','pidk_agfac_v','pidk_ncurr']:continue
  a=int(r['value_address'],16)-0x20000000;w=(int(r['metadata_raw'],16)>>8)&255
  values[r['name']]=int.from_bytes(im.ram[a:a+w],'little')
 assert values==dict(k_pcurr=2,pidk_cmbfw=0,pidk_cmbtn=int(v<229),pidk_agfac_v=int(v<229),pidk_ncurr=int(v<229)), (v,values)
 rows.append({'version':v,'initial_values_raw':values})
save('extended-initial-parameters.json',rows)
