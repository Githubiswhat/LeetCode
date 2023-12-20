//
// Created by windows on 2023/3/2.
//

#include "Solution1507.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool checkPerfectNumber(int num) {
  if (num < 28){
    return false;
  }
  int count = 1;
  for (int i = 2; i <= num / 2; ++i) {
    if (num % i == 0){
      count += i;
    }
  }
  return count == num;
}
