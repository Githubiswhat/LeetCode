//
// Created by windows on 2023/3/2.
//

#include "Solution2670.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> distinctDifferenceArray(vector<int>& nums) {
  unordered_set<int> set;
  int n = nums.size();
  vector<int> suf(n);
  for (int i = n - 1; i >= 0; --i) {
    suf[i] = set.size();
    set.emplace(nums[i]);
  }

  vector<int> ans;
  set.clear();
  for (int i = 0; i < n; ++i) {
    set.emplace(nums[i]);
    ans.push_back(set.size() - suf[i]);
  }
  return ans;
}
