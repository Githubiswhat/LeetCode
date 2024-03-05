//
// Created by windows on 2023/12/19.
//

#include "Solution6.h"
#include <functional>
#include <vector>
using namespace std;
using namespace std;

int minCount(vector<int> &coins) {
  int count = 0;
  for (const auto &item : coins) {
    count += item / 2 + item % 2;
  }
  return count;
}
