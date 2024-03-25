//
// Created by windows on 2023/3/2.
//

#include "Solution492.h"
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <valarray>
#include <vector>
using namespace std;

vector<int> constructRectangle(int area) {
  int x = sqrt(area);
  if (x * x == area) return {x , x};
  for (int i = x - 1; i >= 0; --i) {
    if (area % i == 0){
      return {area / i, i};
    }
  }
  return {};
}