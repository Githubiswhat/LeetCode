//
// Created by windows on 2023/3/2.
//

#include "Solution523.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool checkSubarraySum(vector<int>& nums, int k) {
  int n = nums.size();
  vector<int> s(n + 1);

  for (int i = 0; i < n; ++i) {
    s[i + 1] = s[i] + nums[i];
  }

  unordered_set<int> set;

  for (int i = 2; i <= n; ++i) {
    set.insert(s[i - 2] % k);
    if (set.count(s[i] % k)) {
      return true;
    }
  }
  return false;
}

