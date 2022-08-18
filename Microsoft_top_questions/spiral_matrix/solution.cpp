#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

  vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int d = 0;
    vector<int> o;
    int i = 0;
    int j = 0;
    // Not visited
    while (i >= 0 && i < matrix.size() && j >= 0 && j < matrix[0].size() && matrix[i][j] < 101) {
      // cout << i << " " << j << " " << matrix[i][j] << "\n";
      o.push_back(matrix[i][j]);
      // Mark as visited
      matrix[i][j] = 101;
      // Move the direction
      int x = i + (directions[d % 4].first);
      int y = j + (directions[d % 4].second);
      // If reach to the end or visited cell
      if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size() || matrix[x][y] >= 101) {
        d ++;
        i += (directions[d % 4].first);
        j += (directions[d % 4].second);
      } else {
        i = x;
        j = y;
      }
    }
    return o;
  }
};