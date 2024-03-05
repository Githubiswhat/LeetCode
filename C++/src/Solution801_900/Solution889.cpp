//
// Created by windows on 2023/3/2.
//

#include "Solution889.h"
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

int index(vector<int> postorder, int target){
  int n = postorder.size();
  for (int i = 0; i < n; ++i) {
    if (postorder[i] == target){
      return i;
    }
  }
}

TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
  if (preorder.empty()){
    return nullptr;
  }

  if (preorder.size() == 1){
    return new TreeNode(preorder[0]);
  }

  int left_size = index(postorder,preorder[1]) + 1;

  vector<int> left_preorder = vector<int>(preorder.begin() + 1, preorder.begin() + left_size + 1);
  vector<int> right_preorder = vector<int>(preorder.begin() + left_size + 1,preorder.end());

  vector<int> left_postorder = vector<int>(postorder.begin(), postorder.begin() + left_size);
  vector<int> right_postorder = vector<int>(postorder.begin() + left_size, postorder.end() - 1);

  TreeNode* left = constructFromPrePost(left_preorder,left_postorder);
  TreeNode* right = constructFromPrePost(right_preorder,right_postorder);

  return new TreeNode(preorder[0], left, right);
}
