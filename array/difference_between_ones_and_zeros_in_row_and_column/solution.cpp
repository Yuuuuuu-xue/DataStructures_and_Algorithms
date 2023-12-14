#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    vector<int> row(n, 0);
    vector<int> col(m, 0);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 1) {
          row[i] ++;
          col[j] ++;
        }
      }
    }

    vector<vector<int>> diff(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        diff[i][j] = row[i] + col[j] - (n - row[i]) - (m - col[j]);
      }
    }
    return diff;
  }
};