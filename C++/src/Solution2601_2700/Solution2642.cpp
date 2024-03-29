//
// Created by windows on 2023/3/2.
//

#include "Solution2642.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

class Graph {
public:
  vector<vector<int>> g;

  Graph(int n, vector<vector<int>>& edges) : g(n, vector<int>(n, INT_MAX / 2)){
    for (const auto &item : edges){
      g[item[0]][item[1]] = item[2];
    }
  }

  void addEdge(vector<int> edge) {
    g[edge[0]][edge[1]] = edge[2];
  }

  int shortestPath(int node1, int node2) {
    int n = g.size();
    vector<int> dis(n, INT_MAX / 2), vis(n);
    dis[node1] = 0;
    while (true){
      int x = -1;
      for (int i = 0; i < n; ++i) {
        if (!vis[i] && (x == -1 || dis[i] < dis[x])) {
          x = i;
        }
      }

      if (x == -1 || dis[x] == INT_MAX / 2){
        return -1;
      }

      vis[x] = 1;

      if (x == node2){
        return dis[x];
      }

      for (int j = 0; j < n; ++j) {
        dis[j] = min(dis[j], dis[x] + g[x][j]);
      }
    }
  }
};
