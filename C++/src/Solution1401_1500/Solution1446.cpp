//
// Created by windows on 2023/3/2.
//

#include "Solution1446.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int maxPower(string s) {
  int maxVal = 1;
  int n = s.size();
  for (int i = 0; i < n - 1; ++i) {
    int count = 1;
    for (int j = i + 1; j < n; ++j) {
      if (s[j] == s[j - 1]){
        count++;
      }else{
        break;
      }
    }
    maxVal = max(maxVal, count);
  }
  return maxVal;
}