//
// Created by windows on 2023/3/2.
//

#include "Solution2239.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int findClosestNumber(vector<int>& nums) {
  int minVal = INT_MAX;
  int minMax = INT_MIN;
  for (const auto &item : nums){
    if (abs(item - 0) < minVal){
      minVal = abs(item - 0);
      minMax = item;
    } else if (abs(item - 0) == minVal){
      if (minMax < item){
        minMax = item;
      }
    }
  }
  return minMax;
}
