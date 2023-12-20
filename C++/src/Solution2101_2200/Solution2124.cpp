//
// Created by windows on 2023/3/2.
//

#include "Solution2124.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "string"
using namespace std;

bool checkString(string s) {
  int a = -1;
  int b = s.size();
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == 'a'){
      a = i;
    } else{
      b = i;
    }
    if (b < a){
      return false;
    }
  }
  return true;
}
