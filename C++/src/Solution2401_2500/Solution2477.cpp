//
// Created by windows on 2023/3/2.
//

#include "Solution2477.h"
#include "vector"
#include <functional>
using namespace std;


long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
  int n = roads.size() + 1;
  vector<vector<int>> g(n);
  for (const auto &item : roads){
    g[item[0]].push_back(item[1]);
    g[item[1]].push_back(item[0]);
  }
  long long ans = 0;

  function<int(int, int)> dfs = [&](int index, int before){
    int sz = 1;
    for (const auto &item : g[index]){
      if (item != index){
        sz += dfs(item, index);
      }
    }
    ans += (seats + sz - 1) / seats;
    return sz;
  };
  dfs(0, -1);
  return ans;
}
