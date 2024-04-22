//
// Created by windows on 2023/3/2.
//

#include "Solution1883.h"
#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int minSkips(vector<int>& dist, int speed, int hoursBefore) {
  if (accumulate(dist.begin(), dist.end(), 0) > (long long) speed * hoursBefore) {
    return -1;
  }
  int n = dist.size();
  vector<vector<int>> memo(n, vector<int>(n, - 1));

  function<int(int, int)> dfs = [&](int i, int j){
    if (j < 0){
      return 0;
    }
    auto& res = memo[i][j];
    if (res != -1){
      return res;
    }
    res = (dfs(i - 1, j - 1) + dist[j] + speed - 1) / speed * speed;
    if (i){
      res = min(res, dfs(i, j - 1) + dist[j]);
    }
    return res;
  };

  for (int i = 0; ; ++i) {
    if (dfs(i, n - 2) + dist[n - 1] <= speed * hoursBefore){
      return i;
    }
  }
}