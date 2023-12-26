//
// Created by windows on 2023/3/2.
//

#include "Solution2866.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <stack>
using namespace std;

long long maximumSumOfHeights(vector<int>& maxHeights) {
  int n = maxHeights.size();
  vector<long long> pre(n), suf(n);
  stack<int> stack;

  // 计算 suf 数组
  for (int i = n - 1; i >= 0; --i) {
    while (!stack.empty() && maxHeights[i] <= maxHeights[stack.top()]) {
      stack.pop();
    }
    if (stack.empty()) {
      suf[i] = (long long)(n - i) * maxHeights[i];
    } else {
      suf[i] = (long long)(stack.top() - i) * maxHeights[i] + suf[stack.top()];
    }
    stack.push(i);
  }

  stack = ::stack<int>(); // 重置栈

  long long ans = 0;
  // 计算 pre 数组，并同时计算最大值
  for (int i = 0; i < n; ++i) {
    while (!stack.empty() && maxHeights[i] <= maxHeights[stack.top()]) {
      stack.pop();
    }
    if (stack.empty()) {
      pre[i] = (long long) (i + 1) * maxHeights[i];
    } else {
      pre[i] = (long long)(i - stack.top()) * maxHeights[i] + pre[stack.top()];
    }
    ans = max(ans, pre[i] + suf[i] - maxHeights[i]);
    stack.push(i);
  }

  return ans;
}
