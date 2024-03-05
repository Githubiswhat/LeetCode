//
// Created by windows on 2023/3/2.
//

#include "Solution834.h"
#include <functional>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
//
//vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
//  vector<vector<int>> g(n);
//  for (const auto &item : edges){
//    g[item[0]].push_back(item[1]);
//    g[item[1]].push_back(item[0]);
//  }
//
//
//  function<void(int, int, int&, int)> dfs = [&](int x, int fa, int& sum, int layer) {
//    for (int y : g[x]) {
//      if (y != fa) {
//        sum += layer;
//        dfs(y, x, sum, layer + 1);
//      }
//    }
//  };
//
//  vector<int> ans;
//  for (int i = 0; i < n; ++i) {
//    int sum = 0;
//    dfs(i, -1, sum, 1);
//    ans.push_back(sum);
//  }
//  return ans;
//}


vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
  vector<vector<int>> g(n);
  for (const auto &item : edges){
    g[item[0]].push_back(item[1]);
    g[item[1]].push_back(item[0]);
  }

  vector<int> ans(n);
  vector<int> size(n, 1);
  function<void(int, int, int)> dfs = [&](int x, int fa, int layer) {
    ans[0] += layer;
    for (int y : g[x]) {
      if (y != fa) {
        dfs(y, x, layer + 1);
        size[x] += size[y];
      }
    }
  };
  dfs(0, -1, 0);

  function<void(int, int)> reRoot = [&](int x, int fa){
    for (const auto &y : g[x]){
      if(y != fa){
        ans[y] = ans[x] + n - 2 * size[y];
        reRoot(y, x);
      }
    }
  };

  reRoot(0, -1);
  return ans;
}
