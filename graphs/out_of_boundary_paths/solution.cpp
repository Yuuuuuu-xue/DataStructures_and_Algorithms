#include <bits/stdc++.h>

using namespace std;

class Solution {
public:  
  vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
  int MOD = 1e9 + 7;

  int dfs(int m, int n, int maxMove, int i, int j, vector<vector<vector<long long>>>& dp) {

    if (dp[i][j][maxMove] != -1) {
      return dp[i][j][maxMove];
    }
    if (maxMove == 0) {
      return 0;
    }
    long long o = 0;
    for (auto &dir : directions) {
      int x = i + dir[0];
      int y = j + dir[1];
      if (x < 0 || x >= m || y < 0 || y >= n) {
        o += 1;
      } else {
        o = (o + dfs(m, n, maxMove - 1, x, y, dp)) % MOD;
      }
    }
    dp[i][j][maxMove] = o % MOD;
    return dp[i][j][maxMove];
  }

  int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
    vector<vector<vector<long long>>> dp(m, vector<vector<long long>>(n, vector<long long>(maxMove + 1, -1)));
    return dfs(m, n, maxMove, startRow, startColumn, dp);
  }
};