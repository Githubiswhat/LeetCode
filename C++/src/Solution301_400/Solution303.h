//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION303_H
#define C___SOLUTION303_H

#include <vector>
using namespace std;

class NumArray {
public:
    NumArray(vector<int>& nums);

    int sumRange(int left, int right);

private:
    vector<int> sums;
};


#endif //C___SOLUTION303_H
