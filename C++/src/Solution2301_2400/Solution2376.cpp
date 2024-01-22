//
// Created by windows on 2023/3/2.
//

#include "Solution2376.h"
#include <cstring>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int countSpecialNumbers(int n) {
  auto s = to_string(n);
  int m = s.size(), memo[m][1 << 10];
  memset(memo, -1, sizeof(memo));

  function<int(int,int,bool,bool)> f = [&](int i, int mask,bool limit, bool isNum){
    if (i == m){
      return isNum ? 1 : 0;
    }
    if (!limit && isNum && memo[i][mask] != -1){
      return memo[i][mask];
    }
    int res = 0;
    if (!isNum){
      res += f(i + 1, mask, false, false);
    }
    int up = limit ? s[i] - '0' : 9;
    for (int j = isNum ? 0 : 1; j <= up; ++j) {
      if ((mask >> j & 1) == 0){
        res += f(i + 1, mask | (1 << j), limit && j == up, true);
      }
    }
    if (!limit && isNum){
      memo[i][mask] = res;
    }
    return res;
  };

  return f(0, 0, true, false);
}