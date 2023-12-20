//
// Created by windows on 2023/3/2.
//

#include "Solution20.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <stack>
#include <unordered_map>

bool Solution20::isValid(string s) {
    stack<char> stack;
    unordered_map<char, char> map = {{'}', '{'}, {')', '('}, {']', '['}};
    for (char c : s) {
        if (!map.count(c)){
            stack.push(c);
        }else {
            if (stack.empty() || stack.top() != map[c]){
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}
