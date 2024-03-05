//
// Created by windows on 2023/3/2.
//

#include "Solution1051.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


int heightChecker(vector<int>& heights) {
  vector<int> res(heights);
  sort(heights.begin(), heights.end());
  int count = 0;
  for (int i = 0; i < heights.size(); ++i) {
    if (res[i] != heights[i]){
      count++;
    }
  }
  return count;
}
