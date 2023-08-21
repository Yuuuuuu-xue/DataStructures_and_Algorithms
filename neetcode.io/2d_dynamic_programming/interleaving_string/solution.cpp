#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
      // - `if i == 0 and j == 0`, both empty string, thus `true`
      // - `if i == 0`, then s1 is empty string and we must use s2, thus `s2[j - 1] == s3[i + j - 1] && dp[i][j - 1] == true`
      // - `if j == 0`, then s2 is empty string and we must use s1, thus `s1[i - 1] == s3[i + j - 1] && dp[i - 1][j] == true`
      // - `if i > 0 and j > 0`, then
      //   - `s1[i - 1] == s3[i + j - 1] && dp[i - 1][j] == true` or
      //   - `s2[j - 1] == s3[i + j - 1] && dp[i][j - 1] == true`

      int n = s1.size();
      int m = s2.size();
      if (n + m != s3.size()) {
        return false;
      }

      vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

      for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
          if (i == 0 && j == 0) {
            dp[i][j] = true;
          } else if (i == 0 && s2[j - 1] == s3[i + j - 1]) {
            dp[i][j] = dp[i][j - 1];
          } else if (j == 0 && s1[i - 1] == s3[i + j - 1]) {
            dp[i][j] = dp[i - 1][j];
          } else if (i > 0 && j > 0) {
            dp[i][j] = (s1[i - 1] == s3[i + j - 1] && dp[i - 1][j]) || (s2[j - 1] == s3[i + j - 1] && dp[i][j - 1]);
          }
        }
      }

      return dp[n][m];
    }
};