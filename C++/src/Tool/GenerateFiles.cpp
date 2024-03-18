//
// Created by windows on 2023/3/2.
//

#include "GenerateFiles.h"
#include <iostream>
#include <string>
using namespace std;

namespace fs = std::filesystem;

void create_file(const std::string& file_path, const std::string& file_content) {
  if (fs::exists(file_path)) {
    std::cout << "File " << file_path << " already exists." << std::endl;
    return;
  }
  std::ofstream file(file_path);
  if (file.is_open()) {
    file << file_content << std::endl; // 向文件中写入内容
    file.close();
    std::cout << "File " << file_path << " created successfully." << std::endl;
  } else {
    std::cout << "Failed to create file " << file_path << "." << std::endl;
  }
}

void create_cpp_file(int i, int j, const std::string& path) {
    for (; i <= j; ++i) {
      string file_content = "//\n"
                       "// Created by windows on 2024/3/18.\n"
                       "//\n"
                       "\n"
                       "#include \"Solution" + to_string(i) + ".h\"";
        create_file(path + "/Solution" + to_string(i) + ".cpp", file_content);
    }
}


void create_h_file(int i, int j, string path) {
  for (; i <= j; ++i) {
    string file_content = "//\n"
                     "// Created by windows on 2024/3/18.\n"
                     "//\n"
                     "\n"
                     "#ifndef C___SOLUTION" + to_string(i) + "_H\n"
                     "#define C___SOLUTION" + to_string(i) +"_H\n"
                     "\n"
                     "\n"
                     "class Solution" "{\n"
                     "\n"
                     "};\n"
                     "\n"
                     "\n"
                     "#endif //C___SOLUTION" + to_string(i) + "_H";
    create_file(path + "/Solution" + to_string(i) + ".h", file_content);
  }
}

void create_directory(const std::string& directory_name) {
  fs::path dir(directory_name);
  if (fs::create_directory(dir)) {
    std::cout << "Directory " << directory_name << " created successfully." << std::endl;
  } else {
    std::cout << "Failed to create directory " << directory_name << "." << std::endl;
  }
}


void create_CMake_file_V2(int i, int j, string path) {
  string context = "# 构建可执行文件\n";
  context += "file(GLOB SOURCES \"*.cpp\")\n";
  context += "add_library(Solution" + to_string(i) + "_" + to_string(j) + " ${SOURCES})\n";
  context += "target_include_directories(Solution" + to_string(i) + "_" + to_string(j) + " PUBLIC \"${CMAKE_CURRENT_SOURCE_DIR}/include\")\n";
  create_file(path + "/CMakeLists.txt", context);
}

void GenerateFiles::generate_files(int i, int j) {
  for (; i <= j; i += 100) {
    string dir = "Solution" + to_string(i) + "_" + to_string(i + 99);
    string include_dir = dir + "/include";
    create_directory(dir);
    create_directory(include_dir);
    create_cpp_file(i, i + 99, dir);
    create_h_file(i, i + 99, include_dir);
    create_CMake_file_V2(i, i + 99 ,dir);
  }
}

//int main() {
//  GenerateFiles g;
//  g.generate_files(3001, 4000);
//}
