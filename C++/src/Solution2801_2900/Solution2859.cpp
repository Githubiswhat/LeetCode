//
// Created by windows on 2023/3/2.
//

#include "Solution2859.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int sumIndicesWithKSetBits(vector<int>& nums, int k) {
  int n = nums.size();
  int res = 0;
  for (int i = 0; i < n; ++i) {
    if (__builtin_popcount(i) == k){
     res += nums[i];
    }
  }
  return res;
}