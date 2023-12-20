//
// Created by windows on 2023/3/2.
//

#include "Solution1901.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
#include <algorithm>
using namespace std;


int indexOfMax(const vector<int>& nums){
    return max_element(nums.begin(), nums.end()) - nums.begin();
}


vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int left = -1, right = mat.size();
    while (left < right - 1){
      int mid = left + (right - left) / 2;
      int index = indexOfMax(mat[mid]);
      if (mid + 1 >= mat.size() || mat[mid][index] > mat[mid + 1][index]){
        right = mid;
      } else{
        left = mid;
      }
    }
    return  {left, indexOfMax(mat[left])};
}
