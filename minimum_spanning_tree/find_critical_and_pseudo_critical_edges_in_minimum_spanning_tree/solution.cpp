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
  vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
    // Construct edge with weight and index
    vector<pair<int, vector<int>>> edgesWithIndex; 
    for (int i = 0; i < edges.size(); i++) {
      edgesWithIndex.push_back(make_pair(i, edges[i]));
    }
    
    // Sort the edges by weight
    auto compare = [](const pair<int, vector<int>>& a, const pair<int, vector<int>>& b) {
      return a.second[2] < b.second[2];
    };
    sort(edgesWithIndex.begin(), edgesWithIndex.end(), compare);

    // Find the weight of MST
    int mstWeight = 0;
    DisjointSet ds(n);
    for (pair<int, vector<int>>& p : edgesWithIndex) {
      if (ds.unionSets(p.second[0], p.second[1])) {
        mstWeight += p.second[2];
      }
    }

    // Find the final solutions
    vector<vector<int>> outputEdges(2, vector<int>());
    int m = edgesWithIndex.size();

    for (int i = 0; i < m; i++) {
      // Do not include edges and construct MST
      int weightWithDelete = 0;
      int numEdgesWithDelete = 0;
      DisjointSet dsWithDelete(n);
      for (int j = 0; j < m; j++) {
        if (i != j) {
          if (dsWithDelete.unionSets(edgesWithIndex[j].second[0], edgesWithIndex[j].second[1])) {
            weightWithDelete += edgesWithIndex[j].second[2];
            numEdgesWithDelete ++;
          }
        }
      }
      // Number of connected edges = n - 1 for MST
      if (numEdgesWithDelete < n - 1 || weightWithDelete > mstWeight) {
        outputEdges[0].push_back(edgesWithIndex[i].first);
        continue;
      }

      // Now must include edge at index i
      int weightWithForce = edgesWithIndex[i].second[2];
      DisjointSet dsWithForce(n);
      dsWithForce.unionSets(edgesWithIndex[i].second[0], edgesWithIndex[i].second[1]);
      for (int j = 0; j < m; j++) {
        if (i != j) {
          if (dsWithForce.unionSets(edgesWithIndex[j].second[0], edgesWithIndex[j].second[1])) {
            weightWithForce += edgesWithIndex[j].second[2];
          }
        }
      }
      if (weightWithForce == mstWeight) {
        outputEdges[1].push_back(edgesWithIndex[i].first);
      }
    }

    return outputEdges;
  }
};

