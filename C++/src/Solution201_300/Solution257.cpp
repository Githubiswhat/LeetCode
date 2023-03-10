//
// Created by windows on 2023/3/2.
//

#include "Solution257.h"

vector<string> Solution257::binaryTreePaths(TreeNode *root) {
    vector<string> res;
    dfs(root, "", res);
    return res;
}

void Solution257::dfs(TreeNode *node, string path, vector<string>& res) {
    if (node != nullptr){
        path += to_string(node->val);
        if (node->left == nullptr && node->right == nullptr){
            res.push_back(path);
        }else{
            path += "->";
            dfs(node->left, path, res);
            dfs(node->right, path, res);
        }
    }
}