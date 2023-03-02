//
// Created by windows on 2023/3/1.
//

#ifndef C___SOLUTION108_H
#define C___SOLUTION108_H

#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution108 {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums);

    TreeNode *helper(vector<int> &nums, int left, int right);
};


#endif //C___SOLUTION108_H
