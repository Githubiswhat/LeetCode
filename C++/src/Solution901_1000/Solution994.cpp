//
// Created by windows on 2023/3/2.
//

#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
  queue<pair<int,int>> q; // 使用队列替代原来的 vector<pair<int,int>> q
  int row = grid.size(), col = grid[0].size();
  unordered_set<int> set;
  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
      if (grid[i][j] == 1){
        set.emplace(i * col + j);
      }else if (grid[i][j] == 2){
        q.push({i,j});
      }
    }
  }
  int ans = 0;
  while (!q.empty()){ // 使用队列判断循环条件
    int size = q.size(); // 记录当前循环中坏橘子的数量
    for (int i = 0; i < size; ++i) { // 遍历当前所有坏橘子
      auto item = q.front();
      q.pop(); // 从队列中取出一个坏橘子
      int x = item.first, y = item.second; // 获取坏橘子的位置
      // 检查上下左右四个方向是否有新鲜橘子，如果有，则变为坏橘子
      if (x > 0 && grid[x - 1][y] == 1) {
        grid[x - 1][y] = 2;
        q.push({x - 1, y});
      }
      if (x < row - 1 && grid[x + 1][y] == 1) {
        grid[x + 1][y] = 2;
        q.push({x + 1, y});
      }
      if (y > 0 && grid[x][y - 1] == 1) {
        grid[x][y - 1] = 2;
        q.push({x, y - 1});
      }
      if (y < col - 1 && grid[x][y + 1] == 1) {
        grid[x][y + 1] = 2;
        q.push({x, y + 1});
      }
    }
    if (!q.empty()) ans++; // 如果队列不为空，说明有新的坏橘子产生，时间加一
  }
  // 判断是否有新鲜橘子未被腐烂，如果有，则返回 -1，否则返回时间
  for (const auto &row : grid) {
    for (int cell : row) {
      if (cell == 1) return -1;
    }
  }
  return ans;
}

int main() {
  vector<vector<int>> grid = {{2,1,1},
                              {1,1,0},
                              {0,1,1}};
  cout << "Time taken for all oranges to rot: " << orangesRotting(grid) << endl;
  return 0;
}