#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int countOrders(int n) {
    unsigned long long dp = 1;
    int m = 1e9 + 7;
    for (int i = 2; i <= n; i++) {
      dp = (dp * i * ((i - 1) * 2 + 1)) % m;
    }
    return (int)dp;
  }
};