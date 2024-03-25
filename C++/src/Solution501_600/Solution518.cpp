//
// Created by windows on 2023/3/2.
//

#include "Solution518.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int change(int amount, vector<int>& coins) {
  vector<int> dp(amount + 1, 0);
  dp[0] = 0;
  for (int coin : coins) {
    for (int i = coin; i <= amount; i++) {
      dp[i] += dp[i - coin];
    }
  }
  return dp[amount];
}

