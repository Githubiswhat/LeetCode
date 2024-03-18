//
// Created by windows on 2023/3/2.
//

#include "Solution429.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <functional>
#include <map>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


vector<vector<int>> levelOrder(Node* root) {
    map<int, vector<int>> hash;
    function<void(Node*, int)> dfs = [&](Node* node, int depth){
        if (node == nullptr){
            return;
        }
        hash[depth].push_back(node->val);
        for (const auto &item: node->children){
            dfs(item, depth + 1);
        }
    };
    dfs(root, 0);
    vector<vector<int>> ans;
    for (const auto &item: hash){
        ans.push_back(item.second);
    }
    return ans;
}