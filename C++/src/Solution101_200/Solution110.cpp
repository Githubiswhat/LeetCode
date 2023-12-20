//
// Created by windows on 2023/3/2.
//

#include "Solution110.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <algorithm>
using namespace std;

bool Solution110::isBalanced(TreeNode *root) {
    return dfs(root) >= 0;
}

int Solution110::dfs(TreeNode *root){
    if (root  == nullptr){
        return 0;
    }
    int left  = dfs(root->left);
    int right = dfs(root->right);
    if (left == -1 || right == -1 || abs(left - right) > 1){
        return -1;
    }else{
        return max(left, right) + 1;
    }
}
