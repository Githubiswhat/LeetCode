//
// Created by windows on 2023/3/2.
//

#include "Solution563.h"
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



int findTilt(TreeNode* root) {
  int res = 0;

  function<int(TreeNode*)> dfs = [&](TreeNode* root){
    if(!root) return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    res += abs(left - right);
    return left + right + root->val;
  };
  dfs(root);
  return res;
}