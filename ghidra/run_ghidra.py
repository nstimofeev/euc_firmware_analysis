"""Reproducible headless batch. Requires a separately installed Ghidra/JDK 21.
Ghidra projects are scratch; portable exports go into decompiled/vVERSION.
"""
import argparse,concurrent.futures,json,os,subprocess,tempfile
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--ghidra',type=Path,required=True);parser.add_argument('--java-home',type=Path)
parser.add_argument('--versions',type=int,nargs='*',default=[219,221,222,223,224,227,229,231,232,233,235,236,237,239,241])
parser.add_argument('--workers',type=int,default=2);parser.add_argument('--force',action='store_true')
args=parser.parse_args();env=dict(os.environ)
if args.java_home:env['JAVA_HOME']=str(args.java_home.resolve())
def run(v):
 out=ROOT/f'decompiled/v{v}';meta=out/'functions.json'
 if meta.exists() and not args.force:return {'version':v,'status':'existing'}
 log=ROOT/f'research/ghidra-v{v}.log'
 with tempfile.TemporaryDirectory(prefix=f'euc-ghidra-v{v}-') as project:
  cmd=[str(args.ghidra.resolve()/'support/analyzeHeadless'),project,'S22','-import',str(ROOT/f's22-developer-pack/firmware/decrypted/S22-v{v}-decrypted.bin'),'-processor','ARM:LE:32:Cortex','-loader','BinaryLoader','-loader-baseAddr','0x08008000','-scriptPath',str(ROOT/'ghidra'),'-preScript','ImportS22.java',str(ROOT),str(v),'-postScript','ExportS22.java',str(out),'-analysisTimeoutPerFile','300','-max-cpu','2']
  with log.open('w') as f:r=subprocess.run(cmd,env=env,stdout=f,stderr=subprocess.STDOUT)
  if r.returncode or not meta.exists():return {'version':v,'status':'failed','exit':r.returncode,'log':str(log)}
  data=json.loads(meta.read_text());return {'version':v,'status':'exported','functions_decompiled':data['functions_decompiled'],'functions_failed':data['functions_failed']}
with concurrent.futures.ThreadPoolExecutor(max_workers=args.workers) as pool:
 for result in pool.map(run,args.versions):print(json.dumps(result),flush=True)
