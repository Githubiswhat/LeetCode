//
// Created by windows on 2023/3/2.
//

#include "Solution828.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;


int uniqueLetterString(string s) {
    map<char, vector<int>> hashmap;
    for (int i = 0; i < s.size(); i++) {
      hashmap[s[i]].emplace_back(i);
    }
    int result = 0;
    for (const auto &item : hashmap){
      int head = -1;
      int tail = -1;
      for (int i = 0; i < item.second.size(); ++i) {
        if (i != item.second.size() - 1){
          tail = item.second[i + 1];
        }else{
          tail = s.size();
        }
        result += (item.second[i] - head) * (tail - item.second[i]);
        head = item.second[i];
      }
    }

    return result;
}
