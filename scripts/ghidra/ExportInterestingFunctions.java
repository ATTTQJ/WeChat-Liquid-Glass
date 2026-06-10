// Ghidra headless post-script.
// Exports decompiler output for functions that look related to tab bar glass/layout.

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.File;
import java.io.FileWriter;
import java.util.Arrays;
import java.util.List;

public class ExportInterestingFunctions extends GhidraScript {
    private boolean matches(String name, List<String> keywords) {
        String lower = name.toLowerCase();
        for (String keyword : keywords) {
            if (lower.contains(keyword.toLowerCase())) {
                return true;
            }
        }
        return false;
    }

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            throw new IllegalArgumentException("output path required");
        }

        File output = new File(args[0]);
        List<String> keywords = Arrays.asList(
            "TabBar",
            "tabbar",
            "TabBarItem",
            "Platter",
            "SearchTabBar",
            "GlassSizeMode",
            "NativeTabBarBackground",
            "TabBarCompatibility",
            "AdjustedTabBarItem",
            "ApplyGlassSizeModeToTabBar",
            "ApplyTabBarItemLayout",
            "RestoreTabBarItemLayout",
            "FindTabBarPlatterView",
            "GetTabBarPlatterRect",
            "ShouldSuppressNativeTabBarBackground"
        );

        try (FileWriter writer = new FileWriter(output)) {
            writer.write("# Tab bar related decompile\n\n");
            writer.write("Program: " + currentProgram.getName() + "\n");
            writer.write("Language: " + currentProgram.getLanguageID() + "\n\n");

            DecompInterface decompiler = new DecompInterface();
            decompiler.openProgram(currentProgram);

            int count = 0;
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                String name = function.getName(true);
                if (!matches(name, keywords)) {
                    continue;
                }

                count++;
                writer.write("\n\n---\n\n");
                writer.write("## " + name + "\n\n");
                writer.write("Entry: `" + function.getEntryPoint() + "`\n\n");

                DecompileResults results = decompiler.decompileFunction(function, 90, monitor);
                if (results != null && results.decompileCompleted() && results.getDecompiledFunction() != null) {
                    writer.write("```c\n");
                    writer.write(results.getDecompiledFunction().getC());
                    writer.write("\n```\n");
                } else {
                    writer.write("Decompiler failed");
                    if (results != null) {
                        writer.write(": " + results.getErrorMessage());
                    }
                    writer.write("\n");
                }
            }

            writer.write("\n\n---\n\n");
            writer.write("Matched functions: `" + count + "`\n");
            decompiler.dispose();
        }
    }
}
