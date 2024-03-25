//
// Created by windows on 2023/3/2.
//

#include "Solution637.h"
#include <functional>
#include <iostream>
#include <queue>
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

vector<double> averageOfLevels(TreeNode* root) {
  queue<TreeNode*> q;
  vector<double> res;
  if (root == nullptr){
    return res;
  }
  q.push(root);
  res.push_back(root->val);
  while (!q.empty()){
    int size = q.size();
    double sum = 0;
    for (int i = 0; i < size; ++i) {
      TreeNode* node = q.front();
      q.pop();
      if (node->left != nullptr){
        q.push(node->left);
        sum += node->left->val;
      }
      if (node->right != nullptr){
        q.push(node->right);
        sum += node->right->val;
      }
    }
    if (q.size() != 0){
      res.push_back(sum / q.size());
    }
  }
  return res;
}