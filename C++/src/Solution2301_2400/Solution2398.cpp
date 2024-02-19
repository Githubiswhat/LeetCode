//
// Created by windows on 2023/3/2.
//

//#include "Solution2398.h"
#include <deque>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
  int n = chargeTimes.size();
  int ans = 0;
  deque<int> q;
  int left = 0;

  vector<long long> pre(n + 1, 0);
  for (int i = 0; i < n; ++i) {
    pre[i + 1] += pre[i] + runningCosts[i];
  }

  for (int i = 0; i < n; ++i) {
    while (!q.empty() && chargeTimes[q.back()] < chargeTimes[i]){
      q.pop_back();
    }
    q.push_back(i);
    while (!q.empty() && chargeTimes[q.front()] + (long long)(pre[i + 1] - pre[left]) * (i + 1 - left) > budget){
      if (q.front() == left){
        q.pop_front();
      }
      left++;
    }
    ans = max(ans, i - left + 1);
  }
  return ans;
}

int main() {
  vector<int> chargeTimes = {3, 6, 1, 3, 4};
  vector<int> runningCosts = {2, 1, 3, 4, 5};
  long long budget = 25;

  int result = maximumRobots(chargeTimes, runningCosts, budget);

  cout << "Maximum number of robots: " << result << endl;

  return 0;
}
