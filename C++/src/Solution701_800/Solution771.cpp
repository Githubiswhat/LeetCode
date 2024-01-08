//
// Created by windows on 2023/3/2.
//

#include "Solution771.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


int numJewelsInStones(string jewels, string stones) {
  unordered_set<char> set(jewels.begin(), jewels.end());
  int count = 0;
  for (const auto &item : stones){
    if (set.count(item) != 0){
      count++;
    }
  }
  return count;
}