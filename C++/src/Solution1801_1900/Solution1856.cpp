//
// Created by windows on 2023/3/2.
//

#include "Solution1856.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
#include <stack>
using namespace std;

using LL = long long;
static constexpr int mod = 1000000007;

int maxSumMinProduct(vector<int>& nums) {
  int n = nums.size();
  vector<int> left(n), right(n, n - 1);
  vector<LL> pre(n + 1);
  for (int i = 0; i < n; ++i) {
    pre[i + 1] = pre[i] + nums[i];
  }
  stack<int> stack;
  for (int i = 0; i < n; ++i) {
    while (!stack.empty() &&  nums[stack.top()] >= nums[i]){
      right[stack.top()] = i - 1;
      stack.pop();
    }

    if (!stack.empty()){
      left[i] = stack.top() + 1;
    }
    stack.push(i);
  }

  LL maxVal = 0;
  for (int i = 0; i < n; ++i) {
    maxVal = max(maxVal, (pre[right[i] + 1] - pre[left[i]]) * nums[i]);
  }
  return maxVal % mod;
}


