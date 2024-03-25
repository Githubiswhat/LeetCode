//
// Created by windows on 2023/3/2.
//

#include "Solution1969.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


const int mod = 1'000'000'007;

long long pow(long long x, int p){
  x %= mod;
  long long res = 1;
  while (p--){
    res  = res * x % mod;
    x = x* x % mod;
  }
  return res;
}


int minNonZeroProduct(int p) {
  long long k = (1LL << p) - 1;
  return k % mod * pow(k - 1, p - 1) % mod;
}
