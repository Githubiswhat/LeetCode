//
// Created by windows on 2023/3/2.
//

#include "Solution235.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <cstring>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == nullptr || root == p || root == q) {
      return root;
    }
    if (p->val < root->val && q->val < root->val){
      return lowestCommonAncestor(root->left, p, q);
    }
    if (p->val > root->val && q->val > root->val){
      return lowestCommonAncestor(root->right,p, q);
    }
    return root;
}


