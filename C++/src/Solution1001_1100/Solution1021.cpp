//
// Created by windows on 2023/3/2.
//

#include "Solution1021.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string removeOuterParentheses(string s) {
    string res;
    int left = 0;
    int right = 0;
    int begin = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(') {
        left++;
      }else{
        right++;
      }
      if (left == right){
        res.append(s.substr(begin + 1, i - begin - 1));
        begin = i + 1;
      }
    }
    return res;
}