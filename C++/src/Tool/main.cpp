//
// Created by windows on 2023/3/1.
//

// ===================== GenerateFile ==================
#include <iostream>
#include "GenerateFiles.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    GenerateFiles g;
    g.generate_files(3001, 4000);
}
// =======================================


// =====================Solution 5==================
//#include <iostream>
//#include "../Solution1_100/Solution5.h"
//
//int main() {
//    Solution s;
//    cout << s.longestPalindrome("uzhynqvopdbnkvuxizirzjsslptlhmvyfqhqvqffmqldkrrdwapbdcxqbchvxqixmvbbtalrgzvkobyxlkonkfknabjwzeoazankqzuhexhcwkbvwtioubrcujqqeqoedhploqklhgeilwwnndbnzeadzefkcvaxdhgnmocadvvzjocoweyoidhleuwhmavpdiizbwkukpstyorlwwyiwwyyyzqqgipzzlxsgcdjscdfvrrrqmllbdjkkuisxeqaprfblvjuixajhucmcvffmevaztvadrujbthlnsdrxzvbldwxbazxmilpkbccigkihcgjbtpvignmrgzdqnufaacxtihfgwrllrwgfhitxcaafunqdzgrmngivptbjgchikgiccbkplimxzabxwdlbvzxrdsnlhtbjurdavtzavemffvcmcuhjaxiujvlbfrpaqexsiukkjdbllmqrrrvfdcsjdcgsxlzzpigqqzyyywwiywwlroytspkukwbziidpvamhwuelhdioyewocojzvvdacomnghdxavckfezdaeznbdnnwwlieghlkqolphdeoqeqqjucrbuoitwvbkwchxehuzqknazaoezwjbankfknoklxybokvzgrlatbbvmxiqxvhcbqxcdbpawdrrkdlqmffqvqhqfyvmhltplssjzrizixuvknbdpovqnyhzu");
//}
// =======================================


// =====================Solution 17==================
//#include <iostream>
//#include "../Solution1_100/Solution17.h"
//
//int main() {
//    Solution s;
//    s.letterCombinations("23");
//}
// =======================================


// =====================Solution 22==================
//#include <iostream>
//#include "../Solution1_100/Solution22.h"
//
//int main() {
//    Solution s;
//    s.generateParenthesis(3);
//}
// =======================================


// =====================Solution 392==================
//#include <iostream>
//#include "../Solution301_400/Solution392.h"
//
//int main() {
//    Solution392 s;
//    cout << s.isSubsequence("aaaaaa", "bbaaaa");
//}
// =======================================


// =====================Solution 392==================
//#include <iostream>
//#include "../Solution401_500/Solution434.h"
//
//int main() {
//    Solution434 s;
//    cout << s.countSegments("Hello, my name is John");
//}
// =======================================

// =====================Solution 392==================
//#include <iostream>
//#include "../Solution401_500/Solution407.h"
//
//int main() {
//    Solution s;
//    vector<vector<int>> heightMap = {{3,3,3,3,3},{3,2,2,2,3},{3,2,1,2,3},{3,2,2,2,3},{3,3,3,3,3}};
//    cout << s.trapRainWater(heightMap);
//}
// =======================================


// =====================Solution 463==================
//#include <iostream>
//#include "../Solution401_500/Solution463.h"
//
//int main() {
//    Solution463 s;
//    vector<vector<int>> grid = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
//    cout << s.islandPerimeter(grid);
//}
// =======================================



// =====================Solution 566==================
//#include <iostream>
//#include "../Solution501_600/Solution566.h"
//
//int main() {
//    Solution566 s;
//    vector<vector<int>> grid = {{1, 2}, {3, 4}};
//    s.matrixReshape(grid, 1, 4);
//}
// =======================================



// =====================Solution 733==================
//#include <iostream>
//#include "../Solution701_800/Solution733.h"
//
//int main() {
//    Solution733 s;
//    vector<vector<int>> grid = {{1,1,1},{1,1,0},{1,0,1}};
//    vector<vector<int>> res = s.floodFill(grid, 1, 1, 2);
//    cout<< "aa";
//}
// =======================================


// =====================Solution 766==================
//#include <iostream>
//#include "../Solution701_800/Solution766.h"
//
//int main() {
//    Solution s;
//    vector<vector<int>> matrix = {{1,2,3,4},{5,1,2,3},{9,5,1,2}};
//    cout << s.isToeplitzMatrix(matrix);
//}
// =======================================



// =====================Solution 841==================
//#include <iostream>
//#include "../Solution801_900/Solution841.h"
//
//
//int main() {
//    Solution s;
//    vector<vector<int>> matrix = {{1,3},{3,0,1},{2},{0}};
//    s.canVisitAllRooms(matrix);
//}
// =======================================


// =====================Solution 1012==================
//#include <iostream>
//#include "../Solution1001_1100/Solution1012.h"
//
//int main() {
//    Solution s;
//    int a = s.numDupDigitsAtMostN(20);
//    std::cout << a;
//}
// =======================================



// =====================Solution 1616==================
//#include <iostream>
//#include "../Solution1601_1700/Solution1616.h"
//
//int main() {
//    Solution s;
//    string s1 = "pvhmupgqeltozftlmfjjde";
//    string s2 = "yjgpzbezspnnpszebzmhvp";
//    s.checkPalindromeFormation(s1, s2);
//}
// =======================================



// =====================Solution 1626==================
//#include <iostream>
//#include "../Solution1601_1700/Solution1626.h"
//
//int main() {
//    Solution s;
//    vector<int> scores{4,5,6,5};
//    vector<int> ages{2,1,2,1};
//    cout << s.bestTeamScore(scores, ages);
//}
// =======================================


// =====================Solution 1670 ==================
//#include <iostream>
//#include "../Solution1601_1700/include/Solution1670.h"
//
//int main() {
//    FrontMiddleBackQueue s;
//    s.pushFront(1);
//    s.pushFront(2);
//    s.pushFront(3);
//    s.pushFront(4);
//    cout << s.popBack()  << "  ";
//    cout << s.popBack()  << "  ";
//    cout << s.popBack()  << "  ";
//    cout << s.popBack()  << "  ";
//}
// =======================================


//#include <iostream>
//
//void printPointer(int* ptr) {
//  std::cout << "Inside function:" << std::endl;
//  std::cout << "Pointer's address: " << &ptr << std::endl;  // 打印指针本身的地址
//  std::cout << "Pointer's value (address it points to): " << ptr << std::endl;  // 打印指针所指向的地址
//}

//int main() {
//  int num = 42;
//  int* ptr = &num;
//
//  std::cout << "Outside function:" << std::endl;
//  std::cout << "Pointer's address: " << &ptr << std::endl;  // 打印指针本身的地址
//  std::cout << "Pointer's value (address it points to): " << ptr << std::endl;  // 打印指针所指向的地址
//
//  printPointer(ptr);  // 调用函数并传递指针
//
//  return 0;
//}




