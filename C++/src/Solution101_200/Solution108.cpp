//
// Created by windows on 2023/3/1.
//

#include "Solution108.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

TreeNode *Solution108::sortedArrayToBST(vector<int> &nums) {
    return helper(nums, 0, nums.size() - 1);
}

//TreeNode *Solution108::helper(vector<int> &nums, int left,  int right) {
//    if (left > right){
//        return nullptr;
//    }
//    int mid = left + (right - left) / 2;
//    TreeNode* root = new TreeNode(nums[mid]);
//    root->left = helper(nums, left, mid - 1);
//    root->right = helper(nums, mid + 1, right);
//    return root;
//}

TreeNode *Solution108::helper(vector<int> &nums, int left,  int right) {
    if (left > right){
        return nullptr;
    }
    int mid = left + (right - left) / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = helper(nums, left, mid  - 1);
    root->right = helper(nums, mid + 1, right);
    return root;
}
