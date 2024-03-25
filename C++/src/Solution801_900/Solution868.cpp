//
// Created by windows on 2023/3/2.
//

#include "Solution868.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int binaryGap(int n) {
  vector<int> bits;
  for (int i = 0; i < 32; ++i) {
    if ((n >> i) & 1) {
      bits.push_back(i);
    }
  }
  int ans = 0;
  for (int i = 1; i < bits.size(); ++i) {
    ans = max(ans, bits[i] - bits[i - 1]);
  }
  return ans;
}