//
// Created by windows on 2023/3/2.
//

#include "Solution1976.h"
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

//int countPaths(int n, vector<vector<int>>& roads) {
//  vector<vector<pair<int, int>>> g(n);
//
//  for (const auto &item : roads){
//    g[item[0]].emplace_back(item[1], item[2]);
//    g[item[1]].emplace_back(item[0], item[2]);
//  }
//
//  int min = INT_MAX;
//  int ans = 0;
//
//  vector<bool> visited(n, false);
//  function<void(int, int)> dfs = [&](int x, int sum){
//    if (x == n - 1){
//      if (sum < min){
//        ans = 1;
//        min = sum;
//      } else if (sum == min){
//        ans++;
//      }
//      return;
//    }
//    visited[x] = true;
//    for (const auto &item : g[x]){
//      if (!visited[item.first]){
//        dfs(item.first, sum + item.second);
//      }
//    }
//    visited[x] = false;
//  };
//  dfs(0, 0);
//  return ans;
//}


int countPaths(int n, vector<vector<int>>& roads) {
  vector<vector<long long>> g(n, vector<long long>(n, LLONG_MAX / 2));

  for (const auto &item : roads){
    g[item[0]][item[1]] = item[2];
    g[item[1]][item[0]] = item[2];
  }

  vector<long long> dist(n, LLONG_MAX / 2);
  dist[0] = 0;
  vector<int> f(n), done(n);
  done[0] = 1;

  while (true){
    int x = -1;
    for (int i = 0; i < n; ++i) {
      if (!done[i] && (x == -1 || dist[i] < dist[x])){
        x = i;
      }
    }

    if (x == n - 1){
      return f[n - 1];
    }
    done[x] = 1;

    for (int y = 0; y < n; ++y) {
      long long new_dis = dist[x] + g[x][y];
      if (new_dis < dist[y]){
        dist[y] = new_dis;
        f[y] = f[x];
      } else if (new_dis == dist[y]){
        f[y] = (f[y] + f[x]) % 1'000'000'007;
      }
    }
  }
}
