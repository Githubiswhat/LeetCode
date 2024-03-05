//
// Created by windows on 2023/3/2.
//

#include "Solution819.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string mostCommonWord(string paragraph, vector<string>& banned) {
  vector<string> words;
  string str = "";
  unordered_map<string, int> hash;
  paragraph += " ";
  for (const auto &item : paragraph){
    if (isalpha(item)){
      str += tolower(item);
    }else{
      if (str != ""){
        words.push_back(str);
        hash[str]++;
        str = "";
      }
    }
  }
  unordered_set<string> ban(banned.begin(), banned.end());
  int max = 0;
  string ans = "";
  for (const auto &item : hash){
    if (ban.count(item.first) == 0 && item.second > max){
      max = item.second;
      ans = item.first;
    }
  }
  return ans;
}
