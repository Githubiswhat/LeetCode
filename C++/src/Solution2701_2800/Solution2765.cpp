//
// Created by windows on 2023/3/2.
//

#include "Solution2765.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int alternatingSubarray(vector<int>& nums) {
  int n = nums.size();
  int maxVal = -1;
  for (int i = 0; i < n - 1; ++i) {
    int count = 1;
    int num = 1;
    for (int j = i + 1; j < n; ++j) {
      if (nums[j] - nums[j - 1] == num){
        count++;
        num = -num;
      }else{
        break;
      }
    }
    if (count > 1){
      maxVal = max(maxVal, count);
    }
  }
  return maxVal;
}
