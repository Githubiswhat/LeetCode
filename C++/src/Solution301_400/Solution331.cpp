//
// Created by windows on 2023/3/2.
//

#include "Solution331.h"
#include <functional>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

bool isValidSerialization(string preorder) {
  stringstream ss;
  string s;
  vector<string> stack;
  while (getline(ss, s, ',')){
    stack.push_back(s);
    while (stack.size() >= 3 && stack[stack.size() - 1] == "#" && stack[stack.size() - 2] == "#"
           && stack[stack.size() - 3] != "#"){
      stack.pop_back();
      stack.pop_back();
      stack.pop_back();
      stack.push_back("#");
    }
  }
  return stack.size() == 1 && stack[0] == "#";
}