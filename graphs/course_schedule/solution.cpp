#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  bool dfs(unordered_map<int, vector<int>>& graph, unordered_map<int, int>& seen, int curr) {
    seen[curr] = 1;
    for (int neighbor : graph[curr]) {
      // Already visited node
      if (seen[neighbor] == 1) {
        return false;
      } else {
        if (seen[neighbor] != 2 && !dfs(graph, seen, neighbor)) {
          return false;
        }
      }
    }
    seen[curr] = 2;
    return true;
  }

public:
  bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    // Build the graph
    unordered_map<int, vector<int>> graph;
    for (vector<int>& pre : prerequisites) {
      graph[pre[1]].push_back(pre[0]);
    }

    unordered_map<int, int> seen;
    for (auto p : graph) {
      if (seen[p.first] == 0) {
        if (!dfs(graph, seen, p.first)) {
          return false;
        }
      }
    }
    return true;
  }
};