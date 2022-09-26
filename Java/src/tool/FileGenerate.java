package tool;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

/**
 * @author windows
 */

public class FileGenerate {
    public static void main(String[] args) throws IOException {
		/*  批量创建简单名称文件
		    1.创建文件路径要使用 相对路径/ 或者 绝对路径\\
		    2.创建文件夹需要用到mkdir()方法，创建文件需要用到createNewFile()方法。
		*/
        String path = "D:\\User\\Github\\LeetCode\\Java\\src\\Solution%d_%d\\";
        String content = "package Solution%d_%d;" +
                "    \n" +
                "/**\n" +
                " * @author windows\n" +
                " */\n" +
                "public class Solution%d {\n" +
                "    \n" +
                "    \n" +
                "    \n" +
                "    \n" +
                "    \n" +
                "    public static void main(String[] args) {\n" +
                "        Solution%d solution%d = new Solution%d();\n" +
                "    }\n" +
                "}";
        int begin = 901;
        int end = 1000;
        path = String.format(path, begin, end);
        File dir = new File(path);
        if (!dir.exists()) {
            dir.mkdirs();
        }
        for (int i = begin; i <= end; i++) {
            String fileName = path + "Solution" + i + ".java";
            File file = new File(fileName);
            if (!file.exists()) {
                BufferedWriter out = new BufferedWriter(new FileWriter(file));
                out.write(String.format(content, begin, end, i, i, i, i));
                out.close();
                System.out.println("文件创建成功！");
            }
        }
    }

}
