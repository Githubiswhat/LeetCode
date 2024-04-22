//
// Created by windows on 2023/3/2.
//

#include "Solution377.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int combinationSum4(vector<int>& nums, int target) {
  vector<unsigned> dp(target + 1, 0);
  dp[0] = 1; // 目标值为 0 时，只有一种组合方式

  for (int i = 1; i <= target; ++i) {
    for (int num : nums) {
      if (i >= num) {
        dp[i] += dp[i - num];
      }
    }
  }

  return dp[target];
}