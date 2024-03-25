//
// Created by windows on 2024/3/18.
//

//#include "Solution1705.h"
#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;


//vector<string> findLongestSubarray(vector<string> &array) {
//  int n = array.size(), s[n + 1]; // 前缀和
//  s[0] = 0;
//  for (int i = 0; i < n; ++i)
//    s[i + 1] = s[i] + (array[i][0] >> 6 & 1) * 2 - 1;
//
//  int begin = 0, end = 0; // 符合要求的子数组 [begin,end)
//  unordered_map<int, int> first;
//  for (int i = 0; i <= n; ++i) {
//    auto it = first.find(s[i]);
//    if (it == first.end()) // 首次遇到 s[i]
//      first[s[i]] = i;
//    else if (i - it->second > end - begin) // 更长的子数组
//      begin = it->second, end = i;
//  }
//  return {array.begin() + begin, array.begin() + end};
//}

vector<string> findLongestSubarray(vector<string>& array) {
  int n = array.size(), countA = 0, count0 = 0;
  unordered_map<int, int> hash;

  int left = 0, right = 0, maxLen = 0;
  for (int i = 0; i < n; ++i) {
    if (isdigit(array[i][0])) {
      count0++;
    } else {
      countA++;
    }
    int diff = countA - count0;
    if (diff == 0) {
      if (i + 1 > maxLen) {
        left = 0;
        right = i + 1;
        maxLen = i + 1;
      }
    } else {
      if (hash.count(diff)) {
        int len = i - hash[diff];
        if (len > maxLen) {
          left = hash[diff] + 1;
          right = i + 1;
          maxLen = len;
        }
      } else {
        hash[diff] = i;
      }
    }
  }
  return vector<string>(array.begin() + left, array.begin() + right);
}


int main() {
  vector<string> array = {"A","A"};
  vector<string> longestSubarray = findLongestSubarray(array);

  for (const auto& str : longestSubarray) {
    cout << str << " ";
  }
  cout << endl;

  return 0;
}