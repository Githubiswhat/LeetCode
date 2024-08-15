//
// Created by windows on 2023/3/2.
//

#include "Solution1953.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int getWinner(vector<int>& arr, int k) {
  int max = arr[0], win = 0;
  int n = arr.size();
  for (int i = 1; i < n && win < k; ++i) {
    if (arr[i] > max){
      max = arr[i];
      win = 0;
    }
    win++;
  }
  return max;
}