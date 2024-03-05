//
// Created by windows on 2023/3/2.
//

#include "Solution2596.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool checkValidGrid(vector<vector<int>>& grid) {
  vector<pair<int, int>> dir = {
      {-1, -2}, {-1, 2},
      {-2, -1}, {-2, 1},
      {1, -2}, {1, 2},
      {2, -1}, {2,1}
  };
  int cur = grid[0][0];
  int n = grid.size();
  int nDir = dir.size();
  int curX = 0, curY = 0;
  int count = 0;
  while (count != n * n - 1){
    bool find = false;
    for (int i = 0; i < nDir; ++i) {
      int a = curX + dir[i].first;
      int b = curY + dir[i].second;
      if (a >= 0 && a < grid.size() && b >= 0 && b < grid.size() && grid[a][b] == (cur + 1) % (n * n)){
        curX = a;
        curY = b;
        cur++;
        count++;
        find = true;
        break;
      }
    }
    if (!find){
      return false;
    }
  }
  return true;
}
