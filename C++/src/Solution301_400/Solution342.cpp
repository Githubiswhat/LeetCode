//
// Created by windows on 2023/3/2.
//

#include "Solution342.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


bool isPowerOfFour(int n) {
  while (n && n % 4 == 0){
    n /= 4;
  }
  return n == 1;
}