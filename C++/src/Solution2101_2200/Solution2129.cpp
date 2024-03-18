//
// Created by windows on 2023/3/2.
//

//#include "Solution2129.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

// 函数将字符串的首字母大写，其他字母小写
std::string capitalizeFirstLetter(const std::string& str) {
  if (str.empty()) // 如果字符串为空，则返回空字符串
    return "";
  std::string result = str; // 创建结果字符串，初始化为原始字符串
  // 首字母大写
  result[0] = std::toupper(result[0]);
  // 其他字母小写
  for (size_t i = 1; i < result.length(); ++i) {
    result[i] = std::tolower(result[i]);
  }
  return result;
}

// capitalizeTitle 函数定义
std::string capitalizeTitle(std::string title) {
  title += ' ';
  int n = title.size();
  int start = 0;
  std::string ans; // 修改为正确的类型
  for (int i = 0; i < n; ++i) {
    if (title[i] == ' ') {
      if (i - start <= 2) {
        std::string str = title.substr(start, i - start); // 去掉末尾空格
        std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
          return std::tolower(c);
        });
        ans += str + ' '; // 在单词后添加一个空格
      } else {
        std::string str = title.substr(start, i - start); // 去掉末尾空格
        str = capitalizeFirstLetter(str);
        ans += str + ' '; // 在单词后添加一个空格
      }
      start = i + 1;
    }
  }
  return ans.substr(0, ans.size() - 1); // 去掉末尾的空格
}

int main() {
  // 测试 capitalizeFirstLetter 函数
  std::string input1 = "hello World";
  std::cout << "capitalizeFirstLetter(\"" << input1 << "\"): " << capitalizeFirstLetter(input1) << std::endl;

  // 测试 capitalizeTitle 函数
  std::string input2 = "the cat in the Hat";
  std::cout << "capitalizeTitle(\"" << input2 << "\"): " << capitalizeTitle(input2) << std::endl;

  return 0;
}
