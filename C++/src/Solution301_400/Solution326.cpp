//
// Created by windows on 2023/3/2.
//

#include "Solution326.h"
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <valarray>
#include <vector>
using namespace std;

bool isPowerOfThree(int n) {
  if (n == 1) return true;
  if (n <= 0 || n % 3 != 0) return false;
  int left =  1, right = n;
  while (left + 1 < right){
    int mid = left + (right - left)/ 2;
    long long num = pow(3, mid);
    if (num == n){
      return true;
    }else if (num < n){
      left = mid;
    } else{
      right = mid;
    }
  }
  return false;
}