//
// Created by windows on 2023/3/2.
//

#include "Solution2.h"

ListNode *Solution2::addTwoNumbers(ListNode *l1, ListNode *l2) {
    int carry = 0;
    ListNode *head = nullptr, *tail = nullptr;
    while (l1 || l2) {
        int num1 = l1 ? l1->val : 0;
        int num2 = l2 ? l2->val : 0;
        int sum = num1 + num2 + carry;
        if (!head){
            head = tail = new ListNode(sum % 10);
        } else{
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
        }
        carry = sum / 10;
        if (l1){
            l1 = l1->next;
        }
        if (l2){
            l2 = l2->next;
        }
    }
    if (carry){
        tail->next = new ListNode(carry);
    }
    return head;
}
