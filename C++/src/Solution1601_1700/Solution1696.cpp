//
// Created by windows on 2023/3/2.
//

//#include "Solution1696.h"
#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

//int maxResult(vector<int>& nums, int k) {
//  int n = nums.size();
//  vector<int> dp(n, INT_MIN);
//  dp[0] = nums[0];
//  for (int i = 1; i < n; ++i) {
//    for (int j = i; j < n && j < k + i ; ++j) {
//      dp[j] = max(dp[j], dp[i - 1] + nums[j]);
//    }
//  }
//  return dp[n - 1];
//}


int maxResult(vector<int>& nums, int k) {
  int n = nums.size();
  vector<int> dp(n, INT_MIN);
  dp[0] = nums[0];
  deque<int> q = {0};

  for (int i = 1; i < n; ++i) {
    if (q.front() < i - k){
      q.pop_front();
    }

    dp[i] = dp[q.front()] + nums[i];
    while (!q.empty() && dp[q.back()] <= dp[i]){
      q.pop_back();
    }
    q.push_back(i);
  }

  return dp[n - 1];
}



















