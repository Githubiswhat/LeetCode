//
// Created by windows on 2023/3/2.
//

#include "Solution338.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> countBits(int n) {
  vector<int> res;
  for (int i = 0; i <= n; ++i) {
    res.push_back(__builtin_popcount(i));
  }
  return res;
}
