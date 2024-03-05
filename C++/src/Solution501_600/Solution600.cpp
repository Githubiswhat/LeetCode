//
// Created by windows on 2023/3/2.
//

#include "Solution600.h"
#include <functional>
#include <bitset>
#include <cstring>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


int findIntegers(int n) {
  string s = bitset<32>(n).to_string();
  int m = s.size(), memo[m][2];
  memset(memo, -1, sizeof(memo));

  function<int(int,int,bool)> f = [&](int i, bool pre1, bool limit)-> int {
    if (i == m){
      return 1;
    }

    if (!limit && memo[i][pre1] != -1){
      return memo[i][pre1];
    }

    int res = 0;
    int up = limit ? s[i] - '0' : 1;
    for (int d = 0; d <= up; ++d) {
      if (pre1 && d == 1) continue;
      res += f(i + 1, d == 1, limit && d == up);
    }

    if (!limit)
      memo[i][pre1] = res;
    return res;
  };

  return f(0, false, true);
}
