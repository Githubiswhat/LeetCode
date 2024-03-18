//
// Created by windows on 2023/3/2.
//

#include "Solution2807.h"
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

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}


ListNode* insertGreatestCommonDivisors(ListNode* head) {
    ListNode* res = head;
    while (head != nullptr && head->next != nullptr){
        ListNode* second = head->next;
        ListNode* temp = new ListNode(gcd(head->val, second->val));
        temp->next = second;
        head->next = temp;
        head = second;
        second = second->next;
    }
    return res;
}