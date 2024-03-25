//
// Created by windows on 2023/3/2.
//

#include "Solution203.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* removeElements(ListNode* head, int val) {
    ListNode *dummy = new ListNode(-1, head);
    ListNode* pre = dummy;
    ListNode* cur = head;
    while(cur != nullptr){
      if (cur->val == val){
        pre->next = cur->next;
      }else {
        pre = cur;
      }
      cur = cur->next;
    }
    return dummy->next;
}