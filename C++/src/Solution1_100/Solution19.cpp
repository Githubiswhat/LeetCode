//
// Created by windows on 2023/3/2.
//

#include "Solution19.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
  ListNode* dummy = new ListNode(0, head);
  ListNode* fastPtr = head;
  head = dummy;
  for (int i = 0; i < n; ++i) {
    fastPtr = fastPtr->next;
  }
  while (fastPtr != nullptr){
    fastPtr = fastPtr->next;
    head = head->next;
  }
  head->next = head->next->next;
  return dummy->next;
}