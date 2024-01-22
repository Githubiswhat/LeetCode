//
// Created by windows on 2023/3/2.
//

#include "Solution447.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int numberOfBoomerangs(vector<vector<int>> &points) {
  int ans = 0;
  for (auto &p : points) {
    unordered_map<int, int> cnt;
    for (auto &q : points) {
      int dis = (p[0] - q[0]) * (p[0] - q[0]) + (p[1] - q[1]) * (p[1] - q[1]);
      ++cnt[dis];
    }
    for (auto &[_, m] : cnt) {
      ans += m * (m - 1);
    }
  }
  return ans;
}