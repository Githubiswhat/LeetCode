//
// Created by windows on 2023/3/2.
//

#include "Solution1162.h"
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
  int left = 0;
  int right =  nums.size() - 1;
  while (left < right - 1){
    int mid = (left + right ) / 2;
    if (nums[mid] <nums[mid + 1]){
      left = mid;
    } else if (nums[mid + 1] < nums[mid]){
      right = mid;
    }
  }
  return nums[left] > nums[right] ? left : right;
}
