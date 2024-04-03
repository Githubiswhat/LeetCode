//
// Created by windows on 2023/3/2.
//

#include "Solution1379.h"
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

TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
  if(original == nullptr || cloned == nullptr) return nullptr;
  if(original == target) return cloned;
  TreeNode* left = getTargetCopy(original->left, cloned->left, target);
  if(left != nullptr) return left;
  return getTargetCopy(original->right, cloned->right, target);
}