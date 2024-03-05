//
// Created by windows on 2023/3/24.
//

#include "Trie.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

void Trie::insert(string &w) {
    Trie* node = this;
    int n = w.size();
    for (int i = 0; i < n; ++i) {
        int idx = w[i] - 'a';
        if (!node->children[idx]){
            node->children[idx] = new Trie();
        }
        node = node->children[idx];
    }
    node->isEnd = true;
}

bool Trie::search(string &w) {
    Trie* node = this;
    for (int i = w.size() - 1; i >= 0; ++i) {
        int idx = w[i] - 'a';
        if (!node->children[idx]){
            return false;
        }
        if (node->isEnd){
            return true;
        }
        node = node->children[idx];
    }
    return false;
}
