//
// Created by windows on 2023/3/2.
//

#include "Solution1507.h"

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
