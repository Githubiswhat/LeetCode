//
// Created by windows on 2023/3/2.
//

#include "Solution2904.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


string shortestBeautifulSubstring(string s, int k) {
  if (count(s.begin(), s.end(), '1') < k){
    return "";
  }
  int left = 0, right = 0, n = s.size(), count = 0;
  string ans = s;
  while (right < n){
    count += s[right] - '0';
    while (count > k || s[left]== '0') {
      count -=  s[left++] - '0';
    }
    if (count == k){
      string str = s.substr(left, right - left + 1);
      if (str.size() < ans.size() || str.size() == ans.size() && str < ans){
        ans = str;
      }
    }
    right++;
  }
  return ans;
}
