//
// Created by windows on 2023/3/2.
//

#include "Solution941.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool validMountainArray(vector<int>& arr) {
  int left = 0, n = arr.size(), right = n - 1;
  while (left + 1 < n && arr[left] < arr[left + 1]){
      left++;
  }
  while (right - 1 >= 0 && arr[right] < arr[right - 1]){
      right--;
  }
  return left != 0 && right != n -1 && left == right;
}