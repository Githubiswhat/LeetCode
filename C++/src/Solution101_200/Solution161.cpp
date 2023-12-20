//
// Created by windows on 2023/3/2.
//

#include "Solution161.h"

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* rotateRight(ListNode* head, int k) {
  if (head == nullptr || head->next == nullptr || k == 0){
    return head;
  }
  ListNode* tail = head;
  int len = 1;
  while (tail->next != nullptr){
    tail = tail->next;
    len++;
  }

  k = k % len;
  if (k == 0){
    return head;
  }

  ListNode* new_tail = head;
  for (int i = 0; i < len - k; ++i) {
    new_tail = new_tail->next;
  }

  ListNode* new_header = new_tail->next;
  new_tail->next = nullptr;

  tail->next = head;
  return new_header;
}
