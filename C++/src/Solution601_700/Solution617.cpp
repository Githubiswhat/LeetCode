//
// Created by windows on 2023/3/2.
//

#include "Solution617.h"
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

TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
  if (root1 == nullptr && root2 == nullptr) return nullptr;
  if (root1 == nullptr) return root2;
  if (root2 == nullptr) return root1;
  root1->val += root2->val;
  TreeNode* left = mergeTrees(root1->left, root2->left);
  TreeNode* right = mergeTrees(root1->right, root2->right);
  root1->left = left;
  root1->right = right;
  return root1;
}