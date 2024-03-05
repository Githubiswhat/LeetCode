//
// Created by windows on 2023/3/2.
//

#include "Solution1726.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
#include "unordered_map"
using namespace std;


int tupleSameProduct(vector<int>& nums) {
  unordered_map<int, int> map;
  for (int i = 0; i < nums.size(); ++i) {
    for (int j = i + 1; j < nums.size(); ++j) {
      map[nums[i] * nums[j]]++;
    }
  }

  int res = 0;
  for (const auto &item : map){
    if (item.second >= 2){
      for (int i = 1; i <= item.second - 1; ++i) {
        res += i;
      }
    }
  }
  return res * 8;
}
