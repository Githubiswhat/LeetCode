//
// Created by windows on 2023/3/2.
//

#include "Solution954.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
#include <algorithm>
#include <unordered_map>
using namespace std;

bool canReorderDoubled(vector<int>& arr) {
  unordered_map<int, int> hashmap;
  sort(arr.begin(), arr.end());
  for (const auto &item : arr){
    hashmap[item]++;
  }
  int count = 0;
  for (const auto &item : arr){
    if(item == 0 && hashmap[0] >= 2){
      hashmap[0] -= 2;
      count++;
    } else{
      if (hashmap.find(item * 2) != hashmap.end() && hashmap[item * 2] > 0){
        hashmap[item * 2]--;
        hashmap[item]--;
      }
    }
  }
  return count >= arr.size() / 2;
}
