//
// Created by windows on 2023/3/2.
//

#include "Solution168.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string Solution168::convertToTitle(int columnNumber) {
    string res = "";
    while (columnNumber > 0){
        columnNumber--;
        int remain = columnNumber % 26;
        res = (char)('A' + remain) + res;
        columnNumber /= 26;
    }
    return res;
}
