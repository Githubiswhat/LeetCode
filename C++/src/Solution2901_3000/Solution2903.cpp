//
// Created by windows on 2023/3/2.
//

#include "Solution2903.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
  int n = nums.size();
  for (int i = 0; i < n - indexDifference; ++i) {
    for (int j = i + indexDifference; j < n; ++j) {
      if (abs(nums[i] - nums[j]) >= valueDifference){
        return {i , j};
      }
    }
  }
  return {-1, -1};
}