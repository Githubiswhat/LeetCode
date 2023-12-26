//
// Created by windows on 2023/3/2.
//

#include "Solution944.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int minDeletionSize(vector<string>& strs) {
  int n = strs[0].size();

  int count = 0;
  for (int i = 0; i < n; ++i) {
    char c = strs[0][i];
    for (const auto &item : strs){
      if (item[i] < c){
        count++;
        break;
      }
      c = item[i];
    }
  }
  return count;
}