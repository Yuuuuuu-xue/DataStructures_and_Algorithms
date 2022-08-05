#include <bits/stdc++.h>

using namespace std;

class Solution {

public:
  vector<string> generateParenthesis(int n) {
    vector<vector<string>> dp(n + 1);
    dp[0] = {""};
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < i; j++) {
        for (string left : dp[j]) {
          for (string right : dp[i - 1 - j]) {
            dp[i].push_back("(" + left + ")" + right);
          }
        }
      }
    }
    return dp[n];
  }
};