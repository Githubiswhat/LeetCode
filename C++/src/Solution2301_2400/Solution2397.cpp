//
// Created by windows on 2023/3/2.
//

#include "Solution2397.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int maximumRows(vector<vector<int>>& matrix, int numSelect) {
  int m = matrix.size(), n = matrix[0].size();
  vector<int> row(m, 0);
  for(int i = 0; i < m; ++i){
    for (int j = 0; j < n; ++j) {
      if (matrix[i][j]){
        row[i] |=  1 << j;
      }
    }
  }

  int maxVal = 0;
  for (int mask = 1; mask < 1 << n; ++mask) {
    if (__builtin_popcount(mask) != numSelect){
      continue;
    }
    int cnt = 0;
    for (const auto &item : row){
      cnt += (item & mask == item);
    }
    maxVal = max(maxVal, cnt);
  }
  return maxVal;
}
