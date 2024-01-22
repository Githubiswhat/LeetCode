//
// Created by windows on 2023/3/2.
//

#include "Solution2719.h"
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

const int MOD = 1'000'000'007;

int calc(string str, int min_sum, int max_sum){
  int n = str.size();
  vector<vector<int>> memo(n, vector<int>(min(9 * n, max_sum) + 1, -1));

  function<int(int, int, bool)> f = [&](int i, int sum, bool limit){
    if (sum > max_sum){
      return 0;
    }
    if (i == n){
      return sum >= min_sum ? 1 : 0;
    }
    if (!limit && memo[i][sum] != -1){
      return memo[i][sum];
    }

    int res = 0;
    int up = limit ? str[i] - '0' : 9;
    for (int d = 0; d <= up; ++d) {
      res = (res + f(i + 1, sum + d, limit && d == up)) % MOD;
    }
    if (!limit){
      memo[i][sum] = res;
    }
    return res;
  };

  return f(0, 0, true);
  ;}



int count(string num1, string num2, int min_sum, int max_sum) {
  int ans = calc(num2, min_sum, max_sum) - calc(num1, min_sum, max_sum) + MOD;
  int sum = 0;
  for (const auto &item : num1){
    sum += item - '0';
  }
  ans += sum >= min_sum && sum <= max_sum;
  return ans % MOD;
}