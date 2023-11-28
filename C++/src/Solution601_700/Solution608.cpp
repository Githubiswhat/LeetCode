//
// Created by windows on 2023/3/2.
//

#include "Solution608.h"

//select id ,
//    Case
//        When p_id is null Then "Root"
//    When id  in (select distinct p_id from tree) Then "Inner"
//    Else "Leaf"
//    End Type
//    from tree;
