//
// Created by windows on 2023/3/2.
//

#include "Solution2575.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> divisibilityArray(string word, int m) {
  long long num = 0;
  int n = word.size();
  vector<int> ans(n);
  for (int i = 0; i < n; ++i) {
    num = (num * 10 + word[i] - '0') % m;
    if (num == 0){
      ans[i] = 1;
    }
  }
  return ans;
}