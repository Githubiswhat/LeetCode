//
// Created by windows on 2023/3/2.
//

#include "Solution902.h"
#include <functional>
#include <cstring>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int atMostNGivenDigitSet(vector<string>& digits, int n) {
  auto s = to_string(n);
  int m = s.size(), memo[m];
  memset(memo, -1, sizeof(memo));

  function<int(int,bool,bool)> f = [&](int i,bool limit, bool isNum)-> int {
    if (i == m){
      return isNum;
    }
    if (!limit && isNum && memo[i] != -1){
      return memo[i];
    }
    int res = 0;
    if (!isNum){
      res += f(i + 1, false, false);
    }
    int up = limit ? s[i] : '9';
    for (const auto &item : digits){
      if (item[0] > up){
        break;
      }
      res += f(i + 1, limit && item[0] == up, true);
    }
    if (!limit && isNum){
      memo[i] = res;
    }
    return res;
  };
  return f(0, true, false);
}
