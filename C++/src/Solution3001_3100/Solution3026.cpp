//
// Created by windows on 2024/3/18.
//

#include "Solution3026.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;


//long long maximumSubarraySum(vector<int>& nums, int k) {
//  int n = nums.size();
//  vector<long long> s(n + 1);
//
//  for (int i = 0; i < n; ++i) {
//    s[i + 1] = s[i] + nums[i];
//  }
//
//  long long res = LONG_LONG_MIN;
//  for (int i = 1; i < n; ++i) {
//    for (int j = 0; j < i; ++j) {
//      if (abs(nums[i] - nums[j]) == k){
//        res = max(res, s[i + 1] - s[j]);
//      }
//    }
//  }
//  return res == LONG_LONG_MIN ? 0 : res;
//}

//long long maximumSubarraySum(vector<int>& nums, int k) {
//    int n = nums.size();
//    vector<long long> s(n + 1);
//
//    for (int i = 0; i < n; ++i) {
//      s[i + 1] = s[i] + nums[i];
//    }
//
//    unordered_map<int, vector<int>> cnt;
//    long long ans = LONG_LONG_MIN;
//    for (int i = 0; i < n; ++i) {
//      if (cnt.count(nums[i] - k)){
//        for (const auto &item : cnt[nums[i] - k]){
//          ans = max(ans, s[i + 1] - s[item]);
//        }
//      }
//      if (cnt.count(nums[i] + k)){
//        for (const auto &item : cnt[nums[i] + k]){
//          ans = max(ans, s[i + 1] - s[item]);
//        }
//      }
//      cnt[nums[i]].push_back(i);
//    }
//    return ans == LONG_LONG_MIN ? 0 : ans;
//}
//

long long maximumSubarraySum(vector<int>& nums, int k) {
  long long ans = LLONG_MIN, sum = 0;
  unordered_map<int, long long> min_s;

  for (const auto &x : nums){
    auto iter = min_s.find(x - k);
    if (iter != min_s.end()){
      ans = max(ans, sum + x - iter->second);
    }

    iter = min_s.find(x + k);
    if (iter != min_s.end()){
      ans = max(ans, sum + x - iter->second);
    }

    iter = min_s.find(x);
    if (iter == min_s.end() || sum < iter->second){
      min_s[x] = sum;
    }
    sum += x;
  }
  return ans == LLONG_MIN ? 0 : ans;
}



















