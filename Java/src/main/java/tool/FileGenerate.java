package tool;

import org.yaml.snakeyaml.Yaml;

import java.io.*;
import java.util.Map;

/**
 * @author windows
 */

public class FileGenerate {
    public static void main(String[] args) throws IOException {
		/*  批量创建简单名称文件
		    1.创建文件路径要使用 相对路径/ 或者 绝对路径\\
		    2.创建文件夹需要用到mkdir()方法，创建文件需要用到createNewFile()方法。
		*/
        // properties
//        InputStream inputStream = new BufferedInputStream(new FileInputStream("src/main/resources/file.properties"));
//        Properties prop = new Properties();
//        prop.load(inputStream);
//        String path = prop.getProperty("path");
//        int begin = Integer.parseInt(prop.getProperty("fileBegin"));
//        int end = Integer.parseInt(prop.getProperty("fileEnd"));

        //yaml
        Yaml yaml = new Yaml();
        InputStream inputStreamYaml = new BufferedInputStream(new FileInputStream("src/main/resources/file.yaml"));
        Map<String, Object> map = yaml.load(inputStreamYaml);
        String path = (String) map.get("path");
        int begin = (int) map.get("fileBegin");
        int end = (int) map.get("fileEnd");

        String content = "package Solution%d_%d;    \n" +
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
