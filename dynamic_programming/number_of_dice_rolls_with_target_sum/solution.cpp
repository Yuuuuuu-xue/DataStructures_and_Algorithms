#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int MOD = 1e9 + 7;

  int solve(vector<vector<int>>&dp, int n, int k, int target) {
    if (dp[n][target] != -1) {
      return dp[n][target];
    }
    
    if (n == 0) {
      if (target == 0) {
        dp[n][target] = 1;
        return 1;
      } else {
        dp[n][target] = 0;
        return 0;
      }
    }

    long long o = 0;
    for (int r = 1; r <= min(k, target); r++) {
      o = (o + solve(dp, n - 1, k, target - r)) % MOD;
    }
    dp[n][target] = o;
    return o;
  }

  int numRollsToTarget(int n, int k, int target) {
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
    return solve(dp, n, k, target);
  }
};