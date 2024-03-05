//
// Created by windows on 2023/3/1.
//

#include "Solution228.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "unordered_map"

//vector<string> Solution228::summaryRanges(vector<int> &nums) {
//    vector<string> res;
//    int i = 0;
//    int n = nums.size();
//    while (i < n){
//        int low = i;
//        i++;
//        while (i < n && nums[i] == nums[i - 1] + 1){
//            i++;
//        }
//        int high = i - 1;
//        string temp = to_string(nums[low]);
//        if (low < high){
//            temp.append("->");
//            temp.append(to_string(nums[high]));
//        }
//        res.push_back(temp);
//    }
//    return res;
//}


int rearrangeCharacters(string s, string target) {
  int charCount[26];
  for (int i = 0; i < 26; ++i) {
    charCount[i] = 0;
  }
  for (const auto &item : s){
    charCount[item - 'a']++;
  }
  unordered_map<char, int> hashmap;
  for (const auto &item : target){
    hashmap[item]++;
  }

  int minVal = s.size();
  for (const auto &item : hashmap){
    minVal = min(minVal, charCount[item.first - 'a'] / item.second);
  }
  return minVal;
}
