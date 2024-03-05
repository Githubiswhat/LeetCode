//
// Created by windows on 2024/2/1.
//

#include "Solution24.h"
#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> numsGame(vector<int>& nums) {
  int n = nums.size();
  priority_queue<int, vector<int>> left;
  priority_queue<int, vector<int>,greater<int>> right;
  const int MOD = 1'000'000'007;

  long long leftSum = 0, rightSum = 0;
  vector<int> ans(n);
  for (int i = 0; i < n; ++i) {
    int b = nums[i] - i;
    if (i % 2 == 0){
      if (!left.empty() && left.top() > b){
        leftSum = leftSum - left.top() + b;
        left.push(b);
        b = left.top();
        left.pop();
      }
      right.push(b);
      rightSum += b;
      ans[i] = (rightSum - leftSum - right.top()) % MOD;
    } else{
      if (right.top() < b){
        rightSum = rightSum - right.top() + b;
        right.push(b);
        b = right.top();
        right.pop();
      }
      left.push(b);
      leftSum += b;
      ans[i] = (rightSum - leftSum) % MOD;
    }
  }
  return ans;
}
