//
// Created by windows on 2023/3/2.
//

#include "Solution2960.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int countTestedDevices(vector<int>& batteryPercentages) {
  int ans = 0;
  int n = batteryPercentages.size();
  for (int i = 0; i < n; ++i) {
    if (batteryPercentages[i] > 0){
      ans++;
      for (int j = i + 1; j < n; ++j) {
        batteryPercentages[j]--;
      }
    }
  }
  return ans;
}