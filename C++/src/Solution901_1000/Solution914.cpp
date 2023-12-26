//
// Created by windows on 2023/3/2.
//

#include "Solution914.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int gcd(int a, int b){
  return  b == 0 ? a : gcd(b, a % b);
}

bool hasGroupsSizeX(vector<int>& deck) {
  unordered_map<int, int> count;
  for (const auto &item : deck){
    count[item]++;
  }
  int ans = 0;
  for (const auto &item : count){
    ans = gcd(ans, item.second);
  }

  return ans >= 2;
}