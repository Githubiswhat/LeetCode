//
// Created by windows on 2023/3/2.
//

#include "Solution466.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


//int getMaxRepetitions(string s1, int n1, string s2, int n2) {
////  string string1 = "";
////  for (int i = 0; i < n1; ++i) {
////    string1 += s1;
////  }
////
////  string  string2 = "";
////  for (int i = 0; i < n2; ++i) {
////    string2 += s2;
////  }
//
//  int m = 0;
//  int p1 = 0;
//  int p2 = 0;
//  while (p1 < s1.size()){
//    if (p2 == s2.size()){
//      p2 = 0;
//      m++;
//    }
//
//    if (s1[p1] == s2[p2]){
//      p2++;
//    }
//    p1++;
//  }
//
//  if (p2 == s2.size()){
//    m++;
//  }
//
//  return (m + p2 / s2.size() * 1.0) * n1 / n2;
//}

int getMaxRepetitions(string s1, int n1, string s2, int n2) {
  unordered_map<int, pair<int, int>> hash;
  int ans = 0;
  int len1 = s1.size();
  int len2 = s2.size();
  int index1 = 0;
  int index2 = 0;
  while (index1 / len1 < n1)
  {
    if (index1 % len1 == len1 - 1)
    {
      if (hash.count(index2%len2))
      {
        int cycleLen = index1 - hash[index2%len2].first;
        int cycNum2 = (index2 - hash[index2%len2].second) / len2;//每个循环有几个s2
        int cycNum1 = cycleLen / len1;//每个循环有几个S1
        int cycle = (n1 - 1 - index1 / len1) / cycNum1;
        ans += cycle * cycNum2;
        index1 += cycle * cycleLen;
      }
      else
      {
        hash[index2%len2].first = index1;
        hash[index2%len2].second = index2;
      }
    }

    if (s1[index1%len1] == s2[index2%len2])
    {
      if (index2%len2 == len2 - 1)
        ans++;
      index2++;
    }
    index1++;
  }

  return ans / n2;
}

