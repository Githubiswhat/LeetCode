//
// Created by windows on 2023/3/2.
//

#include "Solution2739.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int distanceTraveled(int mainTank, int additionalTank) {
  int ans = 0;
  while (mainTank >= 5) {
    ans += 50;
    mainTank -= 5;
    if (additionalTank > 0){
      mainTank++;
      additionalTank--;
    }
  }
  ans += mainTank * 10;
  return ans;
}