//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION2_H
#define C___SOLUTION2_H


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution2{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

};


#endif //C___SOLUTION2_H
