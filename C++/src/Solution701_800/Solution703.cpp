//
// Created by windows on 2023/3/2.
//

#include "Solution703.h"
#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class KthLargest {
public:
  priority_queue<int, vector<int>, greater<int>> q;
  int k;
  KthLargest(int k, vector<int>& nums) {
    this->k = k;
    for (auto& x: nums) {
      add(x);
    }
  }

  int add(int val) {
    q.push(val);
    if (q.size() > k) {
      q.pop();
    }
    return q.top();
  }
};