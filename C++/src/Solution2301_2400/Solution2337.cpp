//
// Created by windows on 2023/3/2.
//

#include "Solution2337.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "string"
using namespace std;

bool canChange(string start, string target) {
  int p1 = 0, p2 = 0, n = start.size();
  while (p1 != n && p2 != n){
    while (p1 < n && start[p1] == '_') p1++;
    while (p2 < n && target[p2] == '_') p2++;
    if (p1 < n && p2 < n){
      if (start[p1] != target[p2]) return false;
      if (start[p1] == 'L' && p1 < p2) return false;
      if (start[p1] == 'R' && p1 > p2) return false;
      p1++;
      p2++;
    }
  }
  while (p1 < n){
    if (start[p1] != '_')return false;
    p1++;
  }
  while (p2 < n){
    if (target[p2] != '_')return false;
    p2++;
  }
  return true;
}
