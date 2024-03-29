//
// Created by windows on 2023/3/2.
//

#include "Solution1997.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int firstDayBeenInAllRooms(vector<int>& nextVisit) {
  const int MOD = 1'000'000'007;
  int n = nextVisit.size();
  vector<long> s(n);
  for (int i = 0; i < n - 1; i++) {
    int j = nextVisit[i];
    s[i + 1] = (s[i] * 2 - s[j] + 2 + MOD) % MOD; // + MOD 避免算出负数
  }
  return s[n - 1];
}