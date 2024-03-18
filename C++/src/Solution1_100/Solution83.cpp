//
// Created by windows on 2023/3/2.
//

#include "Solution83.h"
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


ListNode* deleteDuplicates(ListNode* head) {
    ListNode* res = head;
    while (head != nullptr && head->next != nullptr){
        ListNode* next = head->next;
        while (next != nullptr && head->val == next->val){
            next = next->next;
        }
        head->next = next;
        head = head->next;
    }
    return res;
}
