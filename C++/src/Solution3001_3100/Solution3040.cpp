//
// Created by windows on 2024/3/18.
//

#include "Solution3040.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

int maxOperations(vector<int>& nums) {
  int left = 0, right = nums.size(), ans = 0;
  function<void(int, int , int, int)> fun = [&](int left, int right, int x, int cnt){
    if (left >= right){
      return;
    }
    ans = max(ans, cnt);
    if (left + 1 < right && nums[left] + nums[left + 1] == x){
      left += 2;
    } else if (right - 1 > left && nums[right] + nums[right - 1] == x){
      right -= 2;
    } else if (nums[left] + nums[right] == x){
      right--;
      left++;
    }
    fun(left, right, x, cnt + 1);
  };
  fun(0, nums.size(), nums[left] + nums[left + 1], 0);
  fun(0, nums.size(), nums[left] + nums[right], 0);
  fun(0, nums.size(), nums[right] + nums[right - 1], 0);
  return ans;
}