//
// Created by windows on 2023/3/2.
//

#include "Solution2645.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int addMinimum(string word) {
  int count = 0;
  char ch = 'a';
  int n = word.size();
  for (int i = 0; i < n; ++i) {
    if (word[i] != ch){
      count++;
      i--;
    }
    ch++;
    if (ch =='d'){
      ch = 'a';
    }
  }
  if (word[n - 1] == 'a'){
    count += 2;
  } else if (word[n - 1] == 'b'){
    count += 1;
  }
  return count;
}