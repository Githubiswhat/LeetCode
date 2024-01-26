//
// Created by windows on 2023/3/2.
//

#include "Solution2865.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


long long maximumSumOfHeights(vector<int>& maxHeights) {
  long long res = 0;
  int n = maxHeights.size();
  auto countSum = [&](int index){
    long long sum = 0;
    int minVal = maxHeights[index];
    for (int i = index; i < n; ++i) {
      if (maxHeights[i] < minVal){
        minVal = maxHeights[i];
      }
      sum += minVal;
    }
    minVal = maxHeights[index];
    for (int i = index - 1; i >= 0; --i) {
      if (maxHeights[i] <= minVal){
        minVal = maxHeights[i];
      }
      sum += minVal;
    }
    return sum;
  };
  for (int i = 0; i < n; ++i) {
      res = max(res, countSum(i));
  }
  return res;
}