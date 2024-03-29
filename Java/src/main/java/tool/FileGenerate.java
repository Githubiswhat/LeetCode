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
        // properties
//        InputStream inputStream = new BufferedInputStream(new FileInputStream("src/main/resources/file.properties"));
//        Properties prop = new Properties();
//        prop.load(inputStream);
//        String path = prop.getProperty("path");
//        int begin = Integer.parseInt(prop.getProperty("fileBegin"));
//        int end = Integer.parseInt(prop.getProperty("fileEnd"));

        //yaml
        String active = (String) YamlUtil.getValueByKey("file.yaml", "active", "active");
        String path = (String) YamlUtil.getValueByKey("file.yaml", active, "path");
        int begin = (int) YamlUtil.getValueByKey("file.yaml", active, "fileBegin");
        int end = (int) YamlUtil.getValueByKey("file.yaml", active, "fileEnd");
        boolean needFormat = (boolean) YamlUtil.getValueByKey("file.yaml", active, "needFormat");

        String packageContent = String.format(FileGenerateContent.packageContent, active);
        if (needFormat) {
            path = String.format(path, begin, end);
            packageContent = String.format(FileGenerateContent.packageSolutionContent, begin, end);
        }
        String content = packageContent + FileGenerateContent.content;

        File dir = new File(path);
        if (!dir.exists()) {
            dir.mkdirs();
        }

// 定义每个文件夹中文件的数量
        int filesPerFolder = 100;

// 计算文件夹数量
        int numFolders = (end - begin + 1) / filesPerFolder;
        if ((end - begin + 1) % filesPerFolder != 0) {
            numFolders++;
        }

// 创建文件夹并移动文件
        for (int folderIndex = 0; folderIndex < numFolders; folderIndex++) {
            // 构造文件夹名字
            int folderBegin = begin + folderIndex * filesPerFolder;
            int folderEnd = Math.min(end, folderBegin + filesPerFolder - 1);
            String folderName = path + "Solution" + folderBegin + "_" + folderEnd;
            File folder = new File(folderName);
            folder.mkdir(); // 创建文件夹

            // 创建文件并移动到文件夹中
            for (int i = folderBegin; i <= folderEnd; i++) {
                String fileName = folderName + "/Solution" + i + ".java"; // 构造文件名
                File file = new File(fileName);
                if (!file.exists()) {
                    try {
                        BufferedWriter out = new BufferedWriter(new FileWriter(file));
                        out.write(String.format(content, i, i, i, i));
                        out.close();
                        System.out.println("文件创建成功：" + fileName);
                    } catch (IOException e) {
                        System.out.println("文件创建失败：" + fileName);
                        e.printStackTrace();
                    }
                }
            }
        }
    }

}
