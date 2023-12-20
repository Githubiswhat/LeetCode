//
// Created by windows on 2023/12/20.
//

#include "Solution5.h"
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
using namespace std;

int maxProduct(vector<string> &words) {
  int res = 0;
  for (int i = 0; i < words.size(); ++i) {
    unordered_set<char> set;
    for (const auto &item : words[i]) {
      set.insert(item);
    }
    for (int j = i + 1; j < words.size(); ++j) {
      bool flag = false;
      for (const auto &item : words[j]) {
        if (set.count(item) != 0) {
          flag = true;
          break;
        }
      }
      if (!flag) {
        int num = words[i].size() * words[j].size();
        res = max(res, num);
      }
    }
  }
  return res;
}
