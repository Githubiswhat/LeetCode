//
// Created by windows on 2023/3/2.
//

#include "Solution300.h"
#include <cstring>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

//int lengthOfLIS(vector<int>& nums) {
//  int n = nums.size(), memo[n];
//  memset(memo, 0, sizeof(memo));
//  function<int(int)> dfs = [&](int i) -> int  {
//    int& res = memo[i];
//    if (res){
//      return res;
//    }
//    for (int j = 0; j < i; ++j) {
//      if (nums[j] < nums[i]){
//        res = max(res, memo[j]);
//      }
//    }
//    return ++res;
//  };
//  int ans = 0;
//  for (int i = 0; i < n; ++i) {
//    ans = max(dfs(i), ans);
//  }
//  return ans;
//}

//int lengthOfLIS(vector<int>& nums) {
//  int n = nums.size(), f[n];
//  int ans = 0;
//  for (int i = 0; i < n; ++i) {
//    f[i] = 0;
//    for (int j = 0; j < i; ++j) {
//      if (nums[j] < nums[i]){
//        f[i] = max(f[i], f[j]);
//      }
//    }
//    f[i]++;
//  }
//  return *max_element(f, f + n);
//}

int lengthOfLIS(vector<int>& nums) {
  vector<int> list;
  for (const auto &item : nums){
    auto iter = lower_bound(list.begin(), list.end(), item);
    if (iter == list.end()){
      list.push_back(item);
    }else{
      *iter = item;
    }
  }
  return list.size();
}