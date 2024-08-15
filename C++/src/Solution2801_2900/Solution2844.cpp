//
// Created by windows on 2023/3/2.
//

#include "Solution2844.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int minimumOperations(string num) {
  int n = num.size(), ans = 0;
  for (int i = n - 1; i >= 0; --i) {
    if (num[i] != '0' && num[i] != '5'){
      ans++;
    } else{
      break;
    }
  }
  return ans;
}