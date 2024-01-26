//
// Created by windows on 2023/3/2.
//

#include "Solution424.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


int characterReplacement(string s, int k) {
  vector<int> num(26);
  int n = s.length();
  int maxn = 0;
  int left = 0, right = 0;
  while (right < n) {
    num[s[right] - 'A']++;
    maxn = max(maxn, num[s[right] - 'A']);
    if (right - left + 1 - maxn > k) {
      num[s[left] - 'A']--;
      left++;
    }
    right++;
  }
  return right - left;
}