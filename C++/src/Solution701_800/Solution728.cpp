//
// Created by windows on 2023/3/2.
//

#include "Solution728.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> selfDividingNumbers(int left, int right) {
  vector<int> res;
  function<bool(int)> isSelfDividing = [&](int n) {
    int m = n;
    while (m > 0) {
      int d = m % 10;
      if (d == 0 || n % d != 0) {
        return false;
      }
      m /= 10;
    }
    return true;
  };


  for (int i = left; i <= right; ++i) {
    if (isSelfDividing(i)){
      res.push_back(i);
    }
  }

  return res;
}