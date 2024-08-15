//
// Created by windows on 2023/3/2.
//

#include "Solution2742.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int paintWalls(vector<int>& cost, vector<int>& time) {
  int n = cost.size();
  vector<vector<int>> memo(n, vector<int>(n * 2 + 1, -1));
  auto dfs = [&](auto&& dfs, int i, int j){
    if (j > i){
      return 0;
    }
    if (i < 0){
      return INT_MAX / 2;
    }
    auto& res = memo[i][j + n];
    if (res != -1){
      return res;
    }
    res = min(dfs(dfs, i - 1, j + time[i]) + cost[i], dfs(dfs, i - 1, j - 1));
    return res;
  };
  return dfs(dfs, n - 1, 0);
}