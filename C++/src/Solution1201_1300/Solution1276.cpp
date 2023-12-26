//
// Created by windows on 2023/3/2.
//

#include "Solution1276.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
  if (tomatoSlices % 2 != 0 || tomatoSlices > cheeseSlices * 4 || tomatoSlices < cheeseSlices * 2){
    return {};
  }
  for (int i = 0; i <= cheeseSlices; ++i) {
    if (tomatoSlices - 4 * i >= 0 && (tomatoSlices - 4 * i - (cheeseSlices - i) * 2 == 0)) {
      return {i, cheeseSlices - i};
    }
  }
  return {};
}
