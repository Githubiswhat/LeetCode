//
// Created by windows on 2023/3/2.
//

#include "Solution2696.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int minLength(string s) {
  while (s.find("AB") != string::npos || s.find("CD") != string::npos) {
    if (s.find("AB") != string::npos) {
      s.replace(s.find("AB"), 2, "");
    }
    if (s.find("CD") != string::npos) {
      s.replace(s.find("CD"), 2, "");
    }
  }
  return s.size();
}

//int minLength(string s) {
//  vector<int> st;
//  for (char c : s) {
//    st.push_back(c);
//    int m = st.size();
//    if (m >= 2 &&
//        (st[m - 2] == 'A' && st[m - 1] == 'B' ||
//         st[m - 2] == 'C' && st[m - 1] == 'D')) {
//      st.pop_back();
//      st.pop_back();
//    }
//  }
//  return st.size();
//}
