//
// Created by windows on 2023/3/2.
//

#include "Solution6.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <vector>

//string Solution::convert(string s, int numRows) {
//    if (numRows == 1){
//        return s;
//    }
//    int n = s.length();
//    string strs[numRows];
//    for (int i = 0; i < numRows; ++i) {
//        strs[i] = "";
//    }
//    int count = 0;
//    int num = 1;
//    for (int i = 0; i < n ; ++i) {
//        strs[count] += s[i];
//        if (count == numRows - 1) {
//            num = -1;
//        }else if (count == 0) {
//            num = 1;
//        }
//        count += num;
//    }
//    string res = "";
//    for (int i = 0; i < numRows; ++i) {
//        res += strs[i];
//    }
//    return res;
//}




























using namespace std;


string convert(string s, int numRows) {
  if (numRows == 1){
    return s;
  }
    vector<vector<char>> list(numRows);
    for (int i = 0; i < numRows; ++i){
      vector<char> str;
      list.push_back(str);
    }
    int index = 0;
    int flag = 1;
    for (const auto &item : s){
      list[index].push_back(item);
      if (index == numRows - 1){
        flag = -1;
      } else if (index == 0){
        flag = 1;
      }
      index += flag;
    }
    string result;
    for (const auto &items : list){
      for (const auto &item : items){
        result += item;
      }
    }
    return result;
}
