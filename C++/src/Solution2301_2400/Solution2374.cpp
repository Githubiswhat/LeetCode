//
// Created by windows on 2023/3/2.
//

#include "Solution2374.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int edgeScore(vector<int>& edges) {
  int n = edges.size();
  vector<long long> points(n, 0);

  for (int i = 0; i < n; ++i) {
    points[edges[i]] += i;
  }

  long long max = -1;
  int ans = -1;
  for (int i = 0; i < n; ++i) {
    if (points[i] > max){
      max = points[i];
      ans = i;
    }
  }
  return ans;
}

