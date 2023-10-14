#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int paintWalls(vector<int>& cost, vector<int>& time) {
    int n = cost.size();
    vector<vector<int>> dp(n, vector<int>(2 * n + 2, -1));
    int INF = 1e9;

    function<int(int,int)> solve = [&](int i, int j) {
      // Base
      if (i >= n) {
        if (j < 0) {
          return INF;
        }
        return 0;
      }

      // Memorization
      if (dp[i][n + j] != -1) {
        return dp[i][n + j];
      }

      // Take the min cost between using a paid painter or a free painter
      int c = min(cost[i] + solve(i + 1, min(n - 1, j + time[i])), solve(i + 1, j - 1));

      dp[i][n + j] = c;
      return c;
    };

    return solve(0, 0);
  }
};
