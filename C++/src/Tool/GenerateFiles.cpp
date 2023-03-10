//
// Created by windows on 2023/3/2.
//

#include "GenerateFiles.h"

namespace fs = std::filesystem;

void GenerateFiles::create_cpp_file(int i, int j, string path) {
    for (; i <= j; ++i) {
        string file_cpp = path + '/' + "Solution" + to_string(i) + ".cpp";
        // 创建一个名为 example.txt 的文件
        if (std::filesystem::exists(file_cpp)) {
            continue;
        }
        std::ofstream file(file_cpp);
        string context = "//\n"
                         "// Created by windows on 2023/3/2.\n"
                         "//\n"
                         "\n"
                         "#include \"Solution" + to_string(i) + ".h\"";
        if (file.is_open()) {
            file << context << std::endl; // 向文件中写入内容
            file.close(); // 关闭文件
            std::cout << "File created successfully." << std::endl;
        } else {
            std::cout << "Failed to create file." << std::endl;
        }
    }
}

void GenerateFiles::create_h_file(int i, int j, string path) {

    for (; i <= j; ++i) {
        string file_h = path + '/' + "Solution" + to_string(i) + ".h";
        // 创建一个名为 example.txt 的文件
        if (std::filesystem::exists(file_h)) {
            continue;
        }
        string context = "//\n"
                         "// Created by windows on 2023/3/2.\n"
                         "//\n"
                         "\n"
                         "#ifndef C___SOLUTION" + to_string(i) + "_H\n"
                         "#define C___SOLUTION" + to_string(i) +"_H\n"
                         "\n"
                         "\n"
                         "class Solution" + to_string(i) + "{\n"
                         "\n"
                         "};\n"
                         "\n"
                         "\n"
                         "#endif //C___SOLUTION" + to_string(i) + "_H";
        std::ofstream file(file_h);
        if (file.is_open()) {
            file << context << std::endl; // 向文件中写入内容
            file.close(); // 关闭文件
            std::cout << "File created successfully." << std::endl;
        } else {
            std::cout << "Failed to create file." << std::endl;
        }
    }
}

void GenerateFiles::handle_h_file(int i, int j, string path) {
    for (; i <= j; ++i) {
        string file_h = path + '/' + "Solution" + to_string(i) + ".h";
        std::fstream file(file_h, std::ios::in | std::ios::out);
        if (!file.is_open()) { //检查文件是否成功打开
            std::cout << "无法打开文件\n";
            continue;
        }
        string context_old = "//\n"
                         "// Created by windows on 2023/3/2.\n"
                         "//\n"
                         "\n"
                         "#ifndef C___SOLUTION" + to_string(i) + "_H\n"
                         "#define C___SOLUTION" + to_string(i) +"_H\n"
                         "\n"
                         "\n"
                         "class Solution" + to_string(i) + "{\n"
                         "\n"
                         "};\n"
                         "\n"
                         "\n"
                         "#endif //C___SOLUTION" + to_string(i) + "_H"
                         "\n";

        string context_new = "//\n"
                             "// Created by windows on 2023/3/10.\n"
                             "//\n"
                             "\n"
                             "#ifndef C___SOLUTION_H\n"
                             "#define C___SOLUTION_H\n"
                             "\n"
                             "\n"
                             "class Solution{\n"
                             "\n"
                             "};\n"
                             "\n"
                             "\n"
                             "#endif //C___SOLUTION_H"
                             "\n";
        string content; //用于存储文件内容的字符串
        string line; //用于读取每一行的字符串
        while (getline(file, line)) { //循环读取每一行
            content += line + '\n'; //将每一行添加到字符串中
        }
//        std::cout << "文件内容为:\n" << content; //输出文件内容
        bool equal = context_old == content;
//        cout << "equal: " << equal << endl;
        if (equal){
            file << context_new << endl;
        }
        file.close(); //关闭文件
    }
}

int GenerateFiles::generate_files(int i, int j) {
    for (; i <= j; i += 100) {
        string str = "Solution" + to_string(i) + "_" + to_string(i + 99);
        fs::path dir(str); // 创建一个名为 example 的文件夹
        if (fs::create_directory(dir)) {
            std::cout << "Directory created successfully." << std::endl;
        } else {
            std::cout << "Failed to create directory." << std::endl;
        }
//        create_cpp_file(i, i + 99, str);
//        create_h_file(i, i + 99, str);
//        create_CMake_file(i, i + 99 ,str);
        handle_h_file(i, i + 99, str);
    }
    return 0;
}

void GenerateFiles::create_CMake_file(int i, int j, string path) {
    string cmake_file = path + "/CMakeLists.txt";
    if (std::filesystem::exists(cmake_file)) {
        return;
    }
    string context = "add_library(" + path + " ";
    for (; i <= j; ++i) {
        context += "Solution" + to_string(i) + ".cpp ";
        context += "Solution" + to_string(i) + ".h ";
    }
    context += ")";
    std::ofstream file(cmake_file);
    if (file.is_open()) {
        file << context << std::endl; // 向文件中写入内容
        file.close(); // 关闭文件
        std::cout << "File created successfully." << std::endl;
    } else {
        std::cout << "Failed to create file." << std::endl;
    }
}
