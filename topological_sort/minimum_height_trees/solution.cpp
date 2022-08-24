#include <bits/stdc++.h>

using namespace std;

class Solution {

public:
  vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
    if (n == 1) return { 0 };
    // Build the graph
    unordered_map<int, unordered_set<int>> graph;
    for (vector<int>& edge : edges) {
      graph[edge[0]].insert(edge[1]);
      graph[edge[1]].insert(edge[0]);
    }

    // Find all the leaves
    queue<int> leaves;
    for (auto& p : graph) {
      if (p.second.size() == 1) leaves.push(p.first);
    }

    vector<int> o;
    while (!leaves.empty()) {
      int s = leaves.size();
      if (n - s == 0) {
        while (s--) {
          o.push_back(leaves.front());
          leaves.pop();
        }
      } else {
        n -= s;
        while (s--) {
          for (int neighbor : graph[leaves.front()]) {
            graph[neighbor].erase(leaves.front());
            if (graph[neighbor].size() == 1) leaves.push(neighbor);
          }
          graph.erase(leaves.front());
          leaves.pop();
        } 
      }
    }
    return o;
  }
};