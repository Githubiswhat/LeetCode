//
// Created by windows on 2023/3/2.
//

#include "Solution278.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


bool isBadVersion(int x);

int firstBadVersion(int n) {
  int left = 1, right = n;
  while (left + 1 < right){
    int mid = left + (right - left)/ 2;
    if (isBadVersion(mid)){
      right = mid;
    }else{
      left = mid;
    }
  }
  if (isBadVersion(left)) return left;
  return right;
}