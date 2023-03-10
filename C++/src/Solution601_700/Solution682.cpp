//
// Created by windows on 2023/3/2.
//

#include "Solution682.h"

int Solution682::calPoints(vector<string> &operations) {
    vector<int> points;
    int num = 0;
    for (string str : operations) {
        int n = points.size();
        if (str == "C"){
            num -= points[n - 1];
            points.pop_back();
        }else if (str == "D"){
            num += points[n - 1] * 2;
            points.push_back(points[n - 1] * 2);
        }else if (str == "+"){
            num += points[n - 1] + points[n - 2];
            points.push_back(points[n -1] + points[n - 2]);
        } else{
            num += stoi(str);
            points.push_back(stoi(str));
        }
    }
    return num;
}
