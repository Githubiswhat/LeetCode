//
// Created by windows on 2023/3/2.
//

#include "Solution572.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
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

bool isSubtree(TreeNode* root, TreeNode* subRoot) {

  function<bool(TreeNode*, TreeNode*)> dfs = [&](TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) return true;
    if (p == nullptr || q == nullptr) return false;

    if (p->val != q->val) return false;
    return dfs(p->left, q->left) && dfs(p->right, q->right);
  };


  function<bool(TreeNode*)> dfs2 = [&](TreeNode* root) {
    if (root == nullptr) return false;
    if (root->val == subRoot->val) {
      if (dfs(root, subRoot)) return true;
    }
    return dfs2(root->left) || dfs2(root->right);
  };

  return dfs2(root);
}