//
// Created by windows on 2023/3/2.
//

#include "Solution295.h"
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class MedianFinder {
public:
  priority_queue<int, vector<int>> left;
  priority_queue<int, vector<int>, greater<int>> right;
  int count;
  MedianFinder() {
    count = 0;
  }

  void addNum(int num) {
    if (count % 2 == 0){
      if (!left.empty() && left.top() > num) {
        left.push(num);
        num = left.top();
        left.pop();
      }
      right.push(num);
    }else {
      if (right.top() < num){
        right.push(num);
        num = right.top();
        right.pop();
      }
      left.push(num);
    }
    count++;
  }

  double findMedian() {
    if (count % 2 == 1){
      return right.top();
    } else{
      return (left.top() + right.top()) / 2.0;
    }
  }
};
