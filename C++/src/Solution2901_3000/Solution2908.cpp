//
// Created by windows on 2023/3/2.
//

#include "Solution2908.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int minimumSum(vector<int>& nums) {
  int n = nums.size();
  int res = INT_MAX;
  for (int j = 1; j < n - 1; ++j) {
    for (int i = 0; i < j; ++i) {
      if (nums[i] < nums[j]){
        for (int k = j + 1; k < n; ++k) {
          if (nums[j] > nums[k]){
            res = min(res, nums[i] + nums[j] + nums[k]);
          }
        }
      }
    }
  }
  return res == INT_MAX ? -1 : res;
}