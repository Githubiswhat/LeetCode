//
// Created by windows on 2023/3/2.
//

#include "Solution2344.h"
#include "vector"
#include <algorithm>
using namespace std;


//int minOperations(vector<int>& nums, vector<int>& numsDivide) {
//  sort(nums.begin(), nums.end());
//  int n = nums.size();
//  for (int i = 0; i < n; ++i) {
//    if (i != 0 && nums[i] == nums[i - 1]){
//      continue;
//    }
//    bool flag = true;
//    for (const auto &item : numsDivide){
//      if (item % nums[i] != 0){
//        flag = false;
//        break;
//      }
//    }
//    if (flag){
//      return i;
//    }
//  }
//  return -1;
//}



int gcb(int a, int b){
  if (b == 0){
    return a;
  }
  return gcb(b, a % b);
}


int minOperations(vector<int>& nums, vector<int>& numsDivide) {
  sort(nums.begin(), nums.end());
  int n = nums.size();
  int gcbNum = 0;
  for (const auto &item : numsDivide){
    gcbNum = gcb(gcbNum, item);
  }
  for (int i = 0; i < n; ++i) {
    if (i != 0 && nums[i] == nums[i - 1]){
      continue;
    }
    if (nums[i] % gcbNum == 0){
      return i;
    }
  }
  return -1;
}
