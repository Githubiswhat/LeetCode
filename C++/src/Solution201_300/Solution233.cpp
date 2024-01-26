//
// Created by windows on 2023/3/2.
//

#include "Solution233.h"
#include <cstring>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


int countDigitOne(int n) {
  auto s = to_string(n);
  int m = s.size();
  vector<vector<int>> memo(m, vector<int>(m, 0));
//  memset(memo, -1, sizeof(memo));

  function<int(int,int,bool)> f = [&](int i, int sum ,bool limit)-> int {
    if (i == m){
      return sum;
    }
    if (!limit && memo[i][sum] != -1){
      return memo[i][sum];
    }
    int res = 0;
    int up = limit ? s[i] - '0' : 9;
    for (int d = 0; d <= up; ++d) {
      res += f(i + 1, sum + (d == 1), limit && d == up);
    }
    if (!limit){
      memo[i][sum] = res;
    }
    return res;
  };
  return f(0, 0, true);
}