//
// Created by windows on 2023/12/20.
//

#include "include/Solution121.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
#include "vector"
using namespace std;

bool findTargetIn2DPlants(vector<vector<int>> &plants, int target) {
  int i = plants.size() - 1;
  int j = 0;
  while (i >= 0 && j < plants[0].size()) {
    if (plants[i][j] < target) {
      j++;
    } else if (plants[i][j] > target) {
      i--;
    } else {
      return true;
    }
  }
  return false;
}
