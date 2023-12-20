//
// Created by windows on 2023/3/2.
//

#include "Solution34.h"
#include "vector"
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
  int  left = -1, right = nums.size();
  while (left < right - 1){
    int mid = left + (right - left) / 2;
    if (nums[mid] < target){
      left = mid;
    }else {
      right = mid;
    }
  }
  int a = left;
  if (a + 1 == nums.size() || nums[a + 1] != target){
    return {-1, -1};
  }
  left = -1, right = nums.size();
  while (left < right - 1){
    int mid = left + (right - left) / 2;
    if (nums[mid] > target){
      right = mid;
    }else {
      right = mid;
    }
  }
  int b = right;
  return {a, b};
}
