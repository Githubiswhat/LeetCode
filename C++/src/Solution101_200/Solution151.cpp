//
// Created by windows on 2023/3/2.
//

#include "Solution151.h"
#include "string"
using namespace std;

string reverseWords(string s) {
  string res = "";
  string temp = "";
  s += " ";
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == ' ') {
      if (temp.size() > 0) {
        res = temp + " " + res;
        temp = "";
      }
    } else{
      temp += s[i];
    }
  }
  return res.substr(0, res.size() - 1);
}
