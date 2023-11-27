#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> directions = {
    {2, 1},
    {2, -1},
    {-2, 1},
    {-2, -1},
    {1, 2},
    {1, -2},
    {-1, 2},
    {-1, -2}
  };

  int MOD = 1e9 + 7;

  int solve(vector<vector<vector<int>>>& dp, int i, int j, int n) {
    if (dp[i][j][n] != -1) {
      return dp[i][j][n];
    }

    // cout << i << " " << j << " " << n << "\n";

    if (n == 1) {
      dp[i][j][n] = 1;
      return 1;
    }

    int curr = 0;
    for (vector<int>& dir : directions) {
      int x = i + dir[0];
      int y = j + dir[1];
      if (x >= 0 && x < 4 && y >= 0 && y < 3 && !(x == 3 && y == 0) && !(x == 3 && y == 2)) {
        curr = (curr + solve(dp, x, y, n - 1)) % MOD;
      }
    }
    dp[i][j][n] = curr;
    return dp[i][j][n];
  }
  
  int knightDialer(int n) {
    vector<vector<vector<int>>>dp(4, vector<vector<int>>(3, vector<int>(n + 1, -1)));
    int o = 0;
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 3; j++) {
        if (!(i == 3 && j == 0) && !(i == 3 && j == 2)) {
          o = (o + solve(dp, i, j, n)) % MOD;
        }
      }
    }
    return o;
  }
};