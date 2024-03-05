//
// Created by windows on 2023/3/2.
//

#include "Solution1887.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int reductionOperations(vector<int>& nums) {
  int n = nums.size();
  int res = 0;
  sort(nums.begin(), nums.end());
  for (int i = 0, k = 0; i < n; ++i, ++k) {
    int num = nums[i];
    int count = 1;
    for (int j = i + 1; j < n; ++j) {
      if (nums[j] == num) {
        i++;
        count++;
      }else{
        break;
      }
    }
    res += count * k;
  }
  return res;
}
