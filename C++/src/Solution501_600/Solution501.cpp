//
// Created by windows on 2023/3/2.
//

#include "Solution501.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
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



vector<int> findMode(TreeNode* root) {
  vector<int> res;
  function<void(TreeNode*, int, int)> dfs = [&](TreeNode* root, int num, int count){
    if (!root) return;





  };





}