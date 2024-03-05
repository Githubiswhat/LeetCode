//
// Created by windows on 2023/3/2.
//

#include "Solution908.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


int smallestRangeI(vector<int>& nums, int k) {
  int max = *max_element(nums.begin(), nums.end());
  int min = *min_element(nums.begin(), nums.end());
  if (max - min <= 2 * k){
    return 0;
  }
  return max - min - 2 * k;
}
