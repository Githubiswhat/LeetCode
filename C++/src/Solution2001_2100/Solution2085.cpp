//
// Created by windows on 2023/3/2.
//

#include "Solution2085.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "string"
#include "vector"
#include "unordered_map"
using namespace std;

int countWords(vector<string>& words1, vector<string>& words2) {
  unordered_map<string, int> map1;
  unordered_map<string, int> map2;
  for (const auto &item : words1){
    map1[item]++;
  }
  for (const auto &item : words2){
    map2[item]++;
  }
  int count = 0;
  for (const auto &item : map1){
    if (item.second == 1 && map2[item.first] == 1){
      count++;
    }
  }
  return count;
}
