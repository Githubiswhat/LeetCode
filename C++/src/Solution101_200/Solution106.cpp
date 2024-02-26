//
// Created by windows on 2023/3/2.
//

#include "Solution106.h"
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

int index(vector<int>& inorder, int target){
  int n = inorder.size();
  for (int i = 0; i < n; ++i) {
    if (inorder[i] == target){
      return i;
    }
  }
  return -1;
}

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
  if (inorder.size() == 0){
    return nullptr;
  }
  int left_size = index(inorder, postorder[postorder.size() - 1]);

  vector<int> left_inorder(inorder.begin(), inorder.begin() + left_size);
  vector<int> right_inorder(inorder.begin() + left_size + 1, inorder.end());

  vector<int> left_postorder(postorder.begin(), postorder.begin() + left_size);
  vector<int> right_postorder(postorder.begin() + left_size, postorder.end() - 1);

  TreeNode* left = buildTree(left_inorder, left_postorder);
  TreeNode* right = buildTree(right_inorder,right_postorder);

  TreeNode* root = new TreeNode(postorder[postorder.size() - 1], left, right);
  return root;
}
