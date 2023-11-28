//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION104_H
#define C___SOLUTION104_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution104{
public:
    int maxDepth(TreeNode* root);

    int dfs(TreeNode *root, int depth);
};


#endif //C___SOLUTION104_H
