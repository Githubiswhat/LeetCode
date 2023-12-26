//
// Created by windows on 2023/3/2.
//

#include "Solution812.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

double triangleArea(int x1, int y1, int x2, int y2, int x3, int y3) {
  return 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2);
}

double largestTriangleArea(vector<vector<int>>& points) {
  double ans = 0;
  for (int i = 0; i < points.size(); ++i) {
    for (int j = i + 1; j < points.size(); ++j) {
      for (int j = i + 1; j < points.size(); ++j) {
        for (int k = j + 1; k < points.size(); ++k) {
          double area = triangleArea(points[i][0], points[i][1], points[j][0],
                                     points[j][1], points[k][0], points[k][1]);
          ans = max(ans, area);
        }
      }
    }
  }
  return ans;
}