//
// Created by windows on 2023/3/2.
//

#include "Solution557.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

#include <string>
using namespace std;

string reverseWords(string s) {
  int start = 0;
  string result = "";
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == ' '){
      string str = s.substr(start, i - start);
      for (int j = str.size() - 1; j >= 0 ; --j) {
        result += str[j];
      }
      result += ' ';
      start = i + 1;
    }
  }

  string str = s.substr(start, s.size());
  for (int j = str.size() - 1; j >= 0 ; --j) {
    result += str[j];
  }
  return result;
}
