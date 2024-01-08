//
// Created by windows on 2023/3/2.
//

#include "Solution917.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string reverseOnlyLetters(string s) {
  int left = 0, right = s.size() - 1;
  while (left < right){
    while (left < right && !isalpha(s[left])) ++left;
    while (left < right && !isalpha(s[right])) --right;
    swap(s[left++], s[right--]);
  }
  return s;
}