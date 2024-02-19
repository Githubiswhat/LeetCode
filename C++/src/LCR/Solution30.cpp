//
// Created by windows on 2024/2/6.
//

#include "include/Solution30.h"
#include <algorithm>
#include <iostream>
#include <numeric>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int magicTower(vector<int>& nums) {
  int n = nums.size();
  if (accumulate(nums.begin(), nums.end(), 0LL) < 0){
    return -1;
  }
  long long hp = 0;
  priority_queue<int> q;
  int ans = 0;
  for (const auto &item : nums){
    hp += item;
    if (item < 0){
      q.push(-item);
    }
    if (hp < 0){
      hp += q.top();
      q.pop();
      ans++;
    }
  }
  return ans;
}