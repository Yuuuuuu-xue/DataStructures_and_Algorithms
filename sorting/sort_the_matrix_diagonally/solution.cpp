#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
    // Get each diagonal as a list
    unordered_map<int, vector<int>> antiDiagonals;
    int m = mat.size();
    int n = mat[0].size();
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        antiDiagonals[i - j].push_back(mat[i][j]);
      }
    }

    // Sort the matrix
    for (auto& p : antiDiagonals) {
      sort(p.second.begin(), p.second.end());
    }

    // Fill back the sorted values
    for (int key = m; key >= -n; key--) {
      int idx = 0;
      for (int i = max(key, 0); i < m && i - key >= 0 && i - key < n; i++) {
        // i - j = key, thus j = i - key
        mat[i][i - key] = antiDiagonals[key][idx++];
      }
    }

    return mat;
  }
};