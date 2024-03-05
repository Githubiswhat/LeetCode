//
// Created by windows on 2023/3/2.
//

#include "Solution1686.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

//int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
//  int n = aliceValues.size();
//  vector<int> ids(n);
//  iota(ids.begin(), ids.end(), 0);
//  sort(ids.begin(), ids.end(), [&](int i, int j) {
//    return aliceValues[i] + bobValues[i] > aliceValues[j] + bobValues[j];
//  });
//  int diff = 0;
//  for (int i = 0; i < n; ++i) {
//    if (i % 2 == 0){
//      diff += aliceValues[ids[i]];
//    }else{
//      diff -= bobValues[ids[i]];
//    }
//  }
//  return (diff > 0) - (diff < 0);
//}

int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
  int n = aliceValues.size();
  vector<pair<int, int>> nums(n);
  int sumB = 0;
  for (int i = 0; i < n; ++i) {
    nums[i] = {aliceValues[i], bobValues[i]};
    sumB += bobValues[i];
  }
  sort(nums.begin(), nums.end(), [&](pair<int, int> a, pair<int, int> b){
    return a.first + a.second > b.first + b.second;
  });

  int sumA = 0;
  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0){
      sumA += nums[i].first;
      sumB -= nums[i].second;
    }
  }
  return sumA > sumB ? 1 : sumA == sumB ? 0 : -1;
}
