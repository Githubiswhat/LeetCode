//
// Created by windows on 2023/3/2.
//

#include "Solution1046.h"
#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


int lastStoneWeight(vector<int>& stones) {
  priority_queue<int> queue(stones.begin(), stones.end());
  while (queue.size() > 1){
    int a = queue.top();
    queue.pop();
    int b = queue.top();
    queue.pop();
    queue.push(abs(a - b));
  }
  return queue.top();
}
