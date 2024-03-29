//
// Created by windows on 2023/3/2.
//

//#include "Solution2580.h"
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <valarray>
#include <vector>
using namespace std;

//int countWays(vector<vector<int>>& ranges) {
//  sort(ranges.begin(), ranges.end(), [](auto a, auto b){
//    return a[0] < b[0];
//  });
//  int n = ranges.size();
//  int count = 2;
//  for (int i = 1; i < n; ++i) {
//    if(ranges[i][0] <= ranges[i - 1][1]){
//      count--;
//      ranges[i][1] = max(ranges[i][1], ranges[i - 1][1]);
//    }
//  }
//  int res = 2, MOD = 1e9 + 7;
//  for (int i = 0; i < count; ++i) {
//    res = res * 2 % MOD;
//  }
//  return res;
//}

int countWays(vector<vector<int>> &ranges) {
  sort(ranges.begin(), ranges.end(), [](auto a, auto b){
    return a[0] < b[0];
  });
  int ans = 1, max_r = -1;
  for (auto &p : ranges) {
    if (p[0] > max_r) { // 无法合并
      ans = ans * 2 % 1'000'000'007; // 新区间
    }
    max_r = max(max_r, p[1]); // 合并
  }
  return ans;
}

int main() {
  // 定义测试用例
  vector<vector<int>> ranges = {{34,56},{28,29},{12,16},{11,48},{28,54},{22,55},{28,41},{41,44}};

  // 调用函数并输出结果
  cout << "Number of non-overlapping ways: " << countWays(ranges) << endl;

  return 0;
}