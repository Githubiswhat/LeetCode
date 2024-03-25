//
// Created by windows on 2023/3/2.
//

#include "Solution367.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool isPerfectSquare(int num) {
  int left = 0, right = num;
  while (left + 1 < right) {
    int mid = left + (right - left) / 2;
    long long n = (long long)mid * mid;
    if (n == num) {
      return true;
    } else if (n < num) {
      left = mid;
    } else {
      right = mid;
    }
  }
  return left * left == num || right * right == num;
}