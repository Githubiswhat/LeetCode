//
// Created by windows on 2023/3/2.
//

#include "Solution2095.h"
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


ListNode* deleteMiddle(ListNode* head) {
    int count = 0;
    ListNode* p = head;
    while (p != nullptr){
      p = p->next;
      count++;
    }
    count = count / 2 + 1;
    p = new ListNode(-1);
    p->next = head;
    head = p;
    while (count > 0){
      count--;
      if (count == 0){
        p->next = p->next->next;
        break;
      }
      p = p->next;
    }
    return head;
}
