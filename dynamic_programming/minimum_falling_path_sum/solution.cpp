#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minFallingPathSum(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<int> dir = { -1, 0, 1 };

    for (int i = n - 2; i >= 0; i--) {
      for (int j = 0; j < n; j++) {
        int m = INT_MAX;
        for (int d : dir) {
          int nextJ = j + d;
          if (nextJ >= 0 && nextJ < n) {
            m = min(m, matrix[i + 1][nextJ]);
          }
        }
        matrix[i][j] += m;
      }
    }

    int o = INT_MAX;
    for (int i = 0; i < n; i++) {
      o = min(o, matrix[0][i]);
    }
    return o;
  }
};