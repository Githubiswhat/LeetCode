//
// Created by windows on 2023/3/2.
//

#include "Solution11.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

//int Solution::maxArea(vector<int> &height) {
//    int n = height.size();
//    int left = 0, right = n - 1;
//    int total = min(height[left], height[right]) * (right - left);
//    while(left < right) {
//        if (height[left] >= height[right]) {
//            right--;
//        }else if (height[left] < height[right]){
//            left++;
//        }
//        total = max(total, min(height[left], height[right]) * (right - left));
//    }
//    return total;
//}


int maxArea(vector<int>& height) {
  int n = height.size();
  int left = 0, right = n - 1;
  int res = 0;
  while (left < right){
    res = max(res, min(height[left], height[right]) * (right - left));
    if (height[left] < height[right]){
      left++;
    }else{
      right--;
    }
  }
  res = max(res, min(height[left], height[right]) * (right - left));
  return res;
}


