//
// Created by windows on 2023/3/2.
//

#include "Solution1052.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
  int n = customers.size();
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    if (grumpy[i] == 0){
      ans += customers[i];
    }
  }

  int max = 0;
  int count = 0;
  for (int i = 0; i < minutes; ++i) {
    if (grumpy[i]){
      count += customers[i];
    }
  }
  max = max > count ? max : count;
  for (int i = minutes; i < n; ++i) {
    if (grumpy[i]){
      count += customers[i];
    }
    if (grumpy[i - minutes]){
      count -= customers[i - minutes];
    }
    max = max > count ? max : count;
  }
  return ans + max;
}