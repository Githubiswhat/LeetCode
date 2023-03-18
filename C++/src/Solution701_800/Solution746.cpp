//
// Created by windows on 2023/3/2.
//

#include "Solution746.h"

int Solution::minCostClimbingStairs(vector<int> &cost) {
    int n = cost.size();
    vector<int> dp(n + 1);
    dp[0] = dp[1] = 0;
    for (int i = 2; i < n + 1; ++i) {
        dp[i] = min(dp[i - 2] + cost[i - 2], dp[i - 1] + cost[i - 1]);
    }
    return dp[n];
}
