//
// Created by windows on 2023/3/2.
//

#include "Solution999.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


int numRookCaptures(vector<vector<char>>& board) {
  int m = board.size();
  int n = board[0].size();
  int count = 0;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (board[i][j] == 'R') {
        for (int k = i; k >= 0; --k) {
          if (board[k][j] == 'p') {
            count++;
            break;
          }else if (board[k][j] == 'B'){
            break;
          }
        }

        for (int k = i + 1; k < m; ++k) {
          if (board[k][j] == 'p') {
            count++;
            break;
          }else if (board[k][j] == 'B'){
            break;
          }
        }

        for (int k = j; k >= 0; --k) {
          if (board[i][k] == 'p') {
            count++;
            break;
          }else if (board[i][k] == 'B'){
            break;
          }
        }

        for (int k = j + 1; k < n; ++k) {
          if (board[i][k] == 'p') {
            count++;
            break;
          }else if (board[i][k] == 'B'){
            break;
          }
        }
      }
    }
  }
  return count;
}
