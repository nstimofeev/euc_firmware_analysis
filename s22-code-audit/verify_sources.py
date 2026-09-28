"""Recheck provenance, decryption, table bytes and restored initial RAM offline."""
from inspect_s22 import *
import hashlib
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
sys.path.insert(0,str(ROOT/'s22-platform-research'))
from restore_initialized_data import restore
KEY=bytes.fromhex('11965c6c2a7d1a182b4ce22745d948bde2abca7f36e2b24a4bb23a292acf293f')
history=json.loads((ROOT/'s22-developer-pack/release_history.json').read_text())
fields={'pidk_acc':260,'pidk_p':60,'pidk_speed':26,'PhcurrLimit_set':10000,'BuscurLimit_set':7500}
rows=[];access=[]
for h in history:
 v=int(h['versionNumber']);im=Image(v)
 original=(ROOT/f's22-developer-pack/firmware/original/S22-v{v}.bin').read_bytes()
 assert hashlib.sha256(original).hexdigest()==h['download']['sha256']
 assert hashlib.sha256(im.data).hexdigest()==h['decrypted_sha256']
 dec=Cipher(algorithms.AES(KEY),modes.CBC(bytes(16))).decryptor()
 assert dec.update(original)+dec.finalize()==im.data
 ram,report=restore(im.data);assert ram==im.ram
 values={}
 for index,r in enumerate(im.records):
  off=int(r['record_offset'],16);a,m,p,n=struct.unpack_from('<4I',im.data,off)
  assert (a,m,p,n)==tuple(int(r[k],16) for k in ['value_address','metadata_raw','name_pointer','name_field_raw'])
  assert im.data[p-BASE:p-BASE+(n&255)].decode()==r['name']
  width=(m>>8)&255;flag=(n>>8)&255
  if r['name'] in fields:
   value=int.from_bytes(ram[a-0x20000000:a-0x20000000+width],'little')
   assert value==fields[r['name']];values[r['name']]={'address':hex(a),'width':width,'initial_unsigned_raw':value}
  if v==235:access.append({'index':index,'name':r['name'],'address':hex(a),'width':width,'record_byte13':flag,'handler_action':'write_RAM_then_echo' if flag else 'read_then_echo'})
 assert set(values)==set(fields)
 rows.append({'version':v,'encrypted_sha256':hashlib.sha256(original).hexdigest(),'decrypted_sha256':hashlib.sha256(im.data).hexdigest(),'initialized_ram_sha256':hashlib.sha256(ram).hexdigest(),'diagnostic_records_checked':len(im.records),'initial_values':values})
(ROOT/'s22-code-audit/source-verification.json').write_text(json.dumps(rows,indent=2)+'\n')
(ROOT/'s22-code-audit/diagnostic-access-v235.json').write_text(json.dumps(access,indent=2)+'\n')
assert sum(r['record_byte13']!=0 for r in access)==20
print('PASS: 15 encrypted/decrypted sources, 15 RAM reconstructions, all diagnostic record bytes and 75 named initial values.')
