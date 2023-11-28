//
// Created by windows on 2023/3/2.
//

#include "Solution1783.h"
#include <algorithm>
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

void process(TreeNode* root, vector<int>& list){
    if (root == nullptr){
      return ;
    }
    list.push_back(root->val);
    process(root->left, list);
    process(root->right, list);
}


int minDiffInBST(TreeNode* root) {
    vector<int> list;
    process(root, list);
    sort(list.begin(), list.end());
    int min = INT_MAX;
    for (int i = 1; i < list.size(); ++i) {
      if (list[i] - list[i-1] < min){
        min = list[i] - list[i - 1];
      }
    }
    return min;
}




