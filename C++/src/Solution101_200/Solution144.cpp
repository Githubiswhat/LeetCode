//
// Created by windows on 2023/3/2.
//

#include "Solution144.h"

vector<int> Solution144::preorderTraversal(TreeNode *root) {
    vector<int> res;
    dfs(root, res);
    return res;
}

void Solution144::dfs(TreeNode *root, vector<int> &res) {
    if (root = nullptr){
        return;
    }
    res.push_back(root->val);
    dfs(root->left, res);
    dfs(root->right, res);
}
