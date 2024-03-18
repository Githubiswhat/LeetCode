//
// Created by windows on 2023/3/2.
//

#include "Solution2789.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

long long maxArrayValue(vector<int>& nums) {
  vector<long long> list;
  for (const auto &item : nums){
    list.push_back(item);
  }

  long long n = list.size();
  for (int i = n - 2; i >= 0; --i) {
    if (list[i] <= list[i + 1]){
      list[i] += list[i + 1];
      list[i + 1] = 0;
    }
  }

  long long ans = 0;
  for (int i = 0; i < n; ++i) {
    ans = max(ans, list[i]);
  }
  return ans;
}