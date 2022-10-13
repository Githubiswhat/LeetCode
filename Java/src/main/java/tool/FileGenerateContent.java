package tool;

/**
 * @author windows
 */
public class FileGenerateContent {

    public static final String packageSolutionContent = "package Solution%d_%d;\n";

    public static final String packageContent = "package %s;\n";

    public static final String content =
            "/**\n" +
            " * @author windows\n" +
            " */\n" +
            "public class Solution%d {\n" +
            "    \n" +
            "    \n" +
            "    public static void main(String[] args) {\n" +
            "        Solution%d solution%d = new Solution%d();\n" +
            "    }\n" +
            "}";




}
