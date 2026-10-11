import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import java.math.BigInteger;

public class SeedBoot extends GhidraScript {
  public void run() throws Exception {
    if(currentProgram.getMemory().getBlock("RAM")==null)currentProgram.getMemory().createUninitializedBlock("RAM",toAddr(0x20000000L),0x20000,false);
    if(currentProgram.getMemory().getBlock("Flash_after_boot")==null)currentProgram.getMemory().createUninitializedBlock("Flash_after_boot",toAddr(0x08008000L),0x78000,false);
    if(currentProgram.getMemory().getBlock("Peripherals")==null)currentProgram.getMemory().createUninitializedBlock("Peripherals",toAddr(0x40000000L),0x30000,false);
    currentProgram.getProgramContext().setValue(currentProgram.getRegister("TMode"),toAddr(0x08000000L),toAddr(0x08007fffL),BigInteger.ONE);
    for (long base:new long[]{0x08000000L,0x08004000L}) {
      for (int off=4;off<0x130;off+=4) {
        long x=Integer.toUnsignedLong(getInt(toAddr(base+off)));
        if((x&1)==1 && x>=0x08000000L && x<0x08008000L) {
          Address a=toAddr(x&~1L);disassemble(a);
          if(getFunctionAt(a)==null)createFunction(a,null);
        }
      }
    }
    for(long x:new long[]{0x08000130L,0x0800278cL,0x08002b2cL,0x08004130L}) {
      Address a=toAddr(x);disassemble(a);if(getFunctionAt(a)==null)createFunction(a,null);
    }
    // Callback pointers in initialized data are invisible when only raw flash is imported.
    for(long off=0;off<0x8000;off+=4) {
      long x=Integer.toUnsignedLong(getInt(toAddr(0x08000000L+off)));
      if((x&1)==1 && x>=0x0800422cL && x<0x08005384L) {
        Address a=toAddr(x&~1L);disassemble(a);if(getFunctionAt(a)==null)createFunction(a,null);
      }
    }
  }
}
