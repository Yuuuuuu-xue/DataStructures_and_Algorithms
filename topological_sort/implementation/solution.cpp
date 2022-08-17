#include <bits/stdc++.h>

using namespace std;

class Solution {
  private:
  void dfs(unordered_map<int, vector<int>>& graph, unordered_map<int, int>& mark, vector<int> &path, int curr) {
    // if n has a permanent mark
    if (mark[curr] == 2) return;
    // if n has a temporary mark
    if (mark[curr] == 1) throw invalid_argument("Graph is not directed acyclic grapph (DAG)");
    
    // Mark n as a temporary mark
    mark[curr] = 1;

    // visit each neigbor node
    for (int neighbor : graph[curr]) dfs(graph, mark, path, neighbor);

    // Remove temporary mark from n and mark as permanent mark
    mark[curr] = 2;

    // add n to the head of L
    path.push_back(curr);
  }

  public:
  vector<int> topologicalSort(unordered_map<int, vector<int>>& graph) {
    vector<int> path;
    // value is 0 if not visited before, 1 if temporary mark, 2 if permanent mark
    unordered_map<int, int> mark;
    for (auto p : graph) {
      // Not visit this before
      if (mark[p.first] == 0) dfs(graph, mark, path, p.first); 
    }
    
    // Reverse the path
    reverse(path.begin(), path.end());
    return path;
  }
};