#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minCut(string s) {
    // Compute the palindrome dp
    vector<vector<bool>> palindromeDp(s.size(), vector<bool>(s.size()));
    for (int size = 1; size <= s.size(); size++) {
      for (int i = 0; i <= s.size() - size; i++) {
        int j = i + size - 1;
        if (s[i] == s[j] && (j - i <= 2 || palindromeDp[i + 1][j - 1])) {
          palindromeDp[i][j] = true;
        }
      }
    }

    // Compute the dp
    vector<int> dp(s.size());
    for (int i = 1; i < s.size(); i++) {
      if (palindromeDp[0][i]) {
        dp[i] = 0;
      } else {
        dp[i] = i;
        for (int k = 1; k <= i; k++) {
          // s[k:i+1] is a palindrome
          if (palindromeDp[k][i]) {
            dp[i] = min(dp[i], 1 + dp[k - 1]);
          }
        }
      }
      // cout << i << " " << dp[i] << "\n";
    }
    return dp[s.size() - 1];
  }
};