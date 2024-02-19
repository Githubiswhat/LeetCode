//
// Created by windows on 2023/3/2.
//

//#include "Solution239.h"
#include <algorithm>
#include <deque>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
  int n = nums.size();
  vector<int> res(n - k  + 1);
  deque<int> q;
  for (int i = 0; i < n; ++i) {
    if (!q.empty() && q.front() <= i - k){
      q.pop_front();
    }
    while (!q.empty() && nums[i] >= nums[q.back()]) {
      q.pop_back();
    }
    q.push_back(i);

    if (i >= k - 1){
      res[i - k + 1] = nums[q.front()];
    }
  }
  return res;
}

int main() {
  vector<int> nums = {1, 3, 1, 2, 0, 5};
  int k = 3;

  vector<int> result = maxSlidingWindow(nums, k);

  cout << "Result: [";
  for (int i = 0; i < result.size(); ++i) {
    cout << result[i];
    if (i < result.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;

  return 0;
}