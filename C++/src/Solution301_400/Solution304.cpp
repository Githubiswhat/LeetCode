//
// Created by windows on 2023/3/2.
//

#include "Solution304.h"

#include "vector"
using namespace std;

class NumMatrix {
private:
  vector<vector<int>> matrix;
  vector<vector<int>> s;

public:
  NumMatrix(vector<vector<int>>& matrix) {
    this->matrix = matrix;
    int m = matrix.size();
    int n = matrix[0].size();
    s.resize(m + 1, vector<int>(n + 1));
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        s[i + 1][j + 1] = s[i][j + 1] + s[i + 1][j] - s[i][j] + matrix[i][j];
      }
    }
  }

  int sumRegion(int row1, int col1, int row2, int col2) {
    return s[row2 + 1][col2 + 1] - s[row1][col2 + 1]- s[row2 + 1][col1] + s[row1][col1];
  }
};
