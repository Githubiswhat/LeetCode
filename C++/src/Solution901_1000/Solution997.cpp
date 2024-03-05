//
// Created by windows on 2023/3/2.
//

#include "Solution997.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {
  vector<int> trusted(n, 0);
  vector<int> beTrusted(n, 0);
  for (const auto &item : trust){
    trusted[item[0] - 1]++;
    beTrusted[item[1] - 1]++;
  }
  vector<int> list;
  for (int i = 0; i < n; i++){
    if (trusted[i] == n - 1 && beTrusted[i] == 0){
        list.push_back(i + 1);
    }
  }
  if (list.size() ==1){
    return list[0];
  }
  return -1;
}
