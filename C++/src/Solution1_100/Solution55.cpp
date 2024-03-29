//
// Created by windows on 2023/3/2.
//

#include "Solution55.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool canJump(vector<int>& nums) {
  int maxR = nums[0];
  int n = nums.size();
  for(int i = 1; i < n; ++i){
    if (i <= maxR){
      maxR = max(maxR, i + nums[i]);
    }
  }
  return maxR >= n - 1;
}
