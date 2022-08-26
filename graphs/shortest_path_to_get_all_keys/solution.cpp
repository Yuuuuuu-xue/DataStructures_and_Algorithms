#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int shortestPathAllKeys(vector<string>& grid) {
    queue<vector<int>> q;
    int numKeys = 0;
    int allKeys = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == '@') q.push({i, j, 0});
        else if (grid[i][j] >= 97 && grid[i][j] <= 122) {
          allKeys |= 1 << numKeys;
          numKeys ++;
        }
      }
    }

    unordered_set<string> seen;
    int o = 0;
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    while (!q.empty()) {
      int s = q.size();
      while (s--) {
        // If we have all the keys
        if (q.front()[2] == allKeys) {
          return o;
        }

        // Perform bfs
        for (pair<int, int>& d : directions) {
          int x = q.front()[0] + d.first;
          int y = q.front()[1] + d.second;
          // Valid cell
          if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && grid[x][y] != '#') {
            int currKey = q.front()[2];
            // If current cell is a key
            if (grid[x][y] >= 97 && grid[x][y] <= 122) {
              // Pick up the key
              currKey |= 1 << (grid[x][y] - 97);
            } else if (grid[x][y] >= 65 && grid[x][y] <= 90 && ((currKey & (1 << (grid[x][y] - 65))) == 0)) {
              // A lock and we do not have the key
              continue;
            }

            // Build the hashkey
            string hashKey = to_string(x) + " " + to_string(y) + " " + to_string(currKey);
            // Check if we visit the cell or not
            if (seen.find(hashKey) == seen.end()) {
              seen.insert(hashKey);
              q.push({x, y, currKey});
            }
          }
        }

        q.pop();
      }
      o ++;
    }
    return -1;
  }
};