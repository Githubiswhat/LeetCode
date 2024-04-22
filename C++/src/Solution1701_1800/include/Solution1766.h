//
// Created by windows on 2023/3/10.
//

#ifndef C___SOLUTION1766_H
#define C___SOLUTION1766_H

#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

const int MX = 51;
vector<int> coprime[MX];

auto init = []{
  for (int i = 1; i < MX; ++i) {
    for (int j = 1; j < MX; ++j) {
      if (gcd(i, j) == 1){
        coprime[i].push_back(j);
      }
    }
  }
  return 0;
}();


class Solution{
private:
  vector<int> ans;
  vector<vector<int>> g;
  pair<int, int> val_depth_id[MX];

  void dfs(int x, int fa, int depth, vector<int>& nums){
    int val = nums[x];
    int max_depth = 0;

    for (const auto &u : coprime[val]){
      auto [depth, id]= val_depth_id[u];
      if (depth > max_depth){
        max_depth = depth;
        ans[x] = id;
      }
    }

    auto tmp = val_depth_id[val];
    val_depth_id[val] = {depth, x};
    for (const auto &item : g[x]){
      if (item != fa){
         dfs(item, x, depth + 1, nums);
      }
    }
    val_depth_id[val] = tmp;
  }


public:
  vector<int> getCoprimes(vector<int>& nums, vector<vector<int>>& edges) {
    int n = nums.size();
    g.resize(n);
    ans.resize(n, -1);
    for (auto &e : edges) {
      int x = e[0], y = e[1];
      g[x].push_back(y);
      g[y].push_back(x);
    }
    dfs(0, -1, 1, nums);
    return ans;
  }

};


#endif //C___SOLUTION1766_H


