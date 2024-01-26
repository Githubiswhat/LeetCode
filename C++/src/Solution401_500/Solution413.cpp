//
// Created by windows on 2023/3/2.
//

#include "Solution413.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int numberOfArithmeticSlices(vector<int>& nums) {
  int count = 2;
  int n = nums.size();
  int res = 0;
  for (int i = 2; i < n; ++i) {
    if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]){
      count++;
    } else{
      for (int j = 1; j <= count - 2; ++j) {
        res += count;
      }
      count = 2;
    }
  }
  for (int j = 1; j <= count - 2; ++j) {
    res += count;
  }
  return res;
}