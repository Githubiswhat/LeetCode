//
// Created by windows on 2023/3/2.
//

#include "Solution929.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int numUniqueEmails(vector<string>& emails) {
  unordered_set<string> set;
  for (const auto &item : emails){
    string str = "";
    bool skip = false;
    for (const auto &c : item){
      if (c == '.'){
        continue;
      }else if (c == '+'){
        skip = true;
      } else if (c == '@'){
        str += item.substr(item.find('@'));
        break;
      }
      if (skip){
        continue;
      }
      str += c;
    }
    set.emplace(str);
  }
  return set.size();
}