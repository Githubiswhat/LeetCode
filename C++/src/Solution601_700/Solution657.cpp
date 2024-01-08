//
// Created by windows on 2023/3/2.
//

#include "Solution657.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool judgeCircle(string moves) {
  int horizon = 0;
  int vertical = 0;
  for (const auto &item : moves){
    switch (item) {
      case 'L' : horizon--;
        break;
      case 'R' : horizon++;
        break;
      case 'U' : vertical++;
        break;
      case 'D' : vertical--;
        break;
    }
  }
  return horizon == 0 && vertical == 0;
}