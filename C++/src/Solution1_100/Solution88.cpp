//
// Created by windows on 2023/3/1.
//

#include "Solution88.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

void Solution88::merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while (i >= 0 && j >= 0){
        if (nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        } else{
            nums1[k--] = nums2[j--];
        }
    }
    while (j >= 0){
        nums1[k--] = nums2[j--];
    }
}
