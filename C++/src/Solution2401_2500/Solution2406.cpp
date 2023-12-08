//
// Created by windows on 2023/3/2.
//

#include "Solution2406.h"
#include <algorithm>
#include <vector>
using namespace std;


int minGroups(vector<vector<int>>& intervals) {
  sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int>& b){
    return a[0] < b[0];
  });

  int result = intervals.size();
  for (int i = 0; i < intervals.size() - 1; ++i) {
    if (intervals[i][1] > intervals[i + 1][1]){
      intervals[i + 1][1] = intervals[i][1];
      result--;
    }else if (intervals[i][1] >= intervals[i + 1][0] - 1){
      result--;
    }
  }
  return result;
}
