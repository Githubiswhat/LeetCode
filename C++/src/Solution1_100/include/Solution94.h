//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION94_H
#define C___SOLUTION94_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include<vector>
using namespace std;


class Solution94{
public:
    vector<int> inorderTraversal(TreeNode* root);

    void dfs(TreeNode *root, vector<int> &res);
};


#endif //C___SOLUTION94_H
