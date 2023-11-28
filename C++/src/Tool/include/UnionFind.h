//
// Created by windows on 2023/3/18.
//

#ifndef C___UNIONFIND_H
#define C___UNIONFIND_H

#include <vector>

using namespace std;

class UnionFind {
public:
    vector<int> parent;

    explicit UnionFind(int n);

    int find(int x);

    void unite(int x, int y);

    bool connected(int x, int y);

};


#endif //C___UNIONFIND_H
