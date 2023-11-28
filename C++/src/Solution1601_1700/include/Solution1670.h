//
// Created by windows on 2023/3/10.
//

#ifndef C___SOLUTION1670_H
#define C___SOLUTION1670_H

#include <deque>
using namespace std;

class FrontMiddleBackQueue{

private:
  deque<int> left;
  deque<int> right;

public:

  FrontMiddleBackQueue();

  void pushFront(int val);

  void pushMiddle(int val);

  void pushBack(int val);

  int popFront();

  int popMiddle();

  int popBack();



};


#endif //C___SOLUTION1670_H


