//
// Created by windows on 2023/3/2.
//

#include "Solution1670.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

FrontMiddleBackQueue::FrontMiddleBackQueue(){

}

void FrontMiddleBackQueue::pushFront(int val) {
  left.push_front(val);
  if (left.size() == right.size() + 2){
    right.push_front(left.back());
    left.pop_back();
  }
}

void FrontMiddleBackQueue::pushMiddle(int val) {
  if (left.size() == right.size() + 1){
    right.push_front(left.back());
    left.pop_back();
  }
  left.push_back(val);
}

void FrontMiddleBackQueue::pushBack(int val) {
  right.push_back(val);
  if (left.size() + 1 == right.size()){
    left.push_back(right.front());
    right.pop_front();
  }
}

int FrontMiddleBackQueue::popFront() {
  if (left.size() == 0){
    return -1;
  }
  int val = left.front();
  left.pop_front();
  if (left.size() + 1 == right.size()){
    left.push_back(right.front());
    right.pop_front();
  }
  return val;
}

int FrontMiddleBackQueue::popMiddle() {
  if (left.empty()){
    return -1;
  }
  int val = left.back();
  left.pop_back();
  if (left.size() + 1 == right.size()){
    left.push_back(right.front());
    right.pop_front();
  }
  return val;
}

int FrontMiddleBackQueue::popBack() {
  if (left.size() == 0){
    return -1;
  }
  int val = 0;
  if (right.size() == 0){
    val = left.back();
    left.pop_back();
  } else{
    val = right.back();
    right.pop_back();
    if (left.size() == right.size() + 2){
      right.push_front(left.back());
      left.pop_back();
    }
  }
  return val;
}
