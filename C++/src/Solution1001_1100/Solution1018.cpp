//
// Created by windows on 2023/3/2.
//

#include "Solution1018.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <valarray>
#include <vector>
using namespace std;


vector<bool> prefixesDivBy5(vector<int>& nums) {
  int n = nums.size();
  vector<bool> res(n);
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum * 2 + nums[i];
    res[i] = sum % 5 == 0;
  }
  return res;
}