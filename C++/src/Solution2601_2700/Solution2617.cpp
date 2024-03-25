//
// Created by windows on 2023/3/2.
//

#include "Solution2617.h"
#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

//int minimumVisitedCells(vector<vector<int>>& grid) {
//  int m = grid.size(), n = grid[0].size();
//  vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
//  dp[0][0] = 1;
//
//  queue<pair<int, int>> q;
//  q.push({0, 0});
//
//  while (!q.empty()) {
//    auto current = q.front();
//    q.pop();
//
//    int x = current.first, y = current.second;
//    int steps = dp[x][y];
//
//    // Check right and down directions
//    for (int i = x + 1; i < m && i <= x + grid[x][y]; ++i) {
//      if (dp[i][y] > steps + 1) {
//        dp[i][y] = steps + 1;
//        q.push({i, y});
//      }
//    }
//    for (int j = y + 1; j < n && j <= y + grid[x][y]; ++j) {
//      if (dp[x][j] > steps + 1) {
//        dp[x][j] = steps + 1;
//        q.push({x, j});
//      }
//    }
//  }
//
//  return dp[m - 1][n - 1] == INT_MAX ? -1 : dp[m - 1][n - 1];
//}

int minimumVisitedCells(vector<vector<int>>& grid) {
  int m = grid.size(), n = grid[0].size(), mn;

  vector<vector<pair<int, int>>> col_stacks(n);
  vector<pair<int, int>> row_stack;

  for (int i = m - 1; i >= 0; --i) {
    row_stack.clear();
    for (int j = n - 1; j >= 0; --j) {
      auto& col_stack = col_stacks[j];
      int g = grid[i][j];
      mn = i < m - 1 || j < n - 1 ? INT_MAX : 1;
      if (g){
        auto row_it = lower_bound(row_stack.begin(), row_stack.end(), j + g, [](const pair<int, int> &a, int b) {
          return a.second > b;});
        if (row_it < row_stack.end()){
          mn = row_it->first + 1;
        }

        auto col_it = lower_bound(col_stack.begin(), col_stack.end(), i + g, [](const pair<int, int> &a, int b) {
          return a.second > b;
        });

        if (col_it < col_stack.end()){
          mn = min(mn, col_it->first + 1);
        }
      }

      if (mn < INT_MAX){
        while (!row_stack.empty() && mn < row_stack.back().first){
          row_stack.pop_back();
        }
        row_stack.push_back({mn, j});

        while (!col_stack.empty() && mn < col_stack.back().first){
          col_stack.pop_back();
        }
        col_stack.push_back({mn, i});
      }
    }
  }

  return mn < INT_MAX ? mn : -1;
}


