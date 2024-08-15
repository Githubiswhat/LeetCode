//
// Created by windows on 2023/3/2.
//

#include "Solution2244.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int minimumRounds(vector<int>& tasks) {
  std::sort(tasks.begin(), tasks.end());
  int n = tasks.size();
  int ans = 0;
  int count = 0;
  tasks.push_back(-1);
  for (int i = 1; i <= n; ++i) {
    if (tasks[i] == tasks[i - 1]){
      count++;
    } else{
      if (count < 2) {
        return -1;
      }
      ans += count / 3;
      if (count % 3 != 0){
        ans++;
      }
      count = 0;
    }
  }
  return ans;
}