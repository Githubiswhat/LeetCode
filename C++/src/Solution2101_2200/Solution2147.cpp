//
// Created by windows on 2023/3/2.
//

#include "Solution2147.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "string"
#include "vector"
using namespace std;


int numberOfWays(string corridor) {
  int count = 0;
  vector<pair<int, int>> list;
  int firstIdx = 0;
  for (int i = 0; i < corridor.size(); ++i) {
    if (corridor[i] == 'S'){
      count++;
      if (count % 2 == 1){
        firstIdx = i;
      }else{
        list.push_back(make_pair(firstIdx, i));
      }
    }
  }

  if (count % 2 == 1 || count == 0){
    return 0;
  }

  vector<int> nums;
  for (int i = 1; i < list.size(); ++i) {
    int diff = list[i].first - list[i-1].second;
    nums.push_back(diff);
  }

  int res = 1;
  for (const auto &item : nums){
    res *= item;
  }
  return res;
}
