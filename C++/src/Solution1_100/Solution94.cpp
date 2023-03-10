//
// Created by windows on 2023/3/2.
//

#include "Solution94.h"

vector<int> Solution94::inorderTraversal(TreeNode *root) {
    vector<int> res;
    dfs(root, res);
    return res;
}

void Solution94::dfs(TreeNode *root, vector<int>& res){
    if (root == nullptr){
        return;
    }
    dfs(root->left, res);
    res.push_back(root->val);
    dfs(root->right, res);
}
