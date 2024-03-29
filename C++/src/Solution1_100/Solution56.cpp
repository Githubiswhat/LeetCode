//
// Created by windows on 2023/3/2.
//

#include "Solution56.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
  sort(intervals.begin(),intervals.end(),[](auto& a, auto& b){
    return a[0] < b[0];
  });
  int maxR = -1;
  vector<vector<int>> res;
  res.push_back(intervals[0]);
  int n = intervals.size();
  for (int i = 1; i < n; ++i) {
    if (intervals[i][0] <= res.back()[1]) {
      res.back()[1] = max(res.back()[1], intervals[i][1]);
    }else {
      res.push_back(intervals[i]);
    }
  }
  return res;
}