//
// Created by windows on 2023/3/2.
//

#include "Solution2529.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int maximumCount(vector<int>& nums) {
  int neg = 0, pos = 0;
  for (const auto &item : nums){
    if (item > 0){
      pos++;
    } else if (item < 0){
      neg++;
    }
  }
  return max(neg, pos);
}