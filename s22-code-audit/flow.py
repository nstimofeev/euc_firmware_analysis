"""Candidate xrefs and bounded Thumb control-flow reconstruction.

This is not a complete disassembler. Xrefs from a halfword scan require inspection.
The bounded walker stops at returns, records external tails, and expands nearby
cmp/bhs-or-bhi-guarded PC-relative TBB/TBH tables. Unknown indirect jumps stop it.
"""
from inspect_s22 import *
from capstone import CS_GRP_JUMP,CS_GRP_CALL

def callrefs(im,target):
 out=[]
 for off in range(0,len(im.data)-3,2):
  if struct.unpack_from('<H',im.data,off)[0]&0xf800!=0xf000:continue
  i=next(md.disasm(im.data[off:off+4],BASE+off,count=1),None)
  if i and i.mnemonic in ('bl','b.w') and i.operands[0].type==ARM_OP_IMM and i.operands[0].imm==(target&~1):
   out.append({'address':hex(i.address),'instruction':i.mnemonic,'target':hex(target&~1)})
 return out

def ptrrefs(im,target):
 return [hex(BASE+o) for o in range(0,len(im.data)-3,4) if struct.unpack_from('<I',im.data,o)[0] in (target&~1,target|1)]

def walk(im,start,end):
 pending=[start];seen={};tables=[];unresolved=[];tails=[]
 while pending:
  pc=pending.pop()
  while pc not in seen:
   if not start<=pc<end:tails.append(hex(pc));break
   i=next(md.disasm(im.data[pc-BASE:pc-BASE+4],pc,count=1),None)
   if not i:unresolved.append({'address':hex(pc),'reason':'decode'});break
   seen[pc]=i
   if (i.mnemonic.startswith('pop') and 'pc' in i.op_str) or i.mnemonic=='bx' or (i.mnemonic=='mov' and i.op_str=='pc, lr'):break
   if i.mnemonic in ('tbb','tbh'):
    n=None
    for off in range(4,18,2):
     a=pc-off;j=next(md.disasm(im.data[a-BASE:a-BASE+4],a,count=1),None)
     if j and j.mnemonic.startswith('cmp') and j.operands[-1].type==ARM_OP_IMM:
      between=list(md.disasm(im.data[a-BASE+j.size:pc-BASE],a+j.size))
      bounds=[q.mnemonic.split('.')[0] for q in between if q.mnemonic.split('.')[0] in ('bhs','bhi')]
      if bounds:n=j.operands[-1].imm+(1 if bounds[-1]=='bhi' else 0);break
    if n is None or n>256 or '[pc,' not in i.op_str:
     unresolved.append({'address':hex(pc),'reason':'unknown table bound'});break
    width=1 if i.mnemonic=='tbb' else 2;table=pc+4
    values=[int.from_bytes(im.data[table-BASE+k*width:table-BASE+(k+1)*width],'little') for k in range(n)]
    targets=[table+2*v for v in values]
    tables.append({'instruction':hex(pc),'table':hex(table),'entries':n,'targets':[hex(t) for t in targets]})
    pending+=targets;break
   if i.group(CS_GRP_JUMP) and not i.group(CS_GRP_CALL):
    if i.operands[-1].type==ARM_OP_IMM:pending.append(i.operands[-1].imm)
    else:unresolved.append({'address':hex(pc),'reason':'indirect jump'})
    if i.mnemonic in ('b','b.w'):break
   if 'pc' in i.op_str.split(',')[0] and i.mnemonic.startswith('ldr'):
    unresolved.append({'address':hex(pc),'reason':'load PC'});break
   pc+=i.size
 return {'start':hex(start),'end_exclusive':hex(end),'instructions':len(seen),
         'calls':[{'site':hex(a),'target':hex(i.operands[0].imm)} for a,i in sorted(seen.items()) if i.mnemonic=='bl' and i.operands[0].type==ARM_OP_IMM],
         'tables':tables,'unresolved':unresolved,'external_tails':sorted(set(tails)),
         'asm':[f'{a:08x}: {i.bytes.hex():<10} {i.mnemonic:<9} {i.op_str}{im.ann(i)}' for a,i in sorted(seen.items())]}

if __name__=='__main__':
 im=Image(int(sys.argv[1]));mode=sys.argv[2];target=int(sys.argv[3],0)
 if mode=='refs':print(json.dumps({'calls':callrefs(im,target),'pointers':ptrrefs(im,target)},indent=2))
 elif mode=='walk':print(json.dumps(walk(im,target,int(sys.argv[4],0)),indent=2))
