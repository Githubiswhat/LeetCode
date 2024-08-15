//
// Created by windows on 2024/3/18.
//

#include "Solution3067.h"
#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> countPairsOfConnectableServers(vector<vector<int>>& edges, int signalSpeed) {
  int n = edges.size() + 1;
  vector<vector<pair<int, int>>> g(n);
  for (const auto &edge: edges){
    g[edge[0]].push_back({edge[1], edge[2]});
    g[edge[1]].push_back({edge[0], edge[2]});
  }

  function<int(int, int, int)> dfs = [&](int x, int fa, int sum) -> int {
    int cnt = sum % signalSpeed == 0;
    for (const auto &[y, wt] : g[x]){
      if (y != fa){
        cnt += dfs(y, x, sum + wt);
      }
    }
    return cnt;
  };

  vector<int> ans(n);
  for (int i = 0; i < n; ++i) {
    int sum = 0;
    for (const auto &[y, wt] : g[i]){
      int cnt = dfs(y, i, wt);
      ans[i] += cnt * sum;
      sum += cnt;
    }
  }
  return ans;
}