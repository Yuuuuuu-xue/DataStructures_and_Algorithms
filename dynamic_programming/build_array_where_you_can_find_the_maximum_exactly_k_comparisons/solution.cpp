#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numOfArrays(int n, int m, int k) {
    const int MOD = 1e9 + 7;
    vector<vector<vector<unsigned long long>>> dp(n + 1, vector<vector<unsigned long long>>(m + 1, vector<unsigned long long>(k + 1, 0)));
    
    // Base case
    for (int j = 1; j <= m; j++) {
      dp[1][j][1] = 1; 
    }

    int currM = k;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        for (int k = 1; k <= currM; k++) {
          dp[i][j][k] = (dp[i][j][k] + j * dp[i - 1][j][k]) % MOD;
          for (int x = 1; x < j; x ++) {
            dp[i][j][k] = (dp[i][j][k] + dp[i - 1][x][k - 1]) % MOD;
          }
        }
      }
    }

    unsigned long long o = 0;
    for (int j = 0; j <= m; j++) {
      o = (o + dp[n][j][currM]) % MOD;
    }
    return (int)o;
  }
};