//
// Created by windows on 2023/3/2.
//

#include "Solution1616.h"

inline bool isPalindrome(string a){
    int n = a.length();
    for (int i = 0, j = n - 1; i < j; ++i, j--) {
        if (a[i] != a[j]) return false;
    }
    return true;
}

bool Solution::checkPalindromeFormation(string a, string b) {
    int n = a.length();
    if (isPalindrome(a) || isPalindrome(b)){
        return true;
    }
    int i = 0, j = n - 1;
    for (; i < j ; ++i, j--) {
        if (a[i] != b[j]) break;
    }
    if (i >= j){
        return true;
    }else if (i < j){
        if (isPalindrome(b.substr(i, n - i - i)) || isPalindrome(a.substr(i, n - i - i)))
            return true;
    }
    for (i = 0, j = n - 1; i < j ; ++i, j--) {
        if (b[i] != a[j]) break;
    }
    if (i >= j){
        return true;
    }else if (i < j){
        if (isPalindrome(b.substr(i, n - i - i)) || isPalindrome(a.substr(i, n - i - i)))
        return true;
    }
    return false;
    // pvhm upgqeltozftlmfjjde
    // yjgp zbezspnnpszebz mhvp
}

