//
// Created by windows on 2023/11/30.
//

#include "include/Solution123.h"
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
#include <cstddef>
#include <string>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool recur(TreeNode *A, TreeNode *B) {
  if (B == nullptr) {
    return true;
  }
  if (A == nullptr || A->val != B->val) {
    return false;
  }
  return recur(A->left, B->left) && recur(A->right, B->right);
}

bool isSubStructure(TreeNode *A, TreeNode *B) {
  return ((A != nullptr) && (B != nullptr)) &&
         (recur(A, B) || isSubStructure(A->left, B) ||
          isSubStructure(A->right, B));
}
