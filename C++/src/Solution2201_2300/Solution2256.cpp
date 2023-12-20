//
// Created by windows on 2023/3/2.
//

#include "Solution2256.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "unordered_map"
#include "vector"
#include <algorithm>
using namespace std;


long long minCost(vector<int>& basket1, vector<int>& basket2) {
  unordered_map<int, int> hashmap;
  unordered_map<int, int> hashmap1;
  int minVal = INT_MAX;
  for (const auto &item : basket1){
    hashmap[item]++;
    hashmap1[item]++;
    minVal = min(minVal, item);
  }
  for (const auto &item : basket2){
    hashmap[item]++;
    minVal = min(minVal, item);
  }
  for (const auto &item : hashmap){
    if (item.second % 2 == 1){
      return -1;
    }
  }

  vector<int> list;
  for (const auto &item : hashmap){
    if (item.second / 2 != hashmap1[item.first]){
      for (int i = 0; i < abs(item.second / 2 - hashmap1[item.first]); ++i) {
        list.push_back(item.first);
      }
    }
  }

  sort(list.begin(), list.end());
  int res = 0;
  for (int i = 0; i < list.size() / 2; ++i) {
    res += min(list[i], minVal * 2);
  }
  return res;
}
