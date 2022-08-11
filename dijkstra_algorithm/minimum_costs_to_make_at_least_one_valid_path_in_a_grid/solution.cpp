#include <bits/stdc++.h>

using namespace std;

class Compare {
public:
  bool operator()(vector<int> a, vector<int> b) {
    return a[2] >= b[2];
  }
};

class Solution {
public:
  int minCost(vector<vector<int>>& grid) {
    // Build the graph
    unordered_map<int, vector<vector<int>>> graph;
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> directions = {{0,1}, {0,-1}, {1,0}, {-1,0}};

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        for (int k = 0; k < directions.size(); k++) {
          int x = i + directions[k][0];
          int y = j + directions[k][1];
          if (x >= 0 && x < m && y >= 0 && y < n) {
            // cout << i << " " << j << ", " << x << " " << y << " " << bool(signToDirection[grid[x][y]] != direction) << " " << grid[x][y] << " " << direction[0] << "," << direction[1] << "\n";
            graph[i * n + j].push_back({x, y, grid[i][j] - 1 != k});
          }
        }
      }
    }

    // Run the Dijkstra
    priority_queue<vector<int>, vector<vector<int>>, Compare> pq;
    pq.push({0, 0, 0});
    unordered_map<int, int> dist;

    while (!pq.empty()) {
      // cout << pq.top()[0] << " " << pq.top()[1] << " " << pq.top()[2] << "\n";
      // Find the target element, then simply return it.
      if (pq.top()[0] == m - 1 && pq.top()[1] == n - 1) return dist[(m - 1) * n + (n - 1)];
      int topEncodedKey = pq.top()[0] * n + pq.top()[1];
      pq.pop();
      // Loop over its neighbor
      for (vector<int> neighbor : graph[topEncodedKey]) {
        int alt = dist[topEncodedKey] + neighbor[2];
        // cout << "neighbor: " << neighbor[0] << " " << neighbor[1] << " " << alt << "\n";
        int encodedKey = neighbor[0] * n + neighbor[1];
        if (dist.find(encodedKey) == dist.end() || alt < dist[encodedKey]) {
          dist[encodedKey] = alt;
          pq.push({neighbor[0], neighbor[1], alt});
        }
      }
    }
    return -1;
  }
};