//
// Created by windows on 2023/3/2.
//

#include "Solution191.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int hammingWeight(int n) {
  int res = 0;
  for (int i = 0; i < 32; ++i) {
    res += (n >> i) & 1;
  }
  return res;
}