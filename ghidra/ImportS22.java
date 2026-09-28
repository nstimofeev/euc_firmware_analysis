// Import restored RAM, diagnostic labels, vector roots and candidate function roots.
// @category EUC
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.listing.*;
import java.nio.file.*;
import java.io.*;
import java.math.BigInteger;
import com.google.gson.*;

public class ImportS22 extends GhidraScript {
 public void run() throws Exception {
  String[] args=getScriptArgs();Path root=Path.of(args[0]);String ver=args[1];
  Memory mem=currentProgram.getMemory();
  Address base=toAddr(0x08008000L);
  if(!currentProgram.getMinAddress().equals(base)) currentProgram.setImageBase(base,true);
  MemoryBlock flash=mem.getBlock(base);flash.setName("APP_FLASH");flash.setRead(true);flash.setWrite(false);flash.setExecute(true);
  byte[] ram=new byte[0x20000];byte[] init=Files.readAllBytes(root.resolve("s22-platform-research/initialized-data/S22-v"+ver+"-decrypted-initialized-ram.bin"));System.arraycopy(init,0,ram,0,init.length);
  mem.createInitializedBlock("RAM",toAddr(0x20000000L),new ByteArrayInputStream(ram),ram.length,monitor,false).setWrite(true);
  MemoryBlock io=mem.createUninitializedBlock("MMIO",toAddr(0x40000000L),0x30000,false);io.setWrite(true);io.setVolatile(true);
  mem.createUninitializedBlock("BOOT_FLASH_UNAVAILABLE",toAddr(0x08000000L),0x8000,false).setWrite(false);
  mem.createUninitializedBlock("BITBAND_IO",toAddr(0x42000000L),0x400000,false).setVolatile(true);
  mem.createUninitializedBlock("SYSTEM",toAddr(0xe000e000L),0x2000,false).setVolatile(true);
  currentProgram.getProgramContext().setValue(currentProgram.getRegister("TMode"),base,flash.getEnd(),BigInteger.ONE);
  JsonObject d=JsonParser.parseString(Files.readString(root.resolve("s22-developer-pack/diagnostics/S22-v"+ver+"-decrypted-diagnostics.json"))).getAsJsonObject();
  for(JsonElement e:d.getAsJsonArray("records")){
   JsonObject r=e.getAsJsonObject();long a=Long.decode(r.get("value_address").getAsString());
   String name="diag_"+r.get("name").getAsString().replaceAll("[^A-Za-z0-9_]","_");
   if(getSymbolAt(toAddr(a))==null) createLabel(toAddr(a),name,true);
   long p=Long.decode(r.get("name_pointer").getAsString());
   if(getDataAt(toAddr(p))==null)try{createAsciiString(toAddr(p));}catch(Exception ignored){}
   long rec=Long.decode(r.get("record_address").getAsString());
   for(int k=0;k<4;k++)if(getDataAt(toAddr(rec+k*4))==null)try{createData(toAddr(rec+k*4),DWordDataType.dataType);}catch(Exception ignored){}
  }
  for(int n=0;n<76;n++){
   long value=Integer.toUnsignedLong(mem.getInt(base.add(n*4)));
   createData(base.add(n*4),DWordDataType.dataType);
   if(n>0 && value>=0x08008000L && value<=flash.getEnd().getOffset() && (value&1)!=0){
    Address a=toAddr(value&~1L);currentProgram.getSymbolTable().addExternalEntryPoint(a);disassemble(a);
    if(getFunctionAt(a)==null)createFunction(a,null);
   }
  }
  for(int k=0;k<8;k++)try{createData(base.add(0x300+k*4),DWordDataType.dataType);}catch(Exception ignored){}
  Path seeds=root.resolve("ghidra/seeds-v"+ver+".json");
  if(Files.exists(seeds))for(JsonElement e:JsonParser.parseString(Files.readString(seeds)).getAsJsonArray()){
   Address a=toAddr(Long.decode(e.getAsString()));
   if(getInstructionAt(a)==null)disassemble(a);
   if(getFunctionAt(a)==null)try{createFunction(a,null);}catch(Exception ignored){}
  }
  Path names=root.resolve("ghidra/symbols.json");
  JsonObject all=JsonParser.parseString(Files.readString(names)).getAsJsonObject();
  if(all.has(ver))for(var e:all.getAsJsonObject(ver).entrySet()){
   Address a=toAddr(Long.decode(e.getKey()));Function f=getFunctionAt(a);
   if(f==null){disassemble(a);f=createFunction(a,e.getValue().getAsString());}
   if(f!=null)f.setName(e.getValue().getAsString(),SourceType.USER_DEFINED);
  }
  println("EUC import complete v"+ver);
 }
}
