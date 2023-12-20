//
// Created by windows on 2023/3/2.
//

#include "Solution2697.h"
#include "string"
using namespace std;

string makeSmallestPalindrome(string s) {
  for (int left = 0, right = s.size() - 1; left < right ; ++left, --right) {
    if (s[left] != s[right]){
      if (s[left] < s[right]){
        s[right] = s[left];
      } else{
        s[left] = s[right];
      }
    }
  }
  return s;
}
