//
// Created by windows on 2023/3/2.
//

#include "Solution9.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool isPalindrome(int x) {
  if (x < 0){
    return false;
  }
  vector<int> l;
  while (x > 0){
    l.push_back(x % 10);
    x /= 10;
  }
  for (int i = 0; i < l.size() / 2; ++i) {
     if (l[i] != l[l.size() - 1 - i]){
       return false;
     }
  }
  return true;
}