//
// Created by windows on 2023/3/2.
//

#include "Solution619.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

//SELECT Max(num) as num
//FROM
//    (
//        SELECT num
//            FROM
//                MyNumbers
//                    GROUP BY num
//                        HAVING COUNT(num) = 1) as num
