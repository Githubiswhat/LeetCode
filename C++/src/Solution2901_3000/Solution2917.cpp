//
// Created by windows on 2023/3/2.
//

#include "Solution2917.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


int findKOr(vector<int>& nums, int k) {
  int ans = 0;
  unsigned int num = 1;
  for (int i = 0; i < 32; ++i) {
    int count = 0;
    for (auto &item : nums){
      if (item & num){
        count++;
      }
    }
    if (count >= k){
      ans += num;
    }
    num = num << 1;
  }
  return ans;
}