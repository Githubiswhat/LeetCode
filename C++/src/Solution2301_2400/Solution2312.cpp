//
// Created by windows on 2023/3/2.
//

#include "Solution2312.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

long long sellingWood(int m, int n, vector<vector<int>>& prices) {
  vector<vector<long long>> f(m + 1,vector<long long>(n + 1,0));
  for (const auto &item : prices){
    f[item[0]][item[1]] = item[2];
  }

  for (int i = 1; i <= m; ++i) {
    for (int j = 1; j <= n; ++j) {
      for (int k = 1; k <= j / 2; ++k) {
        f[i][j] = max(f[i][j], f[i][k] + f[i][j - k]);
      }
      for (int k = 1; k <= i / 2; ++k) {
        f[i][j] = max(f[i][j], f[k][j] + f[i - k][j]);
      }
    }
  }
  return f[m][n];
}