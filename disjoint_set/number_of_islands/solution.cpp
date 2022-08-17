#include <bits/stdc++.h>

using namespace std;

class DisjointSet {
  public:
    vector<int> parent;
    vector<int> rank;
    DisjointSet(int n) {
      // n + 1 so dummy index 0
      parent = vector<int>(n + 1);
      rank = vector<int>(n + 1);
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
      return true;
    }
};

class Solution {
public:
  int numIslands(vector<vector<char>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int c = 0;
    DisjointSet ds(m * n);
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        // We will check neighbor for the bottom and right since we loop over each row and each colunmn
        if (grid[i][j] == '1') {
          c ++;
          // Bottom neighbor
          if (i + 1 < m && grid[i + 1][j] == '1') {
            if (ds.unionSets(i * n + j, (i + 1) * n + j)) c--;
          }
          // Right neighbor
          if (j + 1 < n && grid[i][j + 1] == '1') {
            if (ds.unionSets(i * n + j, i * n + j + 1)) c--;
          }
          // cout << c << "\n";
        }
      }
    }
    return c;
  }
};