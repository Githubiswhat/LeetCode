//
// Created by windows on 2023/3/2.
//

#include "Solution2336.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <algorithm>
#include <deque>
using namespace std;

class SmallestInfiniteSet {
private:
  int val = 1;
  deque<int> list;


public:
  SmallestInfiniteSet() {

  }

  int popSmallest() {
    if (!list.empty()){
      int result = list.front();
      list.pop_front();
      return result;
    }
    return val++;
  }

  void addBack(int num) {
    if (num < 1){
      return;
    }
    if (num < val){
      bool flag = false;
      for (int i = 0; i < list.size(); ++i)
        if (list[i] == num){
          flag = true;
      }
      if (!flag){
        list.push_back(num);
        sort(list.begin(), list.end());
      }
    }
  }
};
