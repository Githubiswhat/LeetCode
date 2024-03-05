//
// Created by windows on 2023/3/2.
//

#include "Solution2368.h"
#include <functional>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
  vector<vector<int>> g(n);
  for (const auto &item : edges){
    g[item[0]].push_back(item[1]);
    g[item[1]].push_back(item[0]);
  }
  unordered_set<int> set;
  for (const auto &item : restricted){
    set.emplace(item);
  }

  int ans = 0;
  function<void(int, int)> dfs = [&](int x, int fa){
    if (set.count(x) == 0){
      ans++;
    }
    for (int y : g[x]){
      if (y != fa){
        dfs(y, x);
      }
    }
  };
  dfs(0, - 1);
  return ans;
}
