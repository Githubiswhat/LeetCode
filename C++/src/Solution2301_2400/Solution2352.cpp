//
// Created by windows on 2023/3/2.
//

#include "Solution2352.h"
#include "vector"
using namespace std;


int equalPairs(vector<vector<int>>& grid) {
  int m = grid.size();
  int n = grid[0].size();

  int count = 0;

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (grid[i][0] == grid[0][j]){
        bool flag = true;
        for (int k = 0; k < m; ++k) {
          if (grid[i][k] != grid[k][j]){
            flag = false;
            break;
          }
        }
        if (flag){
          count++;
        }
      }
    }
  }
  return count;
}
