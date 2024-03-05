//
// Created by windows on 2023/3/2.
//

#include "Solution2828.h"
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

bool isAcronym(vector<string>& words, string s) {
  if (words.size() != s.size()) return false;
  for (int i = 0; i < words.size(); ++i) {
    if (words[i][0] != s[i]){
      return false;
    }
  }
  return true;
}
