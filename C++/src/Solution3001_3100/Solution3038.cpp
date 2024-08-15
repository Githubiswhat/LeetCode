//
// Created by windows on 2024/3/18.
//

#include "Solution3038.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

int maxOperations(vector<int>& nums) {
  int n = nums.size(), ans = 0, score = 0;
  for (int i = 0; i < n - 1; i += 2) {
    if (score == 0 || nums[i] + nums[i + 1] == score) {
      score = nums[i] + nums[i + 1];
      ans++;
    } else{
      break;
    }
  }
  return ans;
}