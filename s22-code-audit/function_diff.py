from inspect_s22 import *
from capstone import CS_GRP_JUMP,CS_GRP_CALL
from capstone.arm import ARM_REG_LR,ARM_REG_SP
import hashlib,difflib
OUT=ROOT/'s22-code-audit'
def functions(im):
 limit=int(im.records[0]['record_offset'],16)
 starts=[]
 for off in range(0,limit,2):
  h=struct.unpack_from('<H',im.data,off)[0]
  if h&0xff00==0xb500 or h==0xe92d:
   i=next(md.disasm(im.data[off:off+4],BASE+off,count=1),None)
   if i and i.mnemonic.startswith('push') and 'lr' in i.op_str:starts.append(i.address)
 funcs={}
 for start in starts:
  pending=[start]; seen={};bad=False
  while pending and len(seen)<6000:
   pc=pending.pop()
   while pc not in seen:
    if not start<=pc<min(BASE+limit,start+24000):break
    i=next(md.disasm(im.data[pc-BASE:pc-BASE+4],pc,count=1),None)
    if not i:bad=True;break
    seen[pc]=i
    if (i.mnemonic.startswith('pop') and 'pc' in i.op_str) or (i.mnemonic=='bx') or (i.mnemonic=='mov' and i.op_str=='pc, lr'):break
    if i.group(CS_GRP_JUMP) and not i.group(CS_GRP_CALL):
     if i.operands[-1].type==ARM_OP_IMM:pending.append(i.operands[-1].imm)
     if i.mnemonic in ('b','b.w','tbb','tbh'):break
    pc+=i.size
  if len(seen)<6 or bad:continue
  tokens=[];ann=[]
  for pc,i in sorted(seen.items()):
   op=i.op_str;a=im.ann(i)
   if a:
    val=int(re.search(r'= (0x[0-9a-f]+)',a)[1],16)
    if 0x20000000<=val<0x20020000:val=im.names.get(val,hex(val))
    elif BASE<=val<BASE+len(im.data):val='FLASH_PTR'
    else:val=hex(val)
    op=op.split(',')[0]+', ='+str(val)
   elif i.mnemonic in ('bl','blx'):op='CALL'
   elif i.group(CS_GRP_JUMP):op=re.sub('#0x[0-9a-f]+','TARGET',op)
   tokens.append(i.mnemonic+' '+op)
   ann.append(f'{pc:08x}: {i.bytes.hex():<10} {i.mnemonic:<9} {i.op_str}{a}')
  funcs[start]={'start':start,'end':max(seen)+seen[max(seen)].size,'tokens':tokens,'asm':ann,'refs':sorted({im.ann(i).split('= ')[-1] for i in seen.values() if im.ann(i)})}
 return funcs
if __name__=='__main__':
 va,vb=map(int,sys.argv[1:3]);a=functions(Image(va));b=functions(Image(vb))
 matches=[];used=set();unique={}
 for k,f in b.items():unique.setdefault(tuple(f['tokens']),[]).append(k)
 unmatched=[]
 for k,f in a.items():
  options=unique.get(tuple(f['tokens']),[])
  if len(options)==1 and options[0] not in used:used.add(options[0]);matches.append({'a':hex(k),'b':hex(options[0]),'kind':'normalized_identical','instructions':len(f['tokens'])})
  else:unmatched.append(k)
 for k in sorted(unmatched,key=lambda k:-len(a[k]['tokens'])):
  f=a[k];candidates=[]
  for j,g in b.items():
   if j in used or not .5<len(f['tokens'])/len(g['tokens'])<2:continue
   sm=difflib.SequenceMatcher(None,f['tokens'],g['tokens'],autojunk=False)
   if sm.quick_ratio()<.68:continue
   score=sm.ratio()
   if score>.65:candidates.append((score,j))
  if not candidates:continue
  score,j=max(candidates);used.add(j)
  matches.append({'a':hex(k),'b':hex(j),'kind':'candidate_changed','score':score,'instructions_a':len(f['tokens']),'instructions_b':len(b[j]['tokens']),'refs_a':f['refs'],'refs_b':b[j]['refs']})
  (OUT/f'v{va}-{vb}-{k:08x}.diff').write_text('\n'.join(difflib.unified_diff(f['tokens'],b[j]['tokens'],fromfile=hex(k),tofile=hex(j),n=5))+'\n')
 for v,fs in [(va,a),(vb,b)]:
  (OUT/f'functions-{v}.json').write_text(json.dumps(fs,indent=2))
 (OUT/f'matches-{va}-{vb}.json').write_text(json.dumps(matches,indent=2))
 print(va,vb,'functions',len(a),len(b),'normalized identical',sum(m['kind']=='normalized_identical' for m in matches))
 for m in sorted([m for m in matches if m['kind']=='candidate_changed'],key=lambda m:-max(m['instructions_a'],m['instructions_b'])):
  print(m['a'],m['b'],round(m['score'],3),m['instructions_a'],m['instructions_b'],','.join(x for x in m['refs_a'] if any(n in x for n in ['pid','Speed','curr','Temp','pintch','light','Voltage','motion'])))
