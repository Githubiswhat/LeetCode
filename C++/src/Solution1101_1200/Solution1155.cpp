//
// Created by windows on 2023/3/2.
//

#include "Solution1155.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <functional>

using namespace std;

//int numRollsToTarget(int n, int k, int target) {
//  if (target < n || target > n * k){
//    return  0;
//  }
//  vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
//  function<int(int,int)> dfs = [&](int i,int j)-> int {
//    if (i == 0){
//      return j == 0;
//    }
//    int &res = dp[i][j];
//    if (res != -1){
//      return res;
//    }
//    res = 0;
//    for (int l = 0; l < k && l <= j; ++l) {
//      res = (res + dfs(i - 1, j - l)) % 1000000007;
//    }
//    return res;
//  };
//  return dfs(n, target -n);
//}


//int numRollsToTarget(int n, int k, int target) {
//    if (target < n || target > n * k){
//      return  0;
//    }
//    vector<vector<int>> f(n + 1, vector<int>(target + 1 - n, 0));
//    f[0][0] = 1;
//    for (int i = 1; i <= n; ++i) {
//      for (int j = 0; j < target + 1 - n; ++j) {
//        for (int l = 0; l < k && l <= j; ++l) {
//          f[i][j] = (f[i][j] + f[i - 1][j - l]) % 1000000007;
//        }
//      }
//    }
//    return f.back().back();
//
//}


int numRollsToTarget(int n, int k, int target) {

}









