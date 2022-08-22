#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int calculateMinimumHP(vector<vector<int>>& dungeon) {
    int m = dungeon.size();
    int n = dungeon[0].size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, INT_MAX)); // max value
    
    for (int i = m - 1; i >= 0; i--) {
      for (int j = n - 1; j >= 0; j--) {
      
        int minHealthRequired = min(dp[i + 1][j], dp[i][j + 1]);
        if (minHealthRequired == INT_MAX) minHealthRequired = 0;
        dp[i][j] = dungeon[i][j] - minHealthRequired;
        if (dp[i][j] >= 0) {
          // If no initial health needed
          dp[i][j] = 0;
        } else {
          dp[i][j] = abs(dp[i][j]);
        }
        // cout << i << " " << j << " " << " " << minHealthRequired << " " << dp[i][j] << "\n";
      }

    }
    return dp[0][0] + 1;
  }
};