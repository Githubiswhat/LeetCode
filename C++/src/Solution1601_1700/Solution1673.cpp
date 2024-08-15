//
// Created by windows on 2023/3/2.
//

#include "Solution1673.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> mostCompetitive(vector<int>& nums, int k) {
  vector<int> s;
  int n = nums.size();
  for (int i = 0; i < n; ++i) {
    while (!s.empty() && s.back() > nums[i] && n - i + s.size() - 1 >= k) {
      s.pop_back();
    }
    if (s.size() < k) {
      s.push_back(nums[i]);
    }
  }
  return s;
}