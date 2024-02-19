//
// Created by windows on 2023/3/2.
//

#include "Solution1438.h"
#include <deque>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int longestSubarray(vector<int>& nums, int limit) {
  int n = nums.size();
  int ans = 0;
  deque<int> qMax, qMin;
  int left = 0;
  for (int i = 0; i < n; ++i) {
    while (!qMax.empty() && nums[qMax.back()] < nums[i]){
      qMax.pop_back();
    }
    while (!qMin.empty() && nums[qMin.back()] > nums[i]){
      qMin.pop_back();
    }
    qMax.push_back(i);
    qMin.push_back(i);
    while (!qMax.empty() && !qMin.empty() && nums[qMax.front()] - nums[qMin.front()] > limit){
      if (qMax.front() == left){
        qMax.pop_front();
      }
      if (qMin.front() == left){
        qMin.pop_front();
      }
      left++;
    }
    ans = max(ans, i - left + 1);
  }
  return ans;
}

