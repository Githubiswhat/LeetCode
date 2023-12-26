//
// Created by windows on 2023/3/2.
//

#include "Solution1013.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool canThreePartsEqualSum(vector<int>& arr) {
  int n = arr.size();
  int sum = 0;
  for (const auto &item : arr){
    sum += item;
  }
  if (sum % 3 != 0){
    return false;
  }
  int left = 0;
  int num = 0;
  int count = 0;
  for (const auto &item : arr){
    num += item;
    left++;
    if (num == sum / 3){
      count++;
      num = 0;
      if (count == 2){
        break;
      }
    }
  }
  return count == 2;
}