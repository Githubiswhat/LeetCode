//
// Created by windows on 2023/3/2.
//

#include "Solution974.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


//int subarraysDivByK(vector<int>& nums, int k) {
//  int n = nums.size();
//  vector<int> s(n + 1);
//
//  for (int i = 0; i < n; ++i) {
//    s[i + 1] = s[i] + nums[i];
//  }
//
//  int res = 0;
//  for (int i = 1; i <= n; ++i) {
//    for (int j = 0; j < i; ++j) {
//      if ((s[i] - s[j]) % k == 0) {
//        res++;
//      }
//    }
//  }
//  return res;
//}

int subarraysDivByK(vector<int>& nums, int k) {
  int n = nums.size();
  unordered_map<int, int> hash;
  hash[0] = 1;

  int sum = 0;
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    sum += nums[i];
    sum = (sum % k + k) % k;
    ans += hash[sum];
    hash[sum % k]++;
  }
  return ans;
}






