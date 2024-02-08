#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numSquares(int n) {
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j * j <= i; j ++) {
        if (dp[i - j * j] < INT_MAX) {
          dp[i] = min(dp[i], 1 + dp[i - j * j]); 
        }
      }
    }
    return dp[n];
  }
};