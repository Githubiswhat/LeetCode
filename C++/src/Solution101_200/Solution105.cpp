//
// Created by windows on 2023/3/2.
//

#include "Solution105.h"
#include <functional>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


int index(vector<int> &nums, int target){
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
      if (nums[i] == target){
        return i;
      }
    }
    return -1;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    if (preorder.empty()){
      return nullptr;
    }
    int left_size = index(inorder, preorder[0]);
    vector<int> left_inorder(inorder.begin(), inorder.begin() + left_size);
    vector<int> right_inorder(inorder.begin() + left_size + 1, inorder.end());

    vector<int> left_preorder(preorder.begin() + 1, preorder.begin() + left_size + 1);
    vector<int> right_preorder(preorder.begin() + left_size + 1, preorder.end());

    TreeNode* left =buildTree(left_preorder, left_inorder);
    TreeNode* right = buildTree(right_preorder, right_inorder);
    return new TreeNode(preorder[0], left, right);
}













