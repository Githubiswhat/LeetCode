//
// Created by windows on 2023/3/2.
//

#include "Solution1957.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string makeFancyString(string s) {
  int n = s.size();
  string res = "";
  int count = 1;
  char preChar = 'A';
  for (int i = 0; i < n; ++i) {
    if (s[i] == preChar){
      count++;
    }else{
      count = 1;
    }
    preChar = s[i];
    if (count >= 3){
      continue;
    }
    res += s[i];
  }
  return res;
}
