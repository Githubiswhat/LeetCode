//
// Created by windows on 2023/3/2.
//

#include "Solution2367.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
#include <algorithm>
using namespace std;


int arithmeticTriplets(vector<int>& nums, int diff) {
  int n = nums.size();
  int count = 0;
  for (int i = 2; i < n; ++i) {
    for (int j = 1; j < i; ++j) {
      for (int k = 0; k < j; ++k) {
        if (nums[i] - nums[j] == diff && nums[j] - nums[k] == diff){
          count++;
        }
      }
    }
  }
  return count;
}
