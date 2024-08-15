//
// Created by windows on 2023/3/2.
//

#include "Solution2734.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


string smallestString(string s) {
  int i = 0, n = s.size();
  string sa(n, 'a');
  if (s == sa){
    s[n - 1] = 'z';
    return s;
  }
  while (i < n && s[i] == 'a'){
    i++;
  }
  while (i < n && s[i] != 'a'){
    s[i] = s[i] - 1;
    i++;
  }
  return s;
}