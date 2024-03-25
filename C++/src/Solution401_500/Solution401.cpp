//
// Created by windows on 2023/3/2.
//

#include "Solution401.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

//int splitArray(vector<int>& nums, int k) {
//    auto check =[&](int mx) -> bool {
//        int sum = 0, count = 1;
//        for (const auto &item: nums){
//            if (sum + item < mx){
//                sum += item;
//            }else{
//                if (count++ == k){
//                    return false;
//                }
//                sum = item;
//            }
//        }
//        return true;
//    };
//
//    int right = accumulate(nums.begin(), nums.end(), 0);
//    int left = max(*max_element(nums.begin(), nums.end()) - 1, (right - 1) / k);
//    while (left + 1 < right){
//        int mid = left + (right - left) / 2;
//        (check(mid) ? right : left) = mid;
//    }
//    return right;
//}

vector<string> readBinaryWatch(int turnedOn) {
  vector<string> ans;
  for (int h = 0; h < 12; ++h) {
    for (int m = 0; m < 60; ++m) {
      if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {
        ans.push_back(to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m));
      }
    }
  }
  return ans;
}

















