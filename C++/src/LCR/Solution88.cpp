//
// Created by windows on 2023/11/30.
//

#include "include/Solution88.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
#include <vector>
using namespace std;

int minCostClimbingStairs(vector<int> &cost) {
  vector<int> df(cost.size() + 1);
  //  f(x) = min(f(x- 1) + f(x - 2))
  for (int i = 2; i <= cost.size(); ++i) {
    df[i] = min(df[i - 1] + cost[i - 1], df[i - 2] + cost[i - 2]);
  }
  return df[cost.size()];
}
