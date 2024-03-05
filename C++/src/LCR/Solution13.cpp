//
// Created by windows on 2023/12/20.
//

#include "Solution13.h"
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
#include "vector"
using namespace std;

class NumMatrix {
private:
  vector<vector<int>> s;

public:
  NumMatrix(vector<vector<int>> &matrix) {
    s = vector<vector<int>>(matrix.size() + 1,
                            vector<int>(matrix[0].size() + 1));
    for (int i = 1; i <= matrix.size(); i++) {
      for (int j = 1; j <= matrix[0].size(); ++j) {
        s[i][j] =
            s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + matrix[i - 1][j - 1];
      }
    }
  }

  int sumRegion(int row1, int col1, int row2, int col2) {
    return s[row2 + 1][col2 + 1] - s[row2 + 1][col1] - s[row1][col2 + 1] +
           s[row1][col1];
  }
};
