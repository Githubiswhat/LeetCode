//
// Created by windows on 2023/3/2.
//

#include "Solution496.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>

#include "stack"


//vector<int> Solution496::nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
//    int m = nums1.size();
//    int n = nums2.size();
//    unordered_map<int, int> hashtable;
//    for (int i = 0; i < nums2.size(); ++i) {
//        hashtable[nums2[i]] = i;
//    }
//    vector<int> res(m, -1);
//    for (int i = 0; i < m; ++i) {
//        for (int j = hashtable[nums1[i]]; j < n; ++j) {
//            if (nums1[i] < nums2[j]){
//                res[i] = nums2[j];
//                break;
//            }
//        }
//    }
//    return res;
//}


vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
  stack<int> stack;
  int n = nums2.size();
  vector<int> nums3(n, -1);
  for (int i = 0; i < n; ++i) {
    while (!stack.empty() && nums2[stack.top()] < nums2[i]){
      nums2[stack.top()] = nums2[i];
      stack.pop();
    }
    stack.push(i);
  }

  for (int i = 0; i < nums1.size(); ++i) {
    for (int j = 0; j < n; ++j) {
      if (nums1[i] == nums2[i]){
        nums1[i] = nums3[i];
        break;
      }
    }
  }
  return nums1;
}










