//
// Created by windows on 2023/3/2.
//

#include "Solution509.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int fib(int n) {
  if (n == 0){
    return 0;
  }
  if (n == 1){
    return 1;
  }
  return fib(n - 1) + fib(n - 2);
}
