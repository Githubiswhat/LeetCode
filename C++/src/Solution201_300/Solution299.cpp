//
// Created by windows on 2023/3/2.
//

#include "Solution299.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


string getHint(string secret, string guess) {
    int bull = 0;
    int n = secret.size();
    unordered_map<char, int> hash;
    for (int i = 0; i < n; ++i) {
        if (secret[i] == guess[i]){
            bull++;
        } else{
            hash[secret[i]]++;
        }
    }

    int cow = 0;
    for (int i = 0; i < n; ++i) {
        if (secret[i] == guess[i]){
            continue;
        }
        if (hash[guess[i]] > 0){
            cow++;
            hash[guess[i]]--;
        }
    }

    return to_string(bull) + 'A' + to_string(cow) + 'B';
}