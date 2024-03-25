//
// Created by windows on 2023/3/2.
//

#include "Solution263.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool isUgly(int n) {
  if (n <= 0) return false;
  while (n != 1){
    if (n % 2 == 0){
      n /= 2;
    }else if (n % 3 == 0){
      n /= 3;
    }else if (n % 5 == 0){
      n /= 5;
    }else{
      return false;
    }
  }
  return true;
}