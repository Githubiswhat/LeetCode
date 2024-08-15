//
// Created by windows on 2023/3/2.
//

#include "Solution2938.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

long long minimumSteps(string s) {
  long long ans = 0;
  int cnt1 = 0;
  for (char c : s) {
    if (c == '1') {
      cnt1++;
    } else {
      ans += cnt1;
    }
  }
  return ans;
}