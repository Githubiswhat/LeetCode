//
// Created by windows on 2023/3/2.
//

#include "Solution509.h"

int fib(int n) {
  if (n == 0){
    return 0;
  }
  if (n == 1){
    return 1;
  }
  return fib(n - 1) + fib(n - 2);
}
