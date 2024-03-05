//
// Created by windows on 2023/3/2.
//

#include "Solution551.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "string"
using namespace std;

bool checkRecord(string s) {
  int countA = 0;
  int countL = 0;
  for (const auto &item : s){
    if (item == 'A'){
      countA++;
    }
    if (item == 'L'){
      if (countL > 0){
        countL++;
      } else{
        countL = 1;
      }
    }else{
      if (countL < 3){
        countL = 0;
      }
    }
  }
  return countA < 2 && countL < 3;
}
