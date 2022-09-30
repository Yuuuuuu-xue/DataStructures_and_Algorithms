#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minInsertions(string s) {
    vector<vector<int>> dp(s.size(), vector<int>(s.size(), INT_MAX));
    for (int len = 2; len <= s.size(); len++) {
      for (int i = 0; i <= s.size() - len; i++) {
        int j = i + len - 1;
        dp[i][j] = 1 + min(i >= j ? 0 : dp[i + 1][j], dp[i][j - 1]);
        if (s[i] == s[j]) {
          dp[i][j] = min(dp[i][j], i + 1 >= j - 1 ? 0 : dp[i + 1][j - 1]);
        }
        // cout << i << " " << j << " " << dp[i][j] << "\n"; 
      }
    }

    return dp[0][s.size() - 1];
  }
};