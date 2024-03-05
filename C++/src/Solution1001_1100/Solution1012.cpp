//
// Created by windows on 2023/3/10.
//

#include "Solution1012.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <bits/stdc++.h>

//int Solution::numDupDigitsAtMostN(int n) {
//    int i = init(n);
//    return n - dfs(i, 0, true, true);
//}
//
//int Solution::init(int n) {
//    int i = -1;
//    while (n){
//        nums[++i] = n % 10;
//        n /= 10;
//    }
//    memset(dp, -1, sizeof(dp));
//    return i;
//}
//
//int Solution::dfs(int p, int mask, bool limit, bool lead) {
//    if (p < 0){
//        return lead ? 0 : 1;
//    }
//    if (!limit && !lead && dp[p][mask] != -1){
//        return dp[p][mask];
//    }
//    int up = limit ? nums[p] : 9;
//    int ans = 0;
//    for (int i = 0; i <= up; ++i) {
//        if (mask >> i & 1){
//            continue;
//        }
//        if (i == 0 && lead){
//            ans += dfs(p - 1, mask, limit && i == up, lead);
//        }else{
//            ans += dfs(p - 1, mask | 1 << i, limit && i == up, false);
//        }
//    }
//    if (!limit && !lead){
//        dp[p][mask] = ans;
//    }
//    return ans;
//}
//


int numDupDigitsAtMostN(int n) {
  auto s = to_string(n);
  int m = s.size();
  vector<vector<int>> memo(m,vector<int>(1 << 10, -1));

  function<int(int,int,bool,bool)> f = [&](int i, int mask, bool limit, bool isNum) -> int {
    if (i == m){
      return isNum;
    }

    if (!limit && isNum && memo[i][mask] != -1){
      return memo[i][mask];
    }

    int res = 0;
    if (!isNum){
      res += f(i + 1, mask, false, false);
    }

    int up = limit ? s[i] - '0' : 9;
    for (int j = isNum ? 0 : 1; j <= up; ++j){
      if ((mask >> j & 1)== 0){
        res += f(i + 1, mask | 1 << j, limit && j == up, true);
      }
    }
    if (!limit && isNum){
      memo[i][mask] = res;
    }
    return res;
  };
  return n - f(0, 0, true, false);
}

