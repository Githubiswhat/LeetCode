//
// Created by windows on 2023/3/2.
//

#include "Solution1738.h"
#include <functional>
#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int kthLargestValue(vector<vector<int>>& matrix, int k) {
  int m = matrix.size(), n = matrix[0].size();
  vector<vector<int>> dp(m + 1, vector<int>(n + 1));
  vector<int> ans;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      dp[i + 1][j + 1] = dp[i + 1][j] ^ dp[i][j + 1] ^ dp[i][j] ^ matrix[i][j];
      ans.push_back(dp[i + 1][j + 1]);
    }
  }
  std::sort(ans.begin(), ans.end());
  return ans[ans.size() - k];
}