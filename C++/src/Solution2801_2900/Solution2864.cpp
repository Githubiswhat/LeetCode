//
// Created by windows on 2023/3/2.
//

#include "Solution2864.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string maximumOddBinaryNumber(string s) {
  int n = s.size();
  int count1 = 0;
  for (const auto &item : s){
    if (item == '1'){
      count1++;
    }
  }
  string ans = "1";
  for (int i = 0; i < n - count1; ++i) {
    ans = '0' + ans;
  }
  for (int i = 0; i < count1 - 1; ++i) {
    ans = '1' + ans;
  }
  return ans;
}