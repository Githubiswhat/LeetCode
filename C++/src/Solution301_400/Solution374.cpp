//
// Created by windows on 2023/3/2.
//

#include "Solution374.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int guess(int num);

int guessNumber(int n) {
  int left = 0, right = n;
  while (left + 1 < right){
    int mid = left + (right - left) / 2;
    int t = guess(mid);
    if (t == 0) return mid;
    else if (t == 1) left = mid;
    else right = mid;
  }
  return  guess(left) == 0 ? left : right;
}