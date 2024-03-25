//
// Created by windows on 2023/3/2.
//

#include "Solution459.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool repeatedSubstringPattern(string s) {
    int n = s.size();
    for (int i = 1; i <= n / 2; ++i) {
      if(n % i != 0){
        continue;
      }
      string sub = s.substr(0, i);
      string str = "";
      for (int j = 1; j <= n / i; ++j) {
        str += sub;
      }
      if (str ==s){
        return true;
      }
    }
    return false;
}
