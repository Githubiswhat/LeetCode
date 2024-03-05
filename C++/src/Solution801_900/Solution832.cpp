//
// Created by windows on 2023/3/2.
//

#include "Solution832.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
  for (auto &item : image){
    reverse(item.begin(),item.end());
  }
  for (auto &rol : image){
    for (auto &item : rol){
       item = item ^ 1;
    }
  }
  return image;
}
