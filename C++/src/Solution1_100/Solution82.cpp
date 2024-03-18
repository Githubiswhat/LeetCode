//
// Created by windows on 2023/3/2.
//

#include "Solution82.h"
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
    ListNode* dummy = new ListNode(0, head);
    ListNode* cur = dummy;
    while (cur->next && cur->next->next){
        if (cur->next->val == cur->next->next->val){
            int x = cur->next->next->val;
            while (cur->next && cur->next->val == x){
                cur->next = cur->next->next;
            }
        }else{
            cur = cur->next;
        }
    }
    return dummy->next;
}