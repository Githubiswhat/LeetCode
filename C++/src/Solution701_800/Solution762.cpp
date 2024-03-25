//
// Created by windows on 2023/3/2.
//

#include "Solution762.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int countPrimeSetBits(int left, int right) {
  int count = 0;
  unordered_set<int> nums ={
      2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31
  };
  for (int i = left; i <= right; ++i) {
    int size = __builtin_popcount(i);
    if (nums.count(size)){
      count++;
    }
  }
  return count;
}