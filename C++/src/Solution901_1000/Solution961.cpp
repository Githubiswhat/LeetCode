//
// Created by windows on 2023/3/2.
//

#include "Solution961.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int repeatedNTimes(vector<int>& nums) {
  unordered_set<int> set;
  for (const auto &item : nums){
    if (set.count(item) != 0){
      return item;
    }
    set.emplace(item);
  }
  return -1;
}
