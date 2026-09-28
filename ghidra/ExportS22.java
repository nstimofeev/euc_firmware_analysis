// Export automatic decompilation and function inventory; this is NOT original source.
// @category EUC
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.nio.file.*;
import java.io.*;
import com.google.gson.*;

public class ExportS22 extends GhidraScript {
 public void run() throws Exception {
  Path out=Path.of(getScriptArgs()[0]);Files.createDirectories(out);
  DecompInterface dec=new DecompInterface();DecompileOptions opts=new DecompileOptions();opts.grabFromProgram(currentProgram);dec.setOptions(opts);dec.openProgram(currentProgram);
  JsonArray functions=new JsonArray();int ok=0,failed=0;
  try(PrintWriter code=new PrintWriter(Files.newBufferedWriter(out.resolve("automatic_decompilation.c")));PrintWriter asm=new PrintWriter(Files.newBufferedWriter(out.resolve("listing.asm")))){
   code.println("/* AUTOMATIC GHIDRA OUTPUT. NOT ORIGINAL SOURCE, NOT BUILDABLE FIRMWARE.\n * Unreviewed functions, types, names, signatures and control flow may be incorrect.\n * See confirmed findings and isolated emulation tests for validated conclusions. */");
   for(Function f:currentProgram.getFunctionManager().getFunctions(true)){
    if(monitor.isCancelled())break;
    JsonObject obj=new JsonObject();obj.addProperty("entry","0x"+f.getEntryPoint().toString());obj.addProperty("name",f.getName());obj.addProperty("body_bytes",f.getBody().getNumAddresses());
    JsonArray calls=new JsonArray();for(Function c:f.getCalledFunctions(monitor))calls.add("0x"+c.getEntryPoint().toString());obj.add("called_functions",calls);
    DecompileResults r=dec.decompileFunction(f,20,monitor);obj.addProperty("decompiled",r.decompileCompleted());
    code.println("\n/* ENTRY 0x"+f.getEntryPoint()+" : "+f.getName()+" */");
    if(r.decompileCompleted() && r.getDecompiledFunction()!=null){code.println(r.getDecompiledFunction().getC());ok++;}
    else{obj.addProperty("error",r.getErrorMessage());code.println("/* DECOMPILATION FAILED */");failed++;}
    functions.add(obj);
   }
   for(Instruction i:currentProgram.getListing().getInstructions(true))asm.println(i.getAddress()+"  "+i.toString());
  }
  JsonObject meta=new JsonObject();meta.addProperty("program",currentProgram.getName());meta.addProperty("language",currentProgram.getLanguageID().toString());meta.addProperty("ghidra_version",getGhidraVersion());meta.addProperty("functions_decompiled",ok);meta.addProperty("functions_failed",failed);meta.add("functions",functions);
  Files.writeString(out.resolve("functions.json"),new GsonBuilder().setPrettyPrinting().create().toJson(meta)+"\n");dec.dispose();println("EUC export complete "+ok+" decompiled, "+failed+" failed");
 }
}
