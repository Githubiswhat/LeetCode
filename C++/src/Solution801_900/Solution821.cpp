//
// Created by windows on 2023/3/2.
//

#include "Solution821.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


vector<int> shortestToChar(string s, char c) {
  int n = s.size();
  vector<int> ans(n, 0);
  for (int i = 0; i < n; ++i) {
    if (s[i] == c){
      continue;
    }
    int left = i - 1, right = i + 1;
    while (left >= 0 && right < n){
      if(s[left] == c) {
        ans[i] = i - left;
        break;
      }else if (s[right] == c){
        ans[i] = right - i;
        break;
      }
      left--;
      right++;
    }
    if (ans[i] == 0){
      while (left >= 0){
        if(s[left] == c){
          ans[i] = i - left;
          break;
        }
        left--;
      }
      while (right < n){
        if (s[right] == c){
          ans[i] = right - i;
          break;
        }
        right++;
      }
    }
  }
  return ans;
}