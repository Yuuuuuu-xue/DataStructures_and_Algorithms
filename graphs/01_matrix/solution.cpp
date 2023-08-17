#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> dis(n, vector<int>(m, -1));
    vector<int> queue;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (mat[i][j] == 0) {
          queue.push_back(i * m + j);
          dis[i][j] = 0;
        }
      }
    }

    vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int level = 0;

    // BFS
    while (queue.size() > 0) {
      vector<int> nextQueue;
      for (int num : queue) {
        int i = num / m;
        int j = num % m;

        for (vector<int>& dir : directions) {
          int x = i + dir[0];
          int y = j + dir[1];

          // Valid and not visited
          if (x >= 0 && x < n && y >= 0 && y < m && dis[x][y] == -1) {
            dis[x][y] = level + 1;
            nextQueue.push_back(x * m + y);
          }
        }
      }
      level ++;
      queue = nextQueue;
    }

    return dis;

  }
};