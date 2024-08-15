//
// Created by windows on 2023/3/2.
//

#include "Solution2079.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int wateringPlants(vector<int>& plants, int capacity) {
  int ans = 0;
  int n = plants.size();
  int num = capacity;

  for (int i = 0; i < n; ++i) {
    ans++;
    if (plants[i] == 0){
      continue;
    }
    if (plants[i] <= capacity) {
      capacity -= plants[i];
      plants[i] = 0;
    } else{
      capacity = num;
      ans = ans + i;
      i = 0;
    }
  }
  return ans;
}