//
// Created by windows on 2023/3/2.
//

#include "Solution922.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& nums) {
  int n = nums.size();
  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0 && nums[i] % 2 != 0){
      for (int j = i + 1; j < n; ++j) {
        if (nums[j] % 2 == 0) {
          swap(nums[i], nums[j]);
          break;
        }
      }
    }else if (i % 2 != 0 && nums[i] % 2 == 0){
      for (int j = i + 1; j < n; ++j) {
        if (nums[j] % 2 != 0) {
          swap(nums[i], nums[j]);
          break;
        }
      }
    }
  }
  return nums;
}
