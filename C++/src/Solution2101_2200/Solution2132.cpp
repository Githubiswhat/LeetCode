//
// Created by windows on 2023/3/2.
//

#include "Solution2132.h"
#include "vector"
using namespace std;


//超时
//bool possibleToStamp(vector<vector<int>>& grid, int stampHeight, int stampWidth) {
//  int m = grid.size();
//  int n = grid[0].size();
//
//  for (int i = 0; i < m; ++i) {
//    for (int j = 0; j < n; ++j) {
//      if (grid[i][j] == 1){
//        continue;
//      }
//      int count = 0;
//      if (i + stampHeight >= m || j + stampWidth >= n){
//        continue;
//      }
//      for (int k = i; k < i + stampHeight; ++k) {
//        for (int l = j; l < j + stampWidth; ++l) {
//          if (grid[k][l] == 1){
//            count++;
//            break;
//          }
//        }
//      }
//      if (count == 0){
//        for (int k = i; k < i + stampHeight; ++k) {
//          for (int l = j; l < j + stampWidth; ++l) {
//            grid[k][l] = 2;
//          }
//        }
//      }
//    }
//  }
//
//  for (int i = 0; i < m; ++i) {
//    for (int j = 0; j < n; ++j) {
//      if (grid[i][j] == 0){
//        return false;
//      }
//    }
//  }
//  return true;
//}


bool possibleToStamp(vector<vector<int>>& grid, int stampHeight, int stampWidth) {
  int m = grid.size();
  int n = grid[0].size();

  vector<vector<int>> s(m + 1, vector<int>(n + 1));

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      s[i + 1][j + 1] = s[i + 1][j] + s[i][j + 1] - s[i][j];
    }
  }

  vector<vector<int>> d(m + 2, vector<int>(n + 2));

  for (int i = stampHeight; i <= m; ++i) {
    for (int j = stampWidth; j <= n; ++j) {
      int i1 = i - stampHeight + 1;
      int j1 = j - stampWidth + 1;
      if (s[i][j] - s[i][j1 - 1] - s[i1 - 1][j] + s[i1 - 1][j1 - 1] == 0){
        d[i1][j1]++;
        d[i1][j + 1]--;
        d[i + 1][j1]--;
        d[i + 1][j + 1]++;
      }
    }
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      d[i + 1][j+ 1] = d[i + 1][j] + d[i][j + 1] - d[i][j];
      if (grid[i][j] == 0 && d[i + 1][j + 1] == 0){
        return false;
      }
    }
  }
  return true;
}
























