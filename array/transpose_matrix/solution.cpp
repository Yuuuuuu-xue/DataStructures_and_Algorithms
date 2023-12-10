#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> o(m, vector<int>(n));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        o[j][i] = matrix[i][j];
      }
    }
    return o;
  }
};