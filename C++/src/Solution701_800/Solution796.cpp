//
// Created by windows on 2023/3/2.
//

#include "Solution796.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool rotateString(string s, string goal) {
  if (s.size() != goal.size()) return false;
  goal += goal;
  return goal.find(s) != string::npos;
}