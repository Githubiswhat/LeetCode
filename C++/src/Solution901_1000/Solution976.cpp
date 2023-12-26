//
// Created by windows on 2023/3/2.
//

#include "Solution976.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int largestPerimeter(vector<int>& nums) {
  sort(nums.begin(), nums.end());
  for (int i = nums.size() - 1; i >= 2; --i) {
    if (nums[i - 1] + nums[i - 2] > nums[i])
      return nums[i - 1] + nums[i - 2] + nums[i];
  }
  return 0;
}