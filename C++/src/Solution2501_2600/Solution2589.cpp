//
// Created by windows on 2023/3/2.
//

#include "Solution2589.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int findMinimumTime(vector<vector<int>>& tasks) {
  std::sort(tasks.begin(), tasks.end(), [](auto a, auto b){
    return a[1] < b[1];
  });
  vector<int> run(tasks.back()[1] + 1, 0);
  int ans = 0;
  for (const auto &task: tasks){
    int start = task[0], end = task[1], duration = task[2];
    for (int i = start; i <= end; ++i){
      duration -= run[i];
    }
    for (int i = end; duration > 0 ; --i) {
      if (!run[i]){
        run[i] = true;
        duration--;
        ans++;
      }
    }
  }
  return ans;
}
