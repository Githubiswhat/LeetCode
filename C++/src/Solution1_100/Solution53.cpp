//
// Created by windows on 2023/3/2.
//

#include "Solution53.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
using namespace std;


int maxSubArray(vector<int>& nums) {
  int maxVal = nums[0];
  int sum = nums[0];
  for (int i = 1; i < nums.size(); ++i) {
    sum += nums[i];
    if (sum < 0){
      sum = 0;
    }
    maxVal = max(maxVal, sum);
  }
  return maxVal;
}

