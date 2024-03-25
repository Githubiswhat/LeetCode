//
// Created by windows on 2023/3/2.
//

#include "Solution405.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string toHex(int num) {
  if (num == 0) return "0";  // 处理特殊情况
  string ans = "";  // 用于存储最终的十六进制字符串结果
  unsigned int unum = num;  // 将负数转换为对应的无符号整数
  while (unum != 0){
    int n = unum & 0xf;  // 取unum的低四位
    if (n < 10){
      ans = to_string(n) + ans;  // 如果小于10，直接转换为字符并加到结果的最前面
    }else{
      ans = char('a' + n - 10) + ans;  // 如果大于等于10，将其转换为'a'到'f'之间的字符并加到结果的最前面
    }
    unum >>= 4;  // 将unum右移4位，相当于将当前处理的最低4位移除
  }
  return ans;  // 返回转换后的十六进制字符串
}