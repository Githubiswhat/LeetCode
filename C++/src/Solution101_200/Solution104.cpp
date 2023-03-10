//
// Created by windows on 2023/3/2.
//

#include "Solution104.h"
#include <algorithm>
using namespace std;

int Solution104::maxDepth(TreeNode *root) {
    return dfs(root, 0);
}

int Solution104::dfs(TreeNode *root, int depth) {
    if (root == nullptr){
        return depth;
    }
    int left = dfs(root->left, depth + 1);
    int right = dfs(root->right, depth + 1);
    return max(left, right);
}

