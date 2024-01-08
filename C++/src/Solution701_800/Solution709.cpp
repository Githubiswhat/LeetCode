//
// Created by windows on 2023/3/2.
//

#include "Solution709.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string toLowerCase(string s) {
  for (auto &item : s){
    item = tolower(item);
  }
  return s;
}