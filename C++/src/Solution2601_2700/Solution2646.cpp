//
// Created by windows on 2023/3/2.
//

#include "Solution2646.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
#include <functional>
using namespace std;

int minimumTotalPrice(int n, vector<vector<int>>& edges, vector<int>& price, vector<vector<int>>& trips) {
  vector<vector<int>> g(n);
  vector<int> count(n);
  for (const auto &item : edges){
    g[item[0]].push_back(item[1]);
    g[item[1]].push_back(item[0]);
  }

  function<bool(int, int, int)> dfs = [&](int cur, int fa, int target) -> bool{
    count[cur]++;
    if (cur == target){
      return true;
    }
    bool ok = false;
    for (const auto &item : g[cur]){
      if (item != fa){
        ok = dfs(item, cur, target);
        if (ok){
          break;
        }
      }
    }
    if (!ok){
      count[cur]--;
    }
    return ok;
  };

  function<pair<int ,int>(int, int)> dfs1 = [&](int i, int j) -> pair<int, int>{
    int a = price[i] * count[i];
    int b = a >> 1;

    for (const auto &item : g[i]){
      if (item == j){
        continue;
      }
      auto res = dfs1(item, i);
      a += min(res.first, res.second);
      b += res.first;
    }
    return make_pair(a, b);
  };

  for (const auto &item : trips){
    dfs(item[0], -1, item[1]);
  }

  auto res = dfs1(0, -1);
  return min(res.first, res.second);
}
