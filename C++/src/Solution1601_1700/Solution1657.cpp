//
// Created by windows on 2023/3/2.
//

#include "Solution1657.h"

#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;

bool closeStrings(string word1, string word2) {
  map<char, int> map1;
  map<char, int> map2;

  for (const auto &item : word1){
    map1[item]++;
  }

  for (const auto &item : word2){
    map2[item]++;
  }

  vector<int> list1;
  for (const auto &item : map1){
    list1.push_back(item.second);
  }
  sort(list1.begin(), list1.end());


  vector<int> list2;
  for (const auto &item : map2){
    list2.push_back(item.second);
  }
  sort(list2.begin(), list2.end());

  for (int i = 0; i < list1.size(); ++i) {
    if (list1[i] != list2[i]){
      return false;
    }
  }

  for (const auto &item : word2){
    if (map1.find(item) != map1.end()){
      return false;
    }
  }
  return true;
}
