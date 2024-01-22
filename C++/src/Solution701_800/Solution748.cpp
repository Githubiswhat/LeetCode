//
// Created by windows on 2023/3/2.
//

#include "Solution748.h"
#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


string shortestCompletingWord(string licensePlate, vector<string>& words) {
  int chars[26];
  memset(chars, 0, sizeof(chars));
  for (const auto &item : licensePlate){
    if (isalpha(item)){
      if (isupper(item)){
        chars[item - 'A']++;
      }else{
        chars[item - 'a']++;
      }
    }
  }
  map<int, vector<string>> hash;
  for (const auto &str : words){
    int charsTemp[26];
    memset(charsTemp, 0, sizeof(charsTemp));
    for (const auto &item : str){
      charsTemp[item - 'a']++;
    }
    bool flag = true;
    for (int i = 0; i < 26; ++i) {
      if (chars[i] > charsTemp[i]){
        flag = false;
        break;
      }
    }
    if (flag) {
      hash[str.size()].push_back(str);
    }
  }
  return hash.begin()++->second[0];
}