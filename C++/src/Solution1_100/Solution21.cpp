//
// Created by windows on 2023/3/2.
//

#include "Solution21.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
  ListNode* listNode = new ListNode(0);
  ListNode* res = listNode;

  while (list1 != nullptr && list2 != nullptr){
    if (list1->val > list2->val){
      listNode->next = new ListNode(list2->val);
      list2 = list2->next;
    } else{
      listNode->next = new ListNode(list1->val);
      list1 = list1->next;
    }
    listNode = listNode->next;
  }

  while (list1 != nullptr){
    listNode->next = new ListNode(list1->val);
    list1 = list1->next;
    listNode = listNode->next;
  }

  while (list2 != nullptr){
    listNode->next = new ListNode(list2->val);
    list2 = list2->next;
    listNode = listNode->next;
  }
  return res;
}



