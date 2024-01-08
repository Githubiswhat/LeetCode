//
// Created by windows on 2023/3/2.
//

#include "Solution521.h"
#include <cstring>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int findLUSlength(string a, string b) {
  return a != b ? (a.length() > b.length() ? a.length() : b.length()) : -1;
}