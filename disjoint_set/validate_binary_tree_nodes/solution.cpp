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
      size = vector<int>(n + 1, 1);
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
      size[parentV] += size[parentU];
      size[parentU] = size[parentV];
      return true;
    }
};

class Solution {
public:
  bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
    DisjointSet ds(n - 1);
    unordered_set<int> hasParent;
    for (int i = 0; i < n; i++) {

      if (leftChild[i] != -1) {
        // Belongs to the same group, then a cycle
        if (!ds.unionSets(i, leftChild[i])) {
          return false;
        }
        // leftChild has a parent
        if (hasParent.find(leftChild[i]) != hasParent.end()) {
          return false;
        }
        hasParent.insert(leftChild[i]); 
      }
      if (rightChild[i] != -1) {
        if (!ds.unionSets(i, rightChild[i])) {
          return false;
        }
        if (hasParent.find(rightChild[i]) != hasParent.end()) {
          return false;
        }
        hasParent.insert(rightChild[i]);
      }
    }
    int maxSize = 0;
    for (int s : ds.size) {
      maxSize = max(maxSize, s);
    }
    return maxSize == n;
  }
};

