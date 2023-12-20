//
// Created by windows on 2023/3/2.
//

#include "Solution1314.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
using namespace std;

vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
  int m = mat.size();
  int n = mat[0].size();

  vector<vector<int>> s(m + 1, vector<int>(n + 1));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; ++j) {
      s[i + 1][j + 1] = s[i][j + 1] + s[i + 1][j] - s[i][j] + mat[i][j];
    }
  }

  vector<vector<int>> res(m, vector<int>(n));

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      int i1 = i - k >= 0 ? i - k : 0;
      int i2 = i + k < m ? i + k : m - 1;
      int j1 = j - k >= 0 ? j - k : 0;
      int j2 = j + k < n ? j + k : n - 1;
      res[i][j] = s[i2 + 1][j2 + 1] - s[i2 + 1][j1] - s[i1][j2 + 1] + s[i1][j1];
    }
  }
  return res;
}
