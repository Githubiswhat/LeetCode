//
// Created by windows on 2023/3/2.
//

#include "Solution2476.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <functional>

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

//vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
//
//    function<void(TreeNode*, int, pair<int, int>&)> dfs = [&](TreeNode* node, int target, pair<int, int>& ans){
//        if (node == nullptr){
//            return;
//        }
//        if (node->val == target){
//            ans = {target, target};
//        }
//
//        if (node->val > target){
//            if (ans.second > node->val || ans.second == -1){
//                ans.second = node->val;
//            }
//            dfs(node->left, target, ans);
//        } else{
//            if (ans.first < node->val){
//                ans.first = node->val;
//            }
//            dfs(node->right, target, ans);
//        }
//    };
//
//    vector<vector<int>> res;
//
//    for (const auto &item: queries){
//        pair<int, int> ans = {-1, -1};
//        dfs(root, item, ans);
//        res.push_back({ans.first, ans.second});
//    }
//    return res;
//}



vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
    vector<int> nums;
    function<void(TreeNode*)> dfs = [&](TreeNode* root){
        if (root == nullptr){
            return;
        }
        dfs(root->left);
        nums.push_back(root->val);
        dfs(root->right);
    };
    dfs(root);
    int n = nums.size();
    vector<vector<int>> ans;

    for (const auto &item: queries){
        int left = -1, right = n;
        while (left + 1 < right){
            int mid = left + (right - left) / 2;
            if (nums[mid] == item){
                left = right = mid;
                break;
            } else if (nums[mid] < item){
                left = mid;
            } else{
                right =  mid;
            }
        }
        ans.push_back({left == -1 ? -1 : nums[left], right == n ? -1 : nums[right]});
    }
    return ans;
}
