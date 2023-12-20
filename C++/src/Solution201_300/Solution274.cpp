//
// Created by windows on 2023/3/2.
//

#include "Solution274.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
#include <algorithm>
using namespace std;


int hIndex(vector<int>& citations) {
  sort(citations.begin(), citations.end());
  int maxVal = 0;
  for (int i = 0; i < citations.size(); ++i) {
    if (citations[i] >= citations.size() - i) {
      int num = citations.size() - i;
      maxVal = max(maxVal, num);
    }
  }
  return maxVal;
}
