//
// Created by windows on 2023/12/20.
//

#include "include/CppFileModifier.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
// Your new string here

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include "vector"

namespace fs = std::filesystem;

// 函数用于在文件中插入指定字符串
void insertStringIntoFile(const std::string& filePath, const std::string& searchString, const std::string& newString) {
  std::ifstream inFile(filePath); // 打开文件进行读取
  if (!inFile.is_open()) {
    std::cerr << "无法打开文件：" << filePath << std::endl;
    return;
  }

  std::string line;
  std::vector<std::string> fileContent; // 用于存储文件内容
  bool found = false;

  while (std::getline(inFile, line)) {
    fileContent.push_back(line);

    // 在指定的字符串后面添加新的字符串
    if (!found && line.find(searchString) != std::string::npos) {
      // 获取文件名（不包含后缀）
//      std::string fileName = fs::path(filePath).stem().string();
//      fileContent.push_back("#include \"" + fileName + "\""); // 替换文件名
      fileContent.push_back(newString); // 添加新字符串
      found = true;
    }
  }

  inFile.close();

  // 重新写入文件
  std::ofstream outFile(filePath);
  for (const auto& content : fileContent) {
    outFile << content << "\n";
  }
  outFile.close();
}

// 递归遍历文件夹及子文件夹，并在每个 .cpp 文件中添加指定字符串
void traverseAndModifyFiles(const std::string& directoryPath, const std::string& searchString, const std::string& newString) {
  for (const auto& entry : fs::directory_iterator(directoryPath)) {
    if (entry.is_directory()) {
      traverseAndModifyFiles(entry.path().string(), searchString, newString); // 递归处理子文件夹
    } else if (entry.path().extension() == ".cpp") {
      insertStringIntoFile(entry.path().string(), searchString, newString); // 在 .cpp 文件中添加指定字符串
    }
  }
}

#include <unordered_set>

int main() {
  std::string folderPath = "D:\\Resource\\Github\\LeetCode\\C++\\src"; // 替换为你的文件夹路径
  std::string searchString = "#include \""; // 要寻找的字符串
  std::string newString = "#include <iostream>\n#include <vector>\n#include <unordered_set>\n#include <unordered_map>\n#include <string>\nusing namespace std;"; // 要插入的新字符串

  traverseAndModifyFiles(folderPath, searchString, newString); // 开始遍历文件夹并修改文件

  std::cout << "操作完成！" << std::endl;

  return 0;
}

