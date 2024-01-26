//
// Created by windows on 2023/3/2.
//

#include "Solution2760.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int longestAlternatingSubarray(vector<int>& nums, int threshold) {
  int n = nums.size();
  int res = 0;
  for(int i = 0; i < n; ++i){
    if (nums[i] % 2 != 0 || nums[i] > threshold){
      continue;
    }
    int count = 1;
    for (int j = i + 1; j < n; ++j) {
      if (nums[j] <= threshold && nums[j] % 2  == count % 2){
        count++;
      } else{
        break;
      }
    }
    res = max(res, count);
  }
  return res;
}