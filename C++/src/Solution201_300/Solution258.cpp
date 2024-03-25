//
// Created by windows on 2023/3/2.
//

#include "Solution258.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int addDigits(int num) {
  while (num >= 10){
    int n = num;
    int sum = 0;
    while (n > 0){
      sum += n % 10;
      n /= 10;
    }
    num = sum;
  }
  return num;
}