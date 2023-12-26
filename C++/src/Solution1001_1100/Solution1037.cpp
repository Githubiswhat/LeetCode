//
// Created by windows on 2023/3/2.
//

#include "Solution1037.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool isBoomerang(vector<vector<int>>& points) {
  bool isBoomerang(vector<vector<int>>& points) {
    vector<int> v1 = {points[1][0] - points[0][0], points[1][1] - points[0][1]};
    vector<int> v2 = {points[2][0] - points[0][0], points[2][1] - points[0][1]};
    return v1[0] * v2[1] - v1[1] * v2[0] != 0;
  }
}