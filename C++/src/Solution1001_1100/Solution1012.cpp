//
// Created by windows on 2023/3/10.
//

#include "Solution1012.h"
#include <bits/stdc++.h>

int Solution::numDupDigitsAtMostN(int n) {
    int i = init(n);
    return n - dfs(i, 0, true, true);
}

int Solution::init(int n) {
    int i = -1;
    while (n){
        nums[++i] = n % 10;
        n /= 10;
    }
    memset(dp, -1, sizeof(dp));
    return i;
}

int Solution::dfs(int p, int mask, bool limit, bool lead) {
    if (p < 0){
        return lead ? 0 : 1;
    }
    if (!limit && !lead && dp[p][mask] != -1){
        return dp[p][mask];
    }
    int up = limit ? nums[p] : 9;
    int ans = 0;
    for (int i = 0; i <= up; ++i) {
        if (mask >> i & 1){
            continue;
        }
        if (i == 0 && lead){
            ans += dfs(p - 1, mask, limit && i == up, lead);
        }else{
            ans += dfs(p - 1, mask | 1 << i, limit && i == up, false);
        }
    }
    if (!limit && !lead){
        dp[p][mask] = ans;
    }
    return ans;
}






