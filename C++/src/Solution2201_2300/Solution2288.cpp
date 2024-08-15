//
// Created by windows on 2023/3/2.
//

#include "Solution2288.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string discountPrices(string sentence, int discount) {
  double d = 1 - discount / 100.0;
  stringstream ss(sentence);
  string ans, w;
  while (ss >> w) { // 一边分割，一边加到答案中
    if (!ans.empty()) {
      ans += ' ';
    }
    if (w.length() > 1 && w[0] == '$' && all_of(w.begin() + 1, w.end(), ::isdigit)) {
      stringstream s;
      s << fixed << setprecision(2) << '$' << stoll(w.substr(1)) * d;
      ans += s.str();
    } else {
      ans += w;
    }
  }
  return ans;
}