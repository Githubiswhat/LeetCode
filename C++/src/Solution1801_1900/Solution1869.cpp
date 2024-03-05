//
// Created by windows on 2023/3/2.
//

#include "Solution1869.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool checkZeroOnes(string s) {
  auto countMaxLen = [&](string& s, char c ) -> int{
    int n = s.size();
    int maxVal = 0;
    for (int i = 0; i < n; ++i) {
      if (s[i] == c){
        int count = 1;
        for (int j = i + 1; j < n; ++j) {
          if (s[j] == s[j - 1]){
            count++;
          } else{
            break;
          }
        }
        maxVal = max(maxVal, count);
      }
    }
    return maxVal;
  };

  return countMaxLen(s, '1') >  countMaxLen(s, '0');
}
