//
// Created by windows on 2023/3/2.
//

#include "Solution1503.h"
#include <functional>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
  int n = nums.size();
  stack<int> st;
  vector<int> ans(n, -1);
  for (int i = 0; i < 2 * n; ++i) {
    int x = nums[i % n];
    while (!st.empty() && nums[st.top()] < x) {
      ans[st.top()] = x;
      st.pop();
    }
    if (i < n) st.push(i);
  }
  return ans;
}