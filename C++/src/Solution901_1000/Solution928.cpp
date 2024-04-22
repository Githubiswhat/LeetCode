//
// Created by windows on 2023/3/2.
//

#include "Solution928.h"
#include <functional>
#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int minMalwareSpread(vector<vector<int>>& graph, vector<int>& initial) {
  int n = graph.size();
  vector<int> vis(n);
  int size, ans = -1, max_size = 0, node_id;
  set<int> st(initial.begin(), initial.end());

  function<void(int)> dfs = [&](int x){
    vis[x] = true;
    size++;
    for (int y = 0; y < graph[x].size(); ++y) {
      if (!graph[x][y]){
        continue;
      }
      if (st.count(y)){
        if (node_id != -2 && node_id != y){
          node_id = node_id == -1 ? y : -2;
        }
      }else if (!vis[y]){
        dfs(y);
      }
    }
  };

  unordered_map<int, int> cnt;
  for (int i = 0; i < n; ++i) {
    if (vis[i] || st.count(i)){
      continue;
    }
    size = 0;
    node_id = -1;
    dfs(i);

    if (node_id >= 0){
      cnt[node_id] += size;
    }
  }

  for (auto [node_id, count] : cnt){
    if (count > max_size || count == max_size && node_id < ans){
      max_size = count;
      ans = node_id;
    }
  }
  return ans >= 0 ? ans : *min_element(initial.begin(), initial.end());
}