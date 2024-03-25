//
// Created by windows on 2023/3/2.
//

#include "Solution441.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int arrangeCoins(int n) {
  int index = 1;
  while (n >= index){
    n -= index;
    index++;
  }
  return index - 1;
}