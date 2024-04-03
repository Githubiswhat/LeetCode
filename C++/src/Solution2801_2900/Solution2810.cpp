//
// Created by windows on 2023/3/2.
//

#include "Solution2810.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string finalString(string s) {
  string res = "";
  for (const auto &item : s){
    if (item == 'i'){
      std::reverse(res.begin(), res.end());
    }else{
      res.push_back(item);
    }
  }
  return res;
}