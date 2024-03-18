//
// Created by windows on 2023/3/2.
//

#include "Solution2497.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
  int n = vals.size();
  vector<vector<int>> g(n);
  for (auto& e: edges) {
    int a = e[0], b = e[1];
    g[a].push_back(b);
    g[b].push_back(a);
  }
}