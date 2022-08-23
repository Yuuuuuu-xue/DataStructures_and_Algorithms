#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

  void dfs(vector<vector<int>>& grid, queue<pair<int, int>>& q, int i, int j, int n) {
    // All the cells of island 1 will be marked as 2
    grid[i][j] = 2;
    q.push({i, j});
    // dfs all directions
    for (pair<int, int>& d : directions) {
      if (i + d.first >= 0 && i + d.first < n && j + d.second >= 0 && j + d.second < n && grid[i + d.first][j + d.second] == 1) {
        dfs(grid, q, i + d.first, j + d.second, n);
      }
    }
  }

public:
  int shortestBridge(vector<vector<int>>& grid) {
    // For BFS, initial value will be one island's cell
    queue<pair<int, int>> q;
    int n = grid.size();
    // Perform DFS to find first island
    for (int i = 0; i < n; i++) {
      bool findOne = false;
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == 1) {
          findOne = true;
          dfs(grid, q, i, j, n);
          break;
        }
      }
      if (findOne) break;
    }

    // Now perform BFS explore the cell of value 0 and 1, if we see 1, then stop and return
    int o = 0;
    while (!q.empty()) {
      int s = q.size();
      while (s--) {
        // cout << o << " " << q.front().first << " " << q.front().second << "\n";
        // bfs all valid cells
        for (pair<int, int>& d : directions) {
          int x = q.front().first + d.first;
          int y = q.front().second + d.second;
          if (x >= 0 && x < n && y >= 0 && y < n && grid[x][y] < 2) {
            // Find another land
            if (grid[x][y] == 1) {
              return o;
            }
            // Mark current cell as visited
            grid[x][y] = 2;
            q.push({x, y});
          }
        }

        q.pop();
      }
      o ++;
    }
    // Should not reach here
    return o - 1;
  }
}; 