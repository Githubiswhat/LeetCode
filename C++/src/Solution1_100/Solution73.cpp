//
// Created by windows on 2023/3/2.
//

#include "Solution73.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <vector>
using namespace std;


//void setZeroes(vector<vector<int>>& matrix) {
//  vector<vector<int>> copy = matrix;
//  for (int i = 0; i < matrix.size(); ++i) {
//    auto row = matrix[i];
//    for (int j = 0; j < row.size(); ++j) {
//      if (row[j] == 0){
//        for (int k = 0; k < row.size(); ++k) {
//          copy[i][k] = 0;
//        }
//        for (int k = 0; k < matrix.size(); ++k) {
//          copy[k][j] = 0;
//        }
//      }
//    }
//  }
//  matrix = copy;
//}

void setZeroes(vector<vector<int>>& matrix) {
  vector<pair<int, int>> list;
  for (int i = 0; i < matrix.size(); ++i) {
    auto row = matrix[i];
    for (int j = 0; j < row.size(); ++j) {
      if (matrix[i][j] == 0){
        list.push_back(make_pair(i, j));
      }
    }
  }
  for (const auto &item : list){
    for (int i = 0; i < matrix.size(); ++i) {
      matrix[i][item.second] = 0;
    }
    for (int i = 0; i < matrix[0].size(); ++i) {
      matrix[item.first][i] = 0;
    }
  }
}
