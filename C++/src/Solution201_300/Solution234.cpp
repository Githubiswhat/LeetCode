//
// Created by windows on 2023/3/2.
//

#include "Solution234.h"
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


bool isPalindrome(ListNode* head) {
    vector<int> l;
    while (head != nullptr){
      l.push_back(head->val);
      head = head->next;
    }
    for (int i = 0; i < l.size() / 2; ++i) {
      if (l[i] != l[l.size() - i - 1]){
        return false;
      }
    }
    return true;
}