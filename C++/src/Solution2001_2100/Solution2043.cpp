//
// Created by windows on 2023/3/2.
//

#include "Solution2043.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
using namespace std;

class Bank {
private:
  vector<long long>& list;
public:
  Bank(vector<long long> &balance) : list(balance) {
  }

  bool transfer(int account1, int account2, long long money) {
    if (account1 > list.size() || account2 > list.size() || list[account1 - 1] < money){
      return false;
    }
    list[account1 - 1] -= money;
    list[account2 - 1] += money;
    return true;
  }

  bool deposit(int account, long long money) {
    if (account > list.size()){
      return false;
    }
    list[account - 1] += money;
    return true;
  }

  bool withdraw(int account, long long money) {
    if (account > list.size() || list[account - 1] < money) {
      return false;
    }
    list[account - 1] -= money;
    return true;
  }
};
