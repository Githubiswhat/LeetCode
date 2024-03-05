//
// Created by windows on 2023/3/2.
//

#include "Solution289.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <vector>
using namespace std;

bool isLife(vector<vector<int>> board, int x, int y){
  int count = 0;
  for (int i = x - 1; i <= x + 1; ++i) {
    for (int j = y - 1; j <= y + 1; ++j) {
      if (i >= 0 && j >= 0 && i < board.size() && j < board[0].size() && (i != x && j != y)){
        if (board[i][j]){
          count++;
        }
      }
    }
  }
  if (board[x][y] && count < 2) {
    return false;
  }
  if (board[x][y] && count > 3){
    return false;
  }
  if (!board[x][y] && count == 3){
    return true;
  }
  return board[x][y];
}


void gameOfLife(vector<vector<int>>& board) {
  vector<vector<int>> copy(board);
  for (int i = 0; i < board.size(); ++i) {
    for (int j = 0; j < board[0].size(); ++j) {
      if (isLife(copy, i, j)){
        board[i][j] = 1;
      }else{
        board[i][j] = 0;
      }
    }
  }
}

