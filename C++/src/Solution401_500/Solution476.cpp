//
// Created by windows on 2023/3/2.
//

#include "Solution476.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int findComplement(int num) {
  int res = 0;
  for (int i = 0; i < 32; ++i) {
    !(num & (1 << i));

  }

  return res;
}
