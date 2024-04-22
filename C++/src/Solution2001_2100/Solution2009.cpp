//
// Created by windows on 2023/3/2.
//

#include "Solution2009.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


//int minOperations(vector<int>& nums) {
//  int ans = nums.size(), n = ans;
//
//  unordered_set<int> set;
//  for (const auto &item : nums){
//    set.emplace(item);
//  }
//
//  for (int i = 0; i < n; ++i) {
//    int num = 0;
//    for (int j = nums[i]; j < nums[i] + n; ++j) {
//      if (!set.count(j)){
//        num++;
//      }
//    }
//    ans = min(ans, num);
//  }
//  return ans;
//}

int minOperations(vector<int> &nums) {
  int n = nums.size();
  sort(nums.begin(), nums.end());
  nums.erase(unique(nums.begin(), nums.end()), nums.end()); // 原地去重
  int ans = 0, left = 0;
  for (int i = 0; i < nums.size(); i++) {
    while (nums[left] < nums[i] - n + 1) { // nums[left] 不在窗口内
      left++;
    }
    ans = max(ans, i - left + 1);
  }
  return n - ans;
}

//int minOperations(vector<int> &nums) {
//  int n = nums.size();
//  sort(nums.begin(), nums.end());
//  nums.erase(unique(nums.begin(), nums.end()), nums.end()); // 原地去重
//  int ans = 0, left = 0;
//  for (int i = 0; i < nums.size(); i++) {
//    while (nums[left] < nums[i] - n + 1) { // nums[left] 不在窗口内
//      left++;
//    }
//    ans = max(ans, i - left + 1);
//  }
//  return n - ans;
//}


