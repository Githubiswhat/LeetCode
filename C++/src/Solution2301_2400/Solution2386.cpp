//
// Created by windows on 2023/3/2.
//

#include "Solution2386.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

long long kSum(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end(), [](auto a, auto b) {
        return b - a;
    });
    int n = nums.size();
    priority_queue<long long , vector<long long >, greater<long long>> minHeap;
    function<void(int, long long)> dfs = [&](int x, long long sum){
        if (x == n){
            minHeap.push(sum);
            if (minHeap.size() > 5){
                minHeap.pop();
            }
            return;
        }
        dfs(x + 1, sum + nums[x]);
        dfs(x + 1, sum);
    };
    dfs(0, 0);
    return minHeap.top();
}


int main() {
    vector<int> nums = {2, 4, -2};
    int k = 5;
    cout << "The sum of the smallest " << k << " elements is: " << kSum(nums, k) << endl;
    return 0;
}