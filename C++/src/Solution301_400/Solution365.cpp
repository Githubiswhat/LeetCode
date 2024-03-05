//
// Created by windows on 2023/3/2.
//

#include "Solution365.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
  if (jug1Capacity + jug2Capacity < targetCapacity) return false;
  int a = max(jug1Capacity, jug2Capacity);
  int b = min(jug1Capacity, jug2Capacity);

  int c = a + b;
  while (c) {
    if (c == targetCapacity) {
      return true;
    }

    if (c >= b) {
      c -= b;
    } else {
      c += a;
    }
  }

  return false;
}
