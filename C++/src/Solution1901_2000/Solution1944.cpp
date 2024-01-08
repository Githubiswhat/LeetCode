//
// Created by windows on 2023/3/2.
//

#include "Solution1944.h"
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> canSeePersonsCount(vector<int>& heights) {
  int n = heights.size();
  vector<int> res(n, 0);
  unordered_map<int, int> map;
  stack<int> st;
  for (int i = n - 1; i >= 0 ; --i) {
    int count = 0;
    while (!st.empty() && heights[st.top()] <= heights[i]){
      st.pop();
      count++;
    }
    if (st.empty()){
      res[i] = i == n - 1 ? 0 : 1;
    }else{
      res[i] = count + 1;
    }
    st.push(i);
  }
  return res;
}