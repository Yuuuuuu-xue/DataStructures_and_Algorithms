#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> countBits(int n) {
    vector<int> dp;
    dp.push_back(0);
    for (int i = 1; i <= n; i++) {
      dp.push_back(dp[i >> 1] + (i % 2 != 0));
    }
    return dp;
  }
};