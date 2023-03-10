//
// Created by windows on 2023/3/2.
//

#include "Solution125.h"

bool Solution125::isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while(i < j){
        if (!isalnum(s[i])){
            i++;
        }else if (!isalnum(s[j])){
            j--;
        }else if(tolower(s[i++]) != tolower(s[j--])){
            return false;
        }
    }
    return true;
}
