//
// Created by windows on 2023/3/2.
//

#include "Solution1793.h"
#include <functional>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int maximumScore(vector<int>& nums, int k) {
  int n = nums.size();
  vector<int> left(n, -1);
  stack<int> s;
  for (int i = 0; i < n; ++i) {
    while (!s.empty() && nums[i] <= nums[s.top()]){
      s.pop();
    }
    if (!s.empty()){
      left[i] = s.top();
    }
    s.push(i);
  }

  s = stack<int>();
  vector<int> right(n, n);
  for (int i = n - 1; i >= 0; --i) {
    while (!s.empty() && nums[i] <= nums[s.top()]){
      s.pop();
    }
    if (!s.empty()){
      right[i] = s.top();;
    }
    s.push(i);
  }

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int h = nums[i], l = left[i], r = right[i];
    if (l < k && k < r){
      ans = max(ans, h * (r - l - 1));
    }
  }
  return ans;
}