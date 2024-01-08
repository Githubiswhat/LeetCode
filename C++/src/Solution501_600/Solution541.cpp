//
// Created by windows on 2023/3/2.
//

#include "Solution541.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string reverseStr(string s, int k) {
  int n = s.size();
  for (int i = 0; i < n; i += 2 * k) {
    int start = i;
    int end = min(i + k - 1, n - 1); // 反转区间的结束位置

    // 反转当前段的前 k 个字符
    while (start < end) {
      swap(s[start], s[end]);
      start++;
      end--;
    }
  }
  return s;
}