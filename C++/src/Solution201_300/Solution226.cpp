//
// Created by windows on 2023/3/2.
//

#include "Solution226.h"

TreeNode *Solution226::invertTree(TreeNode *root) {
    dfs(root);
    return root;
}

void Solution226::dfs(TreeNode *root){
    if (root == nullptr) return;
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    dfs(root->left);
    dfs(root->right);
}