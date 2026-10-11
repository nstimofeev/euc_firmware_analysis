import ctypes as c,struct
from pathlib import Path
ROOT=Path(__file__).resolve().parent
lib=c.CDLL(str(ROOT/'build/stm8shim.so'))
lib.create.restype=c.c_void_p
for name in ['destroy','wr','rd','regset','regget','pcset','step','decode']:
 f=getattr(lib,name);f.argtypes={'destroy':[c.c_void_p],'wr':[c.c_void_p,c.c_uint,c.c_uint],'rd':[c.c_void_p,c.c_uint],'regset':[c.c_void_p,c.c_char_p,c.c_uint],'regget':[c.c_void_p,c.c_char_p],'pcset':[c.c_void_p,c.c_uint],'step':[c.c_void_p],'decode':[c.c_void_p,c.c_uint,c.c_char_p]}[name]
class CPU:
 def __init__(self):
  self.p=lib.create();self.trace=[]
  for i,v in enumerate(open(ROOT/'KSS22BA-2202-2.10-staged.bin','rb').read()):lib.wr(self.p,0x8b00+i,v)
 def wr(self,a,b):
  for i,v in enumerate(b):lib.wr(self.p,a+i,v)
 def u16(self,a,v):self.wr(a,struct.pack('>H',v&65535))
 def fl(self,a,v):self.wr(a,struct.pack('>f',v))
 def rd(self,a,n=1):return bytes(lib.rd(self.p,a+i) for i in range(n))
 def reg(self,n,v=None):
  if v is not None:lib.regset(self.p,n.encode(),v)
  return lib.regget(self.p,n.encode())
 def dec(self,a):
  b=c.create_string_buffer(256);n=lib.decode(self.p,a,b);return n,b.value.decode()
 def run(self,start,stop,limit=1000000):
  lib.pcset(self.p,start)
  for i in range(limit):
   pc=self.reg('PC')
   if pc in ({stop} if isinstance(stop,int) else stop):return i
   self.trace.append(pc)
   if lib.step(self.p)<0:raise RuntimeError((hex(pc),self.dec(pc)))
  raise RuntimeError(('limit',hex(self.reg('PC'))))
