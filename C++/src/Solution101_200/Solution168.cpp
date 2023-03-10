//
// Created by windows on 2023/3/2.
//

#include "Solution168.h"

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
