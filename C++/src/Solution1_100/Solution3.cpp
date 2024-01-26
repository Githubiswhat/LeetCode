//
// Created by windows on 2023/3/2.
//

#include "Solution3.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_set>

//int Solution::lengthOfLongestSubstring(string s) {
//    unordered_set<char> set;
//    int n = s.length();
//    int left = 0;
//    int right = 0;
//    int max_val = 0;
//    while (right < n) {
//        if (!set.count(s[right])){
//            set.insert(s[right]);
//            right++;
//            max_val = max(max_val, right - left);
//        }else{
//            while (set.count(s[right])){
//                set.erase(s[left]);
//                left++;
//            }
//            set.insert(s[right]);
//            right++;
//            max_val = max(max_val, right - left);
//        }
//    }
//    return max_val;
//}

int lengthOfLongestSubstring(string s) {
    int n = s.size();
    int left = -1, right = 0;
    int maxLen = 0;
    unordered_set<char> set;
    while (left < right){
      while (left < right && set.count(s[right]) != 0){
        left++;
        set.erase(s[left]);
      }
      set.emplace(s[right]);
      right++;
      maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}



















