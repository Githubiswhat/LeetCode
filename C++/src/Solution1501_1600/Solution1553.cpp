//
// Created by windows on 2023/3/2.
//

//#include "Solution1553.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

//int minDays(int n) {
//  int ans = n;
//  function<void(int, int)> dfs = [&](int x, int cnt){
//    if (x <= 0){
//      if (x == 0){
//        ans = min(ans,cnt);
//      }
//      return;
//    }
//    if (x % 3 == 0){
//      dfs(x / 3 , cnt + 1);
//    }
//    if (x % 2 == 0){
//      dfs(x / 2, cnt + 1);
//    }
//    dfs(x - 1, cnt + 1);
//  };
//  dfs(n, 0);
//  return ans;
//}


int minDays(int n) {
  vector<int> dp(n + 1);
  dp[1] = 1;
  for (int i = 2; i < n + 1; ++i) {
    dp[i] = dp[i - 1] + 1;
    if (i % 2 == 0){
      dp[i] = min(min(dp[i / 2], dp[i - 1]) + 1, dp[i]);
    }
    if (i % 3 == 0){
      dp[i] = min(min(dp[i / 3], dp[i - 1]) + 1, dp[i]);
    }
  }
  return dp[n];
}

//unordered_map<int, int> memo;
//int minDays(int n) {
//  if (n <= 1) {
//    return n;
//  }
//  if (memo.contains(n)) { // 之前计算过
//    return memo[n];
//  }
//  return memo[n] = min(minDays(n / 2) + n % 2,
//                       minDays(n / 3) + n % 3) + 1;
//}



int main() {
  int n = 10;
  cout << "Minimum days to reach 0 from " << n << ": " << minDays(n) << endl;
  return 0;
}
