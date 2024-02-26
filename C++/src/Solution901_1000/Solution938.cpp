//
// Created by windows on 2023/3/2.
//

#include "Solution938.h"
#include <functional>
#include <iostream>
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

int rangeSumBST(TreeNode* root, int low, int high) {
  vector<int> nums;
  function<void(TreeNode*)> dfs = [&](TreeNode* node){
    if (node == nullptr){
      return ;
    }
    dfs(node->left);
    nums.push_back(node->val);
    dfs(node->right);
  };
  dfs(root);
  int sum = 0;
  for (int i = 0; i < nums.size(); ++i) {
    if (nums[i] >= low && nums[i] <= high){
      sum += nums[i];
    }
  }
  return sum;
}