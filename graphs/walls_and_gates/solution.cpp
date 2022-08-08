#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void wallsAndGates(vector<vector<int>>& rooms) {
    int m = rooms.size();
    int n = rooms[0].size();
    queue<vector<int>> q;
    // Find all the gates
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (rooms[i][j] == 0) q.push({ i, j, 0 });
      }
    }

    vector<vector<int>> neighbors = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    // BFS for each gate
    while (!q.empty()) {
      vector<int> currCell = q.front();
      q.pop();

      // Check if it gate or has a larger distance
      if (rooms[currCell[0]][currCell[1]] == 0 || rooms[currCell[0]][currCell[1]] > currCell[2]) {
        // Update it's minimum distance
        rooms[currCell[0]][currCell[1]] = currCell[2];
        
        // Search for its neighbor
        for (vector<int> neighbor : neighbors) {
          int x = currCell[0] + neighbor[0];
          int y = currCell[1] + neighbor[1];
          // If valid index and not a wall or gate
          if (x >= 0 && x < m && y >= 0 && y < n && rooms[x][y] > 0 && rooms[x][y] > currCell[2] + 1) {
            q.push({ x, y, currCell[2] + 1 });
          }
        }
      }
    }
  }
};