#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numWays(int steps, int arrLen) {
    vector<vector<int>> dp(min(arrLen, steps) + 1, vector<int>(steps + 1, -1));
    int mod = 1000000007;

    function<int(int, int)> solve = [&](int i, int currSteps) {
      // Base case
      if (currSteps == 0) {
        return i == 0 ? 1 : 0;
      }

      if (dp[i][currSteps] != -1) {
        return dp[i][currSteps];
      }

      // Stay
      dp[i][currSteps] = solve(i, currSteps - 1);
      
      // Move right
      if (i < arrLen - 1) {
        dp[i][currSteps] = (dp[i][currSteps] + solve(i + 1, currSteps - 1)) % mod;
      }
      // Move left
      if (i > 0) {
        dp[i][currSteps] = (dp[i][currSteps] + solve(i - 1, currSteps - 1)) % mod;
      }

      return dp[i][currSteps];
    };

    return solve(0, steps);
  }
};