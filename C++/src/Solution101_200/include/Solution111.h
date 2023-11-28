//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION111_H
#define C___SOLUTION111_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution111{
public:
    int minDepth(TreeNode* root);

    int dfs(TreeNode *root);
};


#endif //C___SOLUTION111_H
