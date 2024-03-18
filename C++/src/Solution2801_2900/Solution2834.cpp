//
// Created by windows on 2023/3/2.
//

//#include "Solution2834.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

//int minimumPossibleSum(int n, int target) {
//  int mod = 1e9 + 7;
//  int index = 1;
//  int count = 0;
//  if (n > target / 2){
//    long long ans = ((1 + target / 2) * (target / 2) / 2) % mod;
//    int sub = n - target / 2;
//    long long num = (target + target + sub) * sub / 2;
//    return  (ans + num) % mod;
//  }else {
//    return ((1 + n) * n / 2) % mod ;
//  }
//}


int minimumPossibleSum(int n, int k) {
  long long m = min(k / 2, n);
  return (m * (m + 1) + (n - m - 1 + k * 2) * (n - m)) / 2 % 1'000'000'007;
}


int main() {
  int n = 2;
  int target = 10;
  int result = minimumPossibleSum(n, target);
  std::cout << "For n = " << n << " and target = " << target << ", minimum possible sum is: " << result << std::endl;
  return 0;
}

