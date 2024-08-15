//
// Created by windows on 2023/3/2.
//

#include "Solution2028.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
  int sum = 0, m = rolls.size();
  for (int i = 0; i < m; ++i) {
    sum += rolls[i];
  }
  int total = mean * (n + m) - sum;
  if (total < n || total > n * 6) {
    return {};
  }
  vector<int> ans(n);
  for (int i = 0; i < n; ++i) {
    ans[i] = total / n;
  }
  int x = total - total / n * n;
  for (int i = 0; i < x; ++i) {
    ans[i]++;
  }
  return ans;
}