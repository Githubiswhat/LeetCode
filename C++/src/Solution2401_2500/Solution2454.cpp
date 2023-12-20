//
// Created by windows on 2023/3/2.
//

#include "Solution2454.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
#include <algorithm>
#include <stack>
using namespace std;

//vector<int> secondGreaterElement(vector<int>& nums) {
//  int n = nums.size();
//  vector<int> res(n, -1);
//  for (int i = 0; i < n - 2; ++i) {
//    int k = 2;
//    for (int j = i + 1; j < n; ++j) {
//      if (nums[j] > nums[i]){
//        k--;
//      }
//      if (k == 0){
//        res[i] = nums[j];
//        break;
//      }
//    }
//  }
//  return res;
//}

vector<int> secondGreaterElement(vector<int>& nums) {
  int n = nums.size();
  vector<int> st;
  vector<int> temp;
  vector<int> res(n, -1);

  for (int i = 0; i < n; ++i) {
    while (!temp.empty() && nums[temp.back()] < nums[i]) {
      res[temp.back()] = nums[i];
      temp.pop_back();
    }

    int pos = st.size() - 1;
    while (pos >= 0 && nums[st[pos]] < nums[i]) {
      --pos;
    }

    temp.insert(temp.end(), st.begin() + (pos + 1), st.end());
    st.resize(pos + 1);
    st.push_back(i);
  }
  return res;
}
