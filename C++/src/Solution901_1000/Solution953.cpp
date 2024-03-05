//
// Created by windows on 2023/3/2.
//

#include "Solution953.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool compare(string& basicString, string& basicString1, int order[]) {
  int l1 = basicString.size(), l2 = basicString1.size();
  int len = l1 < l2 ? l1 : l2;
  for (int i = 0; i < len; ++i) {
    if (order[basicString[i]- 'a'] < order[basicString1[i] - 'a']){
      return true;
    }
    if (order[basicString[i]- 'a'] > order[basicString1[i] - 'a']){
      return false;
    }
  }
  return l1 < l2;
}

bool isAlienSorted(vector<string>& words, string order) {
  int n = words.size();
  int chars[26];
  for (int i = 0; i < order.size(); ++i) {
    chars[order[i] - 'a'] = i;
  }

  for (int i = 0; i < n - 1; ++i) {
    if (!compare(words[i], words[i + 1], chars)){
      return false;
    }
  }
  return true;
}

