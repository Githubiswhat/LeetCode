//
// Created by windows on 2023/3/2.
//

#include "Solution2661.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <vector>
#include <unordered_map>
using namespace std;


int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
  vector<int> row(mat.size());
  vector<int> col(mat[0].size());
  unordered_map<int, pair<int, int>> hashmap;
  for (int i = 0; i < mat.size(); ++i) {
    for (int j = 0; j < mat[0].size(); ++j) {
      hashmap[mat[i][j]] = make_pair(i, j);
    }
  }
  for (int i = 0; i < arr.size(); ++i) {
    auto res = hashmap[arr[i]];
    row[res.first]++;
    col[res.second]++;
    if (row[res.first] == mat[0].size()){
      return i;
    }
    if (col[res.second] == mat.size()){
      return i;
    }
  }
  return -1;
}
