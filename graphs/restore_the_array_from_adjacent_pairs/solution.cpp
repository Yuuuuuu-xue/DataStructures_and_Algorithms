#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void dfs(unordered_map<int, vector<int>>& graph, vector<int>& o, unordered_set<int>& seen, int curr) {
    if (graph.find(curr) == graph.end()) {
      return;
    }
    seen.insert(curr);
    o.push_back(curr);
    bool rightSide = true;
    for (int neighbor : graph[curr]) {
      if (seen.find(neighbor) == seen.end()) {
        if (!rightSide) {
          // Need to append in the left side, thus reverse the array
          reverse(o.begin(), o.end());
        }
        dfs(graph, o, seen, neighbor);
        // Since we already append to the right, thus need to append to the left side
        rightSide = false;
      }
    }
  }
  
  vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
    unordered_map<int, vector<int>> graph;
    for (vector<int>& pair : adjacentPairs) {
      if (graph.find(pair[0]) == graph.end()) {
        graph[pair[0]] = { pair[1] };
      } else {
        graph[pair[0]].push_back(pair[1]);
      }

      if (graph.find(pair[1]) == graph.end()) {
        graph[pair[1]] = { pair[0] };
      } else {
        graph[pair[1]].push_back(pair[0]);
      }
    }

    vector<int> o;
    unordered_set<int> seen;
    dfs(graph, o, seen, adjacentPairs[0][0]);
    return o;
  }
};