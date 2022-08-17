#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  // Return true if cycle
  bool dfs(unordered_map<int, vector<int>>& graph, unordered_map<int, int>& mark, vector<int> &path, int curr) {
    // if n has a permanent mark
    if (mark[curr] == 2) return false;
    // if n has a temporary mark
    if (mark[curr] == 1) return true;
    
    // Mark n as a temporary mark
    mark[curr] = 1;

    // visit each neigbor node
    for (int neighbor : graph[curr]) {
      if (dfs(graph, mark, path, neighbor)) return true;
    }

    // Remove temporary mark from n and mark as permanent mark
    mark[curr] = 2;

    // add n to the head of L
    path.push_back(curr);
    return false;
  }

  vector<int> topologicalSort(unordered_map<int, vector<int>>& graph, int n) {
    vector<int> path;
    // value is 0 if not visited before, 1 if temporary mark, 2 if permanent mark
    unordered_map<int, int> mark;
    // Since course is from 0 to n - 1 (inclusive)
    for (int i = 0; i < n; i++) {
      // Not visit this before
      if (mark[i] == 0) {
        if (dfs(graph, mark, path, i)) {
          // Contains a cycle
          return {};
        }
      }
    }
    
    // Reverse the path
    reverse(path.begin(), path.end());
    return path;
  }

public:
  vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    // Build the graph
    unordered_map<int, vector<int>> graph;
    for (vector<int> pre : prerequisites) graph[pre[1]].push_back(pre[0]);

    // Run the topological sort
    return topologicalSort(graph, numCourses);
  }
};