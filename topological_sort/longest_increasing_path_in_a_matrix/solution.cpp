#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int longestIncreasingPath(vector<vector<int>>& matrix) {
    // Build the graph
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> outDegree(m, vector<int>(n, 0));
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    queue<pair<int, int>> leaves;
    
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j ++) {
        int key = i * n + j;
        for (pair<int, int>& d : directions) {
          int x = i + d.first;
          int y = j + d.second;
          if (x >= 0 && x < m && y >= 0 && y < n && matrix[x][y] > matrix[i][j]) {
            outDegree[i][j] ++;
          }
        }
        if (outDegree[i][j] == 0) {
          leaves.push({i, j});
        } 
      }
    }

    int o = 0;
    while (!leaves.empty()) {
      int s = leaves.size();
      while (s--) {
        pair<int, int>& leaf = leaves.front();
        for (pair<int, int>& d : directions) {
          int x = leaf.first + d.first;
          int y = leaf.second + d.second;
          // valid neighbor, since the leaf node will be the one with higher value
          if (x >= 0 && x < m && y >= 0 && y < n && matrix[x][y] < matrix[leaf.first][leaf.second] && --outDegree[x][y] == 0) {
            leaves.push({x, y});
          }
        }
        leaves.pop();
      }
      o ++;
    }
    return o;
  }
};