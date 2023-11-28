//
// Created by windows on 2023/3/2.
//

#include "Solution619.h"

//SELECT Max(num) as num
//FROM
//    (
//        SELECT num
//            FROM
//                MyNumbers
//                    GROUP BY num
//                        HAVING COUNT(num) = 1) as num
