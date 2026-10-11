import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.program.model.listing.Function;
import java.io.PrintWriter;

public class ExportBoot extends GhidraScript {
  public void run() throws Exception {
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    PrintWriter w=new PrintWriter(getScriptArgs()[0]);
    w.println("/* Automatic Ghidra pseudocode, NOT original source; verify with bytes and execution. */");
    for(Function f:currentProgram.getFunctionManager().getFunctions(true)) {
      var r=d.decompileFunction(f,30,monitor);
      w.println("\n/* ENTRY "+f.getEntryPoint()+" : "+f.getName()+" */");
      if(r.decompileCompleted())w.println(r.getDecompiledFunction().getC());
      else w.println("/* "+r.getErrorMessage()+" */");
    }
    w.close();d.dispose();
  }
}
