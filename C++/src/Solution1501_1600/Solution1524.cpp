//
// Created by windows on 2023/3/2.
//

#include "Solution1524.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int numOfSubarrays(vector<int>& arr) {
  int n = arr.size();
  int res = 0, odd = 0, even = 1;
  long long sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += arr[i];
    if (sum % 2 == 0) {
      even++;
      res = (res + odd) % 1000000007;
    } else {
      odd++;
      res = (res + even) % 1000000007;
    }
  }
  return res;
}


