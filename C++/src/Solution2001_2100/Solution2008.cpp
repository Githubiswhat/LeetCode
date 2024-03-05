//
// Created by windows on 2023/3/2.
//

#include "Solution2008.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <functional>

#include "vector"
#include "unordered_map"
using namespace std;

//// 超时
//long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
//  function<long long(int, int, int)> dfs = [&](int trip, int index, int end) -> long long {
//    // 确保索引没有超出 rides 数组的范围
//    if (index >= rides.size()) {
//      return trip;
//    }
//
//    // 根据乘客信息进行递归调用
//    long long a = 0;
//    if (rides[index][0] >= end) {
//      a = dfs(trip + rides[index][2] + rides[index][1] - rides[index][0], index + 1, rides[index][1]);
//    }
//    long long b = dfs(trip, index + 1, end);
//    return max(a, b);
//  };
//  sort(rides.begin(), rides.end());
//  return dfs(0, 0, 0);
//}

long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
  vector<long long > dp(n + 1);
  unordered_map<int, vector<vector<int>>> rideMap;
  for (const auto &item : rides){
    rideMap[item[1]].push_back(item);
  }

  for (int i = 1; i <= n; ++i) {
    dp[i] = dp[i - 1];
    for (const auto &item : rideMap[i]){
      dp[i] = max(dp[i], dp[item[0]] + item[1] - item[0] + item[2]);
    }
  }
  return dp[n];
}
