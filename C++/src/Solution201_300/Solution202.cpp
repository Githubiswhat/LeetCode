//
// Created by windows on 2023/3/2.
//

#include "Solution202.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


long long getNext(int n) {
  long long res = 0;
  while (n > 0) {
    int temp = n % 10;
    res += temp * temp;
    n /= 10;
  }
  return res;
}


bool isHappy(int n) {
  unordered_set<int> seen;
  while (n != 1 && !seen.count(n)) {
    seen.insert(n);
    n = getNext(n);
  }
  return n == 1;
}