//
// Created by windows on 2023/3/2.
//

#include "Solution803.h"
#include <functional>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


bool dfs(int x ,int y, vector<vector<int>>& visited, vector<vector<int>>& grid, vector<vector<int>>& dirs){
  if (x == 0){
    return true;
  }
  visited[x][y] = 1;
  bool res = false;
  for (const auto &item : dirs) {
    int a = x + item[0], b = y + item[1];
    if (a >= 0 && a < grid.size() && b >= 0 && b < grid[0].size() &&grid[a][b] == 1 && !visited[a][b]) {
      res = res || dfs(a, b, visited, grid, dirs);
      if (res){
        return true;
      }
    }
  }
  return false;
}


int dfs2(int x, int y, vector<vector<int>>& grid, vector<vector<int>>& dirs){
  grid[x][y] = 1;
  int count = 1;
  for (const auto &item : dirs) {
    int a = x + item[0], b = y + item[1];
    if (a >= 0 && a < grid.size() && b >= 0 && b < grid[0].size() &&grid[a][b] == 1) {
      count += dfs2(a, b, grid, dirs);
    }
  }
  return count;
}


vector<int> hitBricks(vector<vector<int>>& grid, vector<vector<int>>& hits) {
  vector<vector<int>> dirs = {{0,1},{1,0},{0,-1},{-1,0}};
  vector<int> res(hits.size(), 0);

  for (const auto &item : hits){
    int i = item[0], j = item[1];
    grid[i][j] = 0;
    vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), 0));

    for (const auto &item : dirs){
      int x = i + item[0], y = j + item[1];
      if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && grid[x][y] == 1){
        if (dfs(x, y, visited, grid, dirs)){
          res[i] = 0;
        } else{
          res[i] = dfs2(x, y, grid, dirs);
        }
      }
    }
  }
  return res;
}
