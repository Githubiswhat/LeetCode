//
p
// Created by windows on 2023/3/2.
//

#include "Solution2065.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int maximalPathQuality(vector<int>& values, vector<vector<int>>& edges, int maxTime) {
  int n = values.size();
  vector<vector<pair<int, int>>> g(n);
  for (auto& e : edges) {
    g[e[0]].push_back({e[1], e[2]});
    g[e[1]].push_back({e[0], e[2]});
  }









}