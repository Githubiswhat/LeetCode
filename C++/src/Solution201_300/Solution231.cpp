//
// Created by windows on 2023/3/2.
//

#include "Solution231.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


bool isPowerOfTwo(int n) {
  int count = 0;
  for (int i = 0; i < 32; ++i) {
    count += (n >> i) & 1;
  }
  return n > 0 && count == 1;
}

//bool isPowerOfTwo(int n) {
//  return n > 0 && (n & (n - 1)) == 0;
//}