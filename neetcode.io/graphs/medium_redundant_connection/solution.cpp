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
  vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    DisjointSet ds(edges.size());
    vector<int> targetEdge;
    for (vector<int>& edge : edges) {
      if(!ds.unionSets(edge[0], edge[1])) {
        targetEdge = edge;
      }
    }
    return targetEdge;
  }
};