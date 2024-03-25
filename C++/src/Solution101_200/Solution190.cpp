//
// Created by windows on 2023/3/2.
//

#include "Solution190.h"
#include <cstdint>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

uint32_t reverseBits(uint32_t n) {
  uint32_t res = 0;
  for (int i = 0; i < 32; ++i) {
    res = (res << 1) | (n & 1);
    n >>= 1;
  }
  return res;
}
