//
// Created by windows on 2023/3/2.
//

#include "Solution744.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

char Solution::nextGreatestLetter(vector<char> &letters, char target) {
    int n = letters.size();
    int left = -1, right = n;
    while (left != right - 1) {
        int mid = (left + right) / 2;
        if (letters[mid] <= target) {
            left = mid;
        } else {
            right = mid;
        }
    }
    return right == n ? letters[0] : letters[right];
}
