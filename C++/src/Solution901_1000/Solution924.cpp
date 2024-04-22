//
// Created by windows on 2023/3/2.
//

#include "Solution924.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <set>
using namespace std;

int minMalwareSpread(vector<vector<int>>& graph, vector<int>& initial) {
  set<int> st(initial.begin(), initial.end());
  int n = graph.size();
  vector<int> vis(n);
  int size = 0, ans = -1, node_id = -1, max_size = 0;

  function<void(int)> dfs = [&](int x){
    vis[x] = true;
    size++;
    if (node_id != -2 && st.count(x)) {
      node_id = node_id == -1 ? x : -2;
    }
    for (int y = 0; y < graph[x].size(); ++y) {
      if (!vis[y] && graph[x][y]){
        dfs(y);
      }
    }
  };

  for (const auto &x : initial){
    if (vis[x]){
      continue;
    }
    node_id = -1;
    size = 0;
    dfs(x);
    if (node_id >= 0 && (size > max_size || size == max_size && node_id < ans)){
      ans = node_id;
      max_size = size;
    }
  }
  return ans >= 0 ? ans : *min_element(initial.begin(), initial.end());
}
