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
		/* 批量创建简单名称文件，在桌面名称为9的文件夹下创建9.1至9.30文件夹
		    1.创建文件路径要使用 相对路径/ 或者 绝对路径\\
		    2.创建文件夹需要用到mkdir()方法，创建文件需要用到createNewFile()方法。
		*/
        String path = "D:\\User\\Github\\LeetCode\\Java\\src\\";
        String content = "/**\n" +
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
        int num = 10;
        for (int i = 1; i <= num; i++) {
            String fileName = path + "Solution" + i + ".java";
            File file = new File(fileName);
            if (!file.exists()){
                BufferedWriter out = new BufferedWriter(new FileWriter(file));
                out.write(String.format(content, i, i, i, i));
                out.close();
                System.out.println("文件创建成功！");
            }
        }
    }

}
