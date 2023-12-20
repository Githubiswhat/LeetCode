//
// Created by windows on 2023/3/2.
//

#include "Solution2274.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
#include <algorithm>
using namespace std;
int maxConsecutive(int bottom, int top, vector<int>& special) {
  int n = special.size();
  sort(special.begin(), special.end());
  int maxVal = max(special[0] - bottom, top - special[n - 1]);
  for (int i = 1; i < n; ++i) {
    maxVal = max(special[i] - special[i - 1] - 1, maxVal);
  }
  return maxVal;
}
