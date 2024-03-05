//
// Created by windows on 2023/3/2.
//

#include "Solution2641.h"
#include <functional>
#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



TreeNode* replaceValueInTree(TreeNode* root) {
  vector<TreeNode*> q = {root};
  root->val = 0;
  while (!q.empty()){
    vector<TreeNode*> next;
    int next_level_sum = 0;

    for (const auto &item : q){
      if (item->left){
        next_level_sum += item->left->val;
        next.push_back(item->left);
      }
      if (item->right){
        next_level_sum += item->right->val;
        next.push_back(item->right);
      }
    }

    for (auto &item : q){
      int child_sum = (item->left ? item->left->val : 0)
                      + (item->right ? item->right->val: 0);
      if (item->left){
        item->left->val = next_level_sum - child_sum;
      }
      if (item->right){
        item->right->val = next_level_sum - child_sum;
      }
    }
    q = move(next);
  }
  return root;
}
