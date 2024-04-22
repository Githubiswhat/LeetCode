//
// Created by windows on 2023/3/2.
//

#include "Solution1702.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string maximumBinaryString(string binary) {
  int i = binary.find('0');
  if (i < 0){
    return binary;
  }

  int zeros = count(binary.begin(), binary.end(), '0');
  int n = binary.size();
  string s(n, '1');
  s[i + zeros - 1] = '0';
  return s;
}