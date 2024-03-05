//
// Created by windows on 2023/3/18.
//

#include "UnionFind.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

UnionFind::UnionFind(int n) {
    parent.resize(n);
    for (int i = 0; i < n; ++i) {
        parent[i] = i;
    }
}

int UnionFind::find(int x) {
    if (parent[x] == x){
        return x;
    }
    return parent[x] = find(x);
}

void UnionFind::unite(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if (rootX == rootY){
        return;
    }
    parent[x] = find(y);
}

bool UnionFind::connected(int x, int y) {
    return find(x) == find(y);
}

