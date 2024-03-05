//
// Created by windows on 2023/3/2.
//

#include "Solution225.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <list>
using namespace std;

class MyStack {

  list<int> list1;
  list<int> list2;

public:
  MyStack() {

  }

  void push(int x) {
    list1.push_back(x);
  }

  int pop() {
    int n = list1.size();
    for (int i = 0; i < n - 1; ++i) {
      int res = list1.front();
      list2.push_back(res);
      list1.pop_front();
    }
    int res = list1.front();
    list1.pop_front();
    list temp = list1;
    list1 = list2;
    list2 = temp;
    return res;
  }

  int top() {
    int n = list1.size();
    int res = list1.front();
    for (int i = 0; i < n; ++i) {
      res = list1.front();
      list2.push_back(res);
      list1.pop_front();
    }
    list temp = list1;
    list1 = list2;
    list2 = temp;
    return res;
  }


  bool empty() {
    return list1.empty();
  }
};
