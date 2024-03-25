//
// Created by windows on 2023/3/2.
//

#include "Solution461.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


int hammingDistance(int x, int y) {
  int res = 0;
  for (int i = 0; i < 32; ++i) {
    res += (x & 1) ^ (y & 1);
    x >>= 1;
    y >>= 1;
  }
  return res;
}