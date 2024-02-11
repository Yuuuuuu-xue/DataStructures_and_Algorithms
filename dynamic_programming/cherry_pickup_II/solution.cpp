#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> dir = { -1, 0, 1 };

  int solve(vector<vector<int>>& grid, vector<vector<vector<int>>>& dp, int row, int first_col, int second_col) {
    if (row >= grid.size()) {
      return 0;
    }

    if (dp[row][first_col][second_col] != -1) {
      return dp[row][first_col][second_col];
    }

    if (dp[row][second_col][first_col] != -1) {
      return dp[row][second_col][first_col];
    }

    int maxCherries = 0;

    for (int d : dir) {
      int next_first_col = first_col + d;

      if (next_first_col >= 0 && next_first_col < grid[0].size()) {

        for (int dd : dir) {
          int next_second_col = second_col + dd;

          if (next_second_col >= 0 && next_second_col < grid[0].size()) {

            int currCherries = next_first_col == next_second_col ? grid[row][next_first_col] : grid[row][next_first_col] + grid[row][next_second_col];
            maxCherries = max(maxCherries, currCherries + solve(grid, dp, row + 1, next_first_col, next_second_col));

          }

        }

      }
    }
    dp[row][first_col][second_col] = maxCherries;
    return dp[row][first_col][second_col];
  }

  int cherryPickup(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
    
    return solve(grid, dp, 1, 0, m - 1) + grid[0][0] + grid[0][m - 1]; 
  }
};