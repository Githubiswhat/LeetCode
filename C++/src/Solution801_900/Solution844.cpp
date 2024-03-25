//
// Created by windows on 2023/3/2.
//

#include "Solution844.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool backspaceCompare(string s, string t) {
  vector<char> sv;
  vector<char> tv;
  for (const auto &c : s){
    if (c == '#'){
      if (sv.size() > 0)
        sv.pop_back();
    }else{
      sv.push_back(c);
    }
  }

  for (const auto &c : t){
    if (c == '#'){
      if (tv.size() > 0)
        tv.pop_back();
    }else{
      tv.push_back(c);
    }
  }

  if (sv.size() != tv.size()){
    return false;
  }
  for (int i = 0; i < sv.size(); ++i) {
    if (sv[i] != tv[i])
      return false;
  }
  return true;
}