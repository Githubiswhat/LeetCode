//
// Created by windows on 2023/3/2.
//

#include "Solution2867.h"
#include <functional>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

const int MX = 1e5;
bool np[MX + 1];

int init = [](){
  np[1] = true;
  for (int i = 2; i * i <= MX; ++i) {
    if (!np[i]){
      for (int j = i * i; j <= MX; j += i) {
        np[j] = true;
      }
    }
  }
  return 0;
}();

long long countPaths(int n, vector<vector<int>>& edges) {
  vector<vector<int>> g(n + 1);
  for (const auto &item : edges){
    g[item[0]].emplace_back(item[1]);
    g[item[1]].emplace_back(item[0]);
  }

  vector<int> nodes;
  function<void(int, int)> dfs = [&](int x, int fa){
    nodes.push_back(x);
    for (auto y : g[x]){
      if (y != fa && np[y]){
        dfs(y, x);
      }
    }
  };

  long long ans = 0;
  vector<long long> size(n + 1);
  for (int i = 1; i <= n; ++i) {
    if (np[i]){
      continue;
    }
    int sum = 0;
    for(auto y : g[i]){
      if (np[y])
        continue;
      if (size[y] == 0){
        nodes.clear();
        dfs(y, -1);
        for (const auto &z : nodes){
          size[z] = nodes.size();
        }
      }
      ans += (long long) sum * size[y];
      sum += size[y];
    }
    ans += sum;
  }
  return ans;
}












