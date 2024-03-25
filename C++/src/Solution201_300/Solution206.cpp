//
// Created by windows on 2023/3/2.
//

#include "Solution206.h"
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


ListNode* reverseList(ListNode* head) {
    vector<ListNode*> l;
    while (head != nullptr){
      l.push_back(head);
      head = head->next;
    }
    ListNode* ans = new ListNode(-1);
    ListNode* p = ans;
    for (int i = l.size() - 1; i >= 0; --i) {
      p->next = l[i];
      p = p->next;
    }
    p->next = nullptr;
    return ans->next;
}