//
// Created by windows on 2023/3/2.
//

#include "Solution240.h"
#include "vector"
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int i = matrix.size() - 1;
  int j = 0;
  while (i >= 0 && j< matrix[0].size()){
    if (matrix[i][j] < target){
      j++;
    }else if (matrix[i][j] > target){
      i--;
    }else{
      return true;
    }
  }
   return false;
}
