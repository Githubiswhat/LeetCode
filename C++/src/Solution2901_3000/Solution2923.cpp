//
// Created by windows on 2023/3/2.
//

#include "Solution2923.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int findChampion(vector<vector<int>>& grid) {
  int max = 0, maxI = 0;
  for (int i = 0; i < grid.size(); ++i) {
    int count = 0;
    auto row = grid[i];
    for (const auto &col : row){
      if (col == 1){
        count++;
      }
    }
    if (count > max){
      max = count;
      maxI = i;
    }
  }
  return maxI;
}