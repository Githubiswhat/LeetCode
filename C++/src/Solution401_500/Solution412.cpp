//
// Created by windows on 2023/3/2.
//

#include "Solution412.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<string> Solution412::fizzBuzz(int n) {
    vector<string> res;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0){
            res.push_back("FizzBuzz");
        }else if (i % 3 == 0){
            res.push_back("Fizz");
        }else if (i % 5 == 0){
            res.push_back("Buzz");
        } else{
            res.push_back(to_string(i));
        }
    }
    return res;
}
