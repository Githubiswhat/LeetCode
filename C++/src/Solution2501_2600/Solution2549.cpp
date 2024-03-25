//
// Created by windows on 2023/3/2.
//

#include "Solution2549.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


int distinctIntegers(int n) {
  return n == 1 ? 0 : n - 1;
}