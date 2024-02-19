//
// Created by windows on 2023/3/2.
//

#include "Solution2808.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int minimumSeconds(vector<int>& nums) {
  int n = nums.size();
  unordered_map<int, vector<int>> hash;
  for (int i = 0; i < n; ++i) {
    hash[nums[i]].push_back(i);
  }

  int ans = n;
  for (const auto &item : hash){
    int size = item.second.size();
    int t = item.second[0] + n - item.second[size - 1];
    for (int i = 1; i < size; ++i) {
      t = min(t, item.second[i] - item.second[i - 1]);
    }
    ans = min(ans, t / 2);
  }
  return ans;
}

