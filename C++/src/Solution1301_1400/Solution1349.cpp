//
// Created by windows on 2023/3/2.
//

#include "Solution1349.h"
#include <functional>
#include <cstring>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
#include "vector"
using namespace std;

int maxStudents(vector<vector<char>>& seats) {
  int m = seats.size(), n = seats[0].size();
  int dp[m + 1][1 << n];
  memset(dp, 0, sizeof(dp));

  int res = 0;
  int lastMax = 0;
  for (int i = 1; i <= m; ++i) {
    int curr = 0;
    for (int j = 0; j < n; ++j) {
      curr |= ((seats[i - 1][j] == '.') << j);
    }

    for (int t = curr; t > 0; t = (t - 1) & curr) {
      // 排除左右有人的情况
      if ((t & (t << 1)) == 0 && (t & (t >> 1)) == 0) { // 修正条件判断的括号问题
        int count = __builtin_popcount(t);

        for (int j = 0; j < (1 << n); ++j) {
          if ((t & (j << 1)) == 0 && (t & (j >> 1)) == 0) { // 修正条件判断的括号问题
            dp[i][t] = max(dp[i][t], dp[i - 1][j] + count); // 更新状态
            res = max(res, dp[i][t]); // 更新最大值
          }
        }
      }
    }
    dp[i][0] = lastMax;
    lastMax = res;
  }
  return res;
}
