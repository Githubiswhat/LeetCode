//
// Created by windows on 2023/3/2.
//

#include "Solution930.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


//int numSubarraysWithSum(vector<int>& nums, int goal) {
//  int n = nums.size();
//  vector<int> s(n + 1);
//
//  for (int i = 0; i < n; ++i) {
//    s[i + 1] = s[i] + nums[i];
//  }
//
//  int left = 0, right = 1;
//  int res = 0;
//  for (int i = 1; i <= n; ++i) {
//    for (int j = 0; j < i; ++j) {
//      if (s[i] - s[j] == goal){
//        res++;
//      }
//    }
//  }
//  return res;
//
//}


int numSubarraysWithSum(vector<int>& nums, int goal) {
  unordered_map<int, int> hash;
  int n = nums.size();
  int sum = 0;
  int ans = 0;
  hash[0] = 1;
  for (int i = 0; i < n; ++i) {
    sum += nums[i];
    if (hash.count(sum - goal)) {
      ans += hash[sum - goal];
    }
    hash[sum]++;
  }
  return ans;
}





















