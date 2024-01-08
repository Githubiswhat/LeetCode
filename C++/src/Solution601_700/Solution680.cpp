//
// Created by windows on 2023/3/2.
//

#include "Solution680.h"
#include <cstring>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

bool validPalindrome(string s, int left, int right) {
  while (left < right){
    if (s[left] != s[right]){
      return false;
    }
    left++;
    right--;
  }
  return true;
}

bool validPalindrome(string s) {
  int n = s.size(), left = 0, right = n - 1;
  while (left < right){
    if (s[left] == s[right]){
      left++;
      right--;
    } else{
      return validPalindrome(s, left + 1, right) || validPalindrome(s, left, right - 1);
    }
  }
  return true;
}