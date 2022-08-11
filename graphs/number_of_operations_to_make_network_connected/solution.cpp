#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int makeConnected(int n, vector<vector<int>>& connections) {
    if (connections.size() < n - 1) return -1;

    // Build the graph
    unordered_map<int, vector<int>> graph;
    for (vector<int> connection : connections) {
      graph[connection[0]].push_back(connection[1]);
      graph[connection[1]].push_back(connection[0]);
    }

    unordered_set<int> seen;
    int numIsolated = 0;
    for (int i = 0; i < n; i++) {
      // Visit this node before
      if (seen.find(i) != seen.end()) {
        continue;
      }

      queue<int> q;
      q.push(i);
      while (!q.empty()) {
        if (seen.find(q.front()) == seen.end()) {
          for (int neighbor : graph[q.front()]) q.push(neighbor);
          seen.insert(q.front());
        }
        q.pop();
      }
      numIsolated ++;
    }
    return numIsolated - 1;
  }
};