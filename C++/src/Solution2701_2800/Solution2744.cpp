//
// Created by windows on 2023/3/2.
//

#include "Solution2744.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int maximumNumberOfStringPairs(vector<string>& words) {
  int n = words.size();
  int count = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (words[i][0] == words[j][1] && words[i][1] == words[j][0]){
        count++;
        break;
      }
    }
  }
  return count;
}
