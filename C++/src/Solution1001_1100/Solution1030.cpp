//
// Created by windows on 2023/3/2.
//

#include "Solution1030.h"
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
  vector<vector<int>> res;
  queue<vector<int>> que;
  vector<vector<bool>> visited(rows,vector<bool>(cols, false));
  vector<vector<int>> dirs{
      {0, 1},
      {0, -1},
      {1, 0},
      {-1, 0}
  };
  que.push({rCenter, cCenter});
  visited[rCenter][cCenter] = true;
  while (!que.empty()){
    vector<int> nums = que.front();
    que.pop();
    res.push_back(nums);
    for (int i = 0; i < dirs.size(); ++i) {
      int a = nums[0] + dirs[i][0];
      int b = nums[1] + dirs[i][1];
      if (a >=0 && b >= 0 && a < rows && b < cols && !visited[a][b]){
        que.push({a, b});
        visited[a][b] = true;
      }
    }
  }
  return res;
}