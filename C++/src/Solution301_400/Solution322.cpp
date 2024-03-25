//
// Created by windows on 2023/3/2.
//

#include "Solution322.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
  vector<int> dp(amount + 1, INT_MAX);
  dp[0] = 0;
  int n = coins.size();

  for (int i = 1; i <= amount; i++) {
    for (int j = 0; j < n; ++j) {
      if (i - coins[j] >=0 && dp[i - coins[j]] != INT_MAX){
        dp[i] = min(dp[i], dp[i - coins[j]] + 1);
      }
    }
  }
  return dp[amount]== INT_MAX ? -1 : dp[amount];
}