//
// Created by windows on 2023/3/2.
//

#include "Solution696.h"
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


int countBinarySubstrings(string s) {
  int i = 0, n = s.size(), res = 0, last = 0;
  while (i < n){
    char c = s[i];
    int count = 0;
    while (i < n && s[i] == c){
      count++;
      i++;
    }
    res += min(last, count);
    last = count;
  }
  return res;
}