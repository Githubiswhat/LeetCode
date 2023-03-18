//
// Created by windows on 2023/3/2.
//

#include "Solution111.h"
#include <algorithm>
using namespace std;


int Solution111::minDepth(TreeNode *root) {
    return dfs(root);
}

int Solution111::dfs(TreeNode *root){
    if (root == nullptr){
        return 0;
    }
    if (root->left == nullptr && root->right == nullptr){
        return 1;
    }
    int min_depth = INT_MAX;
    if (root->left != nullptr){
        min_depth = min(dfs(root->left), min_depth);
    }
    if (root->right != nullptr){
        min_depth = min(dfs(root->right), min_depth);
    }
    return min_depth + 1;
}