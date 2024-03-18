//
// Created by windows on 2023/3/2.
//

#include "Solution560.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


int subarraySum(vector<int>& nums, int k) {
  int n = nums.size();
  vector<int> s(n + 1);

  for (int i = 0; i < n; ++i) {
    s[i + 1] = s[i] + nums[i];
  }

  int left = 0, right = 1;
  int res = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j < i; ++j) {
      if (s[i] - s[j] == k){
        res++;
      }
    }
  }

  return res;
}
