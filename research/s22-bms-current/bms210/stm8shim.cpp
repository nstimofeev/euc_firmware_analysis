#include "core/Memory.h"
#include "simulate/stm8.h"
#include "disasm/stm8.h"
struct Ctx {Memory m; SimulateStm8 s; Ctx():s(&m){m.endian=ENDIAN_BIG;s.set_show(false);s.set_delay(0);s.set_reg("SP",0xfff);}};
extern "C" {
void* create(){return new Ctx;}
void destroy(void*p){delete (Ctx*)p;}
void wr(void*p,unsigned a,unsigned v){((Ctx*)p)->m.write8(a,v);}
unsigned rd(void*p,unsigned a){return ((Ctx*)p)->m.read8(a);}
void regset(void*p,const char*n,unsigned v){((Ctx*)p)->s.set_reg(n,v);}
unsigned regget(void*p,const char*n){return ((Ctx*)p)->s.get_reg(n);}
void pcset(void*p,unsigned v){((Ctx*)p)->s.set_pc(v);}
int step(void*p){return ((Ctx*)p)->s.run(1,1);}
int decode(void*p,unsigned a,char*b){int lo,hi;return disasm_stm8(&((Ctx*)p)->m,a,b,256,0,&lo,&hi);}
}
