//
// Created by windows on 2023/3/2.
//

#include "Solution743.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


int networkDelayTime(vector<vector<int>>& times, int n, int k) {
  vector<vector<int>> g(n, vector<int>(n, INT_MAX / 2));
  for (const auto &item : times){
    g[item[0] -1][item[1]- 1] = item[2];
  }

  vector<int> dist(n, INT_MAX / 2), done(n);
  dist[k - 1] = 0;
  while (true){
    int x = -1;
    for (int i = 0; i < n; ++i) {
      if (!done[i] && (x < 0 || dist[i] <dist[x])){
        x = i;
      }
    }

    if (x < 0){
      return *max_element(dist.begin(), dist.end());
    }

    if (dist[x] == INT_MAX / 2){
      return -1;
    }

    done[x] = true;
    for (int i = 0; i < n; ++i) {
      if (dist[x] + g[x][i] < dist[i]){
        dist[i] = dist[x] + g[x][i];
      }
    }
  }
}