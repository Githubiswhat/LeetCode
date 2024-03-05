//
// Created by windows on 2023/3/2.
//

#include "Solution2396.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


bool validPartition(vector<int>& nums) {
  int n = nums.size();
  vector<bool> dp(n + 1);
  dp[0] = true;
  for (int i = 1; i < n; ++i) {
    if (dp[i - 1] && nums[i] == nums[i - 1] ||
        i > 1 && dp[i - 2] && (nums[i] == nums[i - 1] && nums[i] == nums[i - 2] ||
                               nums[i] == nums[i - 1] + 1 && nums[i] == nums[i - 2] + 2))
      dp[i + 1] = true;
  }
  return dp[n];
}
