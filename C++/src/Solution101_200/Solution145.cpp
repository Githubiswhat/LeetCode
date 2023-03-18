//
// Created by windows on 2023/3/2.
//

#include "Solution145.h"

vector<int> Solution145::postorderTraversal(TreeNode *root) {
    vector<int> result;
    dfs(root, result);
    return result;
}

void Solution145::dfs(TreeNode *root, vector<int> &res){
    if (root == nullptr){
        return;
    }
    dfs(root->left, res);
    dfs(root->right, res);
    res.push_back(root->val);
}