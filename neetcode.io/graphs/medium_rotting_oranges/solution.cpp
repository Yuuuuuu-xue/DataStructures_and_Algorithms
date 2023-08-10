#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int orangesRotting(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int numOranges = 0;
    vector<int> q;
    vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 1) {
          numOranges ++;
        } else if (grid[i][j] == 2) {
          q.push_back(i * m + j);
          seen.insert(i * m + j);
          numOranges ++;
        }
      }
    }

    if (numOranges == 0) {
      return 0;
    }

    int numMinutes = 0;

    // Run bfs
    while(q.size() > 0) {
      vector<int> nextQ;
      for (int curr : q) {
        int i = curr / m;
        int j = curr % m;

        for (vector<int>& dir : directions) {
          int x = i + dir[0];
          int y = j + dir[1];
          // Valid cell to explore
          if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] > 0 && seen.find(x * m + y) == seen.end()) {
            nextQ.push_back(x * m + y);
            seen.insert(x * m + y);
          }
        }    
      }

      q = nextQ;
      numMinutes ++;
    }

    // All oranges become rotten orange
    if (seen.size() == numOranges) {
      return numMinutes - 1;
    }
    return -1;
  }
};