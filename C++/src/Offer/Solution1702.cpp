//
// Created by windows on 2024/1/16.
//

#include "include/Solution1702.h"
#include <functional>
#include <cstring>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int numberOf2sInRange(int n) {
  auto s = to_string(n);
  int m = s.size();
  vector<vector<int>> memo(m, vector<int>(m, 0));

  function<int(int, int, bool)> f = [&](int i, int sum, bool limit) -> int {
    if (i == m){
      return sum;
    }
    if (!limit && memo[i][sum] != -1)
      return memo[i][sum];
    int res = 0;
    int  up = limit ? s[i] - '0' : 9;
    for (int d = 0; d <= up; ++d) {
      res += f(i + 1, sum + (d == 2), limit && d == up);
    }
    if (!limit)
      memo[i][sum]= res;
    return res;
  };
  return f(0, 0, true);
}


