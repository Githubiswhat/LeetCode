//
// Created by windows on 2023/3/2.
//

#include "Solution989.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> addToArrayForm(vector<int>& num, int k) {
  vector<int> res;
  int n = num.size();
  int carry = 0;
  for (int i = n - 1; i >= 0; --i) {
    int number = num[i] + k % 10  + carry;
    carry = number / 10;
    res.push_back(number % 10);
    k /= 10;
  }
  while (k){
    int number = k % 10  + carry;
    carry = number / 10;
    res.push_back(number % 10);
    k /= 10;
  }
  if (carry) res.push_back(carry);
  reverse(res.begin(), res.end());
  return res;
}
