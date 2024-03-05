//
// Created by windows on 2023/3/2.
//

#include "Solution884.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<string> uncommonFromSentences(string s1, string s2) {
  unordered_map<string, int> cnt;
  s1 += ' ';
  s2 += ' ';
  auto insert = [&](string s){
    int last = 0;
    for (int i = 0; i < s1.size(); ++i) {
      if (s1[i] == ' '){
        cnt[s1.substr(last, i - last)]++;
        last = i + 1;
      }
    }
  };
  insert(s1);
  insert(s2);

  vector<string> res;
  for (const auto &item : cnt){
    if (item.second == 1){
      res.push_back(item.first);
    }
  }

  return res;
}
