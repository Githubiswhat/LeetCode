//
// Created by windows on 2023/3/2.
//

#include "Solution1671.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <stack>
using namespace std;

vector<int> getLISArray(const vector<int>& nums){
  int n = nums.size();
  vector<int> list, dp(n);
  for (int i = 0; i < n; ++i) {
    auto item = nums[i];
    auto it = lower_bound(list.begin(), list.end(), item);
    if (it == list.end()){
      list.push_back(item);
      dp[i] = list.size();
    }else{
      *it = item;
      dp[i] = it - list.begin() + 1;
    }
  }
  return dp;
}


int minimumMountainRemovals(vector<int>& nums) {
  vector<int> pre = getLISArray(nums);
  vector<int> suf = getLISArray(vector<int>(nums.rbegin(), nums.rend()));
  reverse(suf.begin(), suf.end());
  int ans = 0;
  for (int i = 0; i < nums.size(); ++i) {
    ans = max(ans, pre[i] + suf[nums.size() - 1 - i] - 1);
  }
  return nums.size() - ans;
}