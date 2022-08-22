#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maximalNetworkRank(int n, vector<vector<int>>& roads) {
    // Build undirectional graph
    unordered_map<int, unordered_set<int>> graph;
    for(vector<int>& road : roads) {
      graph[road[0]].insert(road[1]);
      graph[road[1]].insert(road[0]);
    }

    // Try each pair of city and find the maximal
    size_t o = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        // An edge between i and j
        if (graph[i].find(j) != graph[i].end()) {
          o = max(o, graph[i].size() + graph[j].size() - 1);
        } else {
          o = max(o, graph[i].size() + graph[j].size());
        }
      }
    }
    return (int)o;
  }
};