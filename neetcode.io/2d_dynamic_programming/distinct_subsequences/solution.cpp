#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numDistinct(string s, string t) {
    int n = s.size();
    int m = t.size();
    if (n < m) return 0;

    vector<vector<unsigned int>> dp(n + 1, vector<unsigned int>(m + 1, 0));
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= m; j++) {
        if (j == 0) {
          dp[i][j] = 1;
        } else if (i == 0) {
          // j > 0
          dp[i][j] = 0;
        } else {
          // i > 0 and j > 0
          if (s[i - 1] == t[j - 1]) {
            dp[i][j] += dp[i - 1][j - 1];
          }
          dp[i][j] += dp[i - 1][j];
        }
      }
    }

    return dp[n][m];
  }
};