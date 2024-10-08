//
// Created by windows on 2023/3/2.
//

#include "Solution2831.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int longestEqualSubarray(vector<int> &nums, int k) {
  int n = nums.size();
  vector<vector<int>> pos_lists(n + 1);
  for (int i = 0; i < n; i++) {
    int x = nums[i];
    pos_lists[x].push_back(i - pos_lists[x].size());
  }

  int ans = 0;
  for (auto& pos : pos_lists) {
    int left = 0;
    for (int right = 0; right < pos.size(); right++) {
      while (pos[right] - pos[left] > k) { // 要删除的数太多了
        left++;
      }
      ans = max(ans, right - left + 1);
    }
  }
  return ans;
}