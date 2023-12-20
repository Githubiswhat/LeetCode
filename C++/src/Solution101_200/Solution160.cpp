//
// Created by windows on 2023/3/2.
//

#include "Solution160.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <cstring>

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (headA == nullptr || headB == nullptr){
      return nullptr;
    }
    ListNode* a = headA, *b = headB;
    while (a != b) {
      a == nullptr ? headB : a->next;
      b == nullptr ? headA : b->next;
    }
    return a;
}
