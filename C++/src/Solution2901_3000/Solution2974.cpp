//
// Created by windows on 2023/3/2.
//

#include "Solution2974.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> numberGame(vector<int>& nums) {
  sort(nums.begin(), nums.end());
  int n = nums.size();
  vector<int> ans;
  for (int i = 0; i < n; i += 2) {
    ans.push_back(nums[i + 1]);
    ans.push_back(nums[i]);
  }
  return ans;
}
