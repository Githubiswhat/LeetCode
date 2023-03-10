//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION226_H
#define C___SOLUTION226_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution226{
public:
    TreeNode* invertTree(TreeNode* root);

    void dfs(TreeNode *root);
};


#endif //C___SOLUTION226_H
