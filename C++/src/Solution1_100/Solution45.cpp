//
// Created by windows on 2023/3/2.
//

#include "Solution45.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int jump(vector<int>& nums) {
  int n = nums.size();
  vector<int> dp(n, INT_MAX);
  dp[0] = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 1; j <= nums[i]; ++j){
      if (i + j < n){
        dp[i + j] = min(dp[i + j], dp[i] + 1);
      }
    }
  }
  return dp[n - 1];
}
