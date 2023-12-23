//
// Created by windows on 2023/3/2.
//

#include "Solution70.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int climbStairs(int n) {
    int dp[n + 1];
    dp[1] = 1;
    dp[0] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
