//
// Created by windows on 2023/3/2.
//

#include "Solution1005.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int largestSumAfterKNegations(vector<int>& nums, int k) {
  sort(nums.begin(), nums.end());
  int n = nums.size();

  for (int i = 0; i < nums.size(); ++i) {
    if (nums[i] > 0 || k <= 0){
      break;
    }
    nums[i] = -nums[i];
    k--;
  }
  sort(nums.begin(), nums.end());

  if (k % 2== 1){
    nums[0] = -nums[0];
  }

  int sum = 0;
  for (int i = 0; i < nums.size(); ++i) {
    sum += nums[i];
  }
  return sum;
}
