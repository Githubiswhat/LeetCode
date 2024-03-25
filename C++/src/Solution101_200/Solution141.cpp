//
// Created by windows on 2023/3/2.
//

#include "Solution141.h"
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
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    if(head == nullptr || head->next == nullptr) return false;
    ListNode* slow = head;
    ListNode* fast = head->next;
    while(slow != fast){
        if(fast == nullptr || fast->next == nullptr) return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}