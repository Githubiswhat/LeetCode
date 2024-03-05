//
// Created by windows on 2023/3/2.
//

#include "Solution670.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int maximumSwap(int num) {
  string str = to_string(num);
  int n = str.size();
  for (int i = 0; i < n; ++i) {
    int maxVal = str[i];
    int maxIndex = i;
    for (int j = n - 1; j > i; --j) {
      if (str[j] > maxVal){
        maxVal = str[j];
        maxIndex = j;
      }
    }
    if (maxVal > str[i]){
      swap(str[i], str[maxIndex]);
      return stoi(str);
    }
  }
  return num;
}
