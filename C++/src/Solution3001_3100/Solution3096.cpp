//
// Created by windows on 2024/3/18.
//

#include "Solution3096.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

int minimumLevels(vector<int>& possible) {
  int sum = 0;
  for (const auto &item : possible){
    sum += item == 0 ? -1 : 1;
  }
  int x = 0;
  for (int i = 0; i < possible.size() - 1; ++i) {
    x += possible[i] == 0 ? -1 : 1;
    if (x > sum - x){
      return i + 1;
    }
  }
  return -1;
}