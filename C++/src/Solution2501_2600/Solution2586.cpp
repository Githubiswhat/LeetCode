//
// Created by windows on 2023/3/2.
//

#include "Solution2586.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "string"
#include "vector"
using namespace std;

bool isVowel(char c){
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int vowelStrings(vector<string>& words, int left, int right) {
  int count = 0;
  for (int i = left; i <= right; ++i) {
    string str = words[i];
    if (isVowel(str[0]) && isVowel(str[str.size() - 1])){
      count++;
    }
  }
  return count;
}
