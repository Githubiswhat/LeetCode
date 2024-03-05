//
// Created by windows on 2023/3/2.
//

#include "Solution310.h"
#include <functional>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

//vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
//  vector<vector<int>> g(n);
//  for (const auto &item : edges){
//    g[item[0]].push_back(item[1]);
//    g[item[1]].push_back(item[0]);
//  }
//
//  function<int(int, int, int)> dfs = [&](int x, int fa, int layer){
//    int max_layer = layer;
//    for (int y : g[x]) {
//      if (y != fa) {
//        max_layer = max(max_layer, dfs(y, x, layer + 1));
//      }
//    }
//    return max_layer;
//  };
//
//  int min_layer = INT_MAX;
//  vector<int> ans;
//  for (int i = 0; i < n; ++i) {
//    int depth = dfs(i, -1, 0);
//    if (depth < min_layer){
//      min_layer = depth;
//      ans.clear();
//      ans.push_back(i);
//    } else if (depth == min_layer){
//      ans.push_back(i);
//    }
//  }
//  return ans;
//}

vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
  vector<vector<int>> g(n);
  for (const auto &item : edges){
    g[item[0]].push_back(item[1]);
    g[item[1]].push_back(item[0]);
  }

  vector<int> height0(n, 0);
  function<void(int)> dfs = [&](int x){
    height0[x] = 1;
    int h = 0;
    for (const auto &y : g[x]){
      if (height0[y] == 0) {
        dfs(y);
        h = max(h, height0[y]);
      }
    }
    height0[x] = h + 1;
  };
  dfs(0);

  function findFirstAndSecond = [&](int x) -> pair<int, int>{
    int first = 0;
    int second = 0;
    for (const auto &y : g[x]){
      if (height0[y] > first){
        second = first;
        first = height0[y];
      } else if (height0[y] > second){
        second = height0[y];
      }
    }
    return {first, second};
  };

  vector<int> height(n);
  function<void(int)> reRoot = [&](int x){
    auto pair = findFirstAndSecond(x);
    height[x] = pair.first + 1;
    for (const auto &y : g[x]){
      if (height[y] == 0){
        height0[x] = (height0[y] != pair.first ? pair.first : pair.second) + 1;
        reRoot(y);;
      }
    }
  };

  reRoot(0);
  int min_layer = n;
  vector<int> ans;
  for (int i = 0; i < n; ++i) {
    if (height[i] < min_layer) {
      min_layer = height[i];
      ans.clear();
    }
    if (height[i] == min_layer){
      ans.push_back(i);
    }
  }
  return ans;
}
