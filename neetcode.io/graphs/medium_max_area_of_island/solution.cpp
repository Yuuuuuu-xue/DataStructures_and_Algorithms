#include <bits/stdc++.h>

using namespace std;

class DisjointSet {
  public:
    vector<int> parent;
    vector<int> rank;
    vector<int> size;
    DisjointSet(int n) {
      // n + 1 so dummy index 0
      parent = vector<int>(n + 1);
      rank = vector<int>(n + 1);
      size = vector<int>(n + 1, 1); // initial node has a size of 1
      for (int i = 0; i < n + 1; i++) parent[i] = i;
    }

    // Given an element x, return the representative of x in the disjoint set
    // perform path compression
    int find(int x) {
      if (x != parent[x]) {
        parent[x] = find(parent[x]);
      }
      return parent[x];
    }

    // union two sets, return true iff they belong to different sets
    bool unionSets(int u, int v) {
      int parentU = find(u);
      int parentV = find(v);

      // If both same group, then do nothing
      if (parentU == parentV) return false;
      
      // Union by rank (higher rank will be the parent)
      if(rank[parentU] > rank[parentV]) {
        parent[parentV] = parent[parentU];
      } else if (rank[parentV] > rank[parentU]) {
        parent[parentU] = parent[parentV];
      } else {
        // Same rank, then increment the rank by 1
        parent[parentV] = parent[parentU];
        rank[parentU] ++;
      }
      size[parentU] += size[parentV];
      size[parentV] = size[parentU];
      // cout << "make set " << u << ", " << v << " " << size[parentU] << "\n";
      return true;
    }

};

class Solution {
public:
  int maxAreaOfIsland(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    DisjointSet ds(n * m);
    vector<vector<int>> directions = {{1,0}, {-1, 0}, {0, 1}, {0, -1}};
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 0) {
          continue;
        }
        for (vector<int>& dir : directions) {
          int x = i + dir[0];
          int y = j + dir[1];
          // Valid neighbor
          if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 1) {
            // cout << "(" << i << "," << j << "), (" << x << "," << y << ")\n";
            // Put them in the same group
            ds.unionSets(i * m + j, x * m + y);
          }
        }
      }
    }

    int o = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 1) {
          o = max(o, ds.size[i * m + j]);
        }
      }
    }
    return o;
  }
};