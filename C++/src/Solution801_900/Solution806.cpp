//
// Created by windows on 2023/3/2.
//

#include "Solution806.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> numberOfLines(vector<int>& widths, string s) {
  int line = 1;
  int current = 0;
  for (const auto &item : s){
    int num = current + widths[item - 'a'];
    if (num > 100){
      current = widths[item - 'a'];
      line++;
    }else{
      current = num;
    }
  }
  return {line, current};
}
