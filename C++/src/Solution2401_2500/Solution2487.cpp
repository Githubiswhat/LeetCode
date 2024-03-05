//
// Created by windows on 2023/3/2.
//

#include "Solution2487.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <stack>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* removeNodes(ListNode* head) {

  stack<ListNode*> st;
  while (head != nullptr){
    while (!st.empty() && st.top()->val < head->val){
      st.pop();
    }
    st.push(head);
    head = head->next;
  }

  vector<ListNode*> v;
  while (!st.empty()){
    v.push_back(st.top());
    st.pop();
  }

  ListNode* res = new ListNode(0);
  head = res;
  for (int i = v.size() - 1; i >= 0; --i) {
    res->next = v[i];
    res = res->next;
  }
  return head->next;
}
