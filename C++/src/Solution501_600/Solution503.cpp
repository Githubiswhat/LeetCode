//
// Created by windows on 2023/3/2.
//

#include "Solution503.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

#include "vector"
#include "stack"
using namespace std;


vector<int> nextGreaterElements(vector<int>& nums) {
  stack<int> stack;
  int n = nums.size();
  vector<int> res(n, -1);

  for (int i = 0; i < 2 * n; ++i) {
    while (!stack.empty() && nums[stack.top()] < nums[i % n]){
      res[stack.top()] = nums[i % n];
      stack.pop();
    }
    stack.push(i % n);
  }
  return res;
}
