#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isMatch(string s, string p) {
    vector<vector<int>> dp(s.size() + 1, vector<int>(p.size() + 1));
    dp[0][0] = true;

    // Empty string and pattern only consisting *
    for (int j = 1; j <= p.size() && p[j - 1] == '*'; j++) {
      dp[0][j] = true;
    }

    for (int i = 1; i <= s.size(); i++) {
      for (int j = 1; j <= p.size(); j++) {
        if (p[j - 1] != '?' && p[j - 1] != '*') {
          dp[i][j] = s[i - 1] == p[j - 1] && dp[i - 1][j - 1];
        } else if (p[j - 1] == '?') {
          dp[i][j] = dp[i - 1][j - 1];
        } else {
          dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
        }
      }
    }
    return dp[s.size()][p.size()];
  }
};