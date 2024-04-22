//
// Created by windows on 2023/3/2.
//

#include "Solution2924.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int findChampion(int n, vector<vector<int>>& edges) {
  vector<int> g(n, 0);
  for (const auto &item : edges){
    g[item[1]] = 1;
  }
  int count = 0, ans = -1;
  for (int i = 0; i < n; ++i) {
    if (g[i] == 0){
      count++;
      ans = i;
    }
  }
  return count == 1 ? ans : -1;
}