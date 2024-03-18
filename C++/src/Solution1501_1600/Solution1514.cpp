//
// Created by windows on 2023/3/2.
//

#include "Solution1514.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <array>

using namespace std;


//int findRotateSteps(string ring, string key) {
//    int n = ring.size(), m = key.size();
//    int res = 0;
//    int count = 0;
//    int index = 0;
//    while (count < m){
//        if (ring[index] == key[count]){
//            res++;
//            count++;
//            continue;
//        }
//        int left, right;
//        for (left = index; left < index + n; ++left) {
//            if (ring[left % n] == key[count]){
//                break;
//            }
//        }
//        for (right = index; right > index - n; --right) {
//            if (ring[(n + right) % n] == key[count]){
//                break;
//            }
//        }
//        cout << index << "   : " << count << "   " ;
//        cout << left << "  " << right << "   " << endl;
//        if (abs(index - left) > abs(index - right)){
//            res += abs(index - right);
//            index = (n + right) % n;
//        } else{
//            res += abs(index - left);
//            index = left % n;
//        }
//    }
//    return res;
//}

int findRotateSteps(string s, string t) {
    int n = s.length(), m = t.length();

    // 先算出每个字母的最后一次出现的下标
    // 由于 s 是环形的，循环结束后的 pos 就刚好是 left[0]
    array<int, 26> pos; // 初始值不重要
    for (int i = 0; i < n; i++) {
        s[i] -= 'a';
        pos[s[i]] = i;
    }
    // 计算每个 s[i] 左边 a-z 的最近下标（左边没有就从 n-1 往左找）
    vector<array<int, 26>> left(n);
    for (int i = 0; i < n; i++) {
        left[i] = pos;
        pos[s[i]] = i; // 更新下标
    }

    // 先算出每个字母的首次出现的下标
    // 由于 s 是环形的，循环结束后的 pos 就刚好是 right[n-1]
    for (int i = n - 1; i >= 0; i--) {
        pos[s[i]] = i;
    }
    // 计算每个 s[i] 右边 a-z 的最近下标（左边没有就从 0 往右找）
    vector<array<int, 26>> right(n);
    for (int i = n - 1; i >= 0; i--) {
        right[i] = pos;
        pos[s[i]] = i; // 更新下标
    }

    vector<vector<int>> f(m + 1, vector<int>(n));
    for (int j = m - 1; j >= 0; j--) {
        char c = t[j] - 'a';
        for (int i = 0; i < n; i++) {
            if (s[i] == c) { // 无需旋转
                f[j][i] = f[j + 1][i];
            } else { // 左边最近 or 右边最近，取最小值
                int l = left[i][c], r = right[i][c];
                f[j][i] = min(f[j + 1][l] + (l > i ? n - l + i : i - l),
                              f[j + 1][r] + (r < i ? n - i + r : r - i));
            }
        }
    }
    return f[0][0] + m;
}
