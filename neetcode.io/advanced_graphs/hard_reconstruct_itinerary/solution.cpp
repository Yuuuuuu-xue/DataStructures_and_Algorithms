#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void dfs(unordered_map<string, vector<string>>& graph, string currAirport, vector<string>& path) {
    while(graph[currAirport].size() > 0) {
      string nextAirport = graph[currAirport].back();
      graph[currAirport].pop_back();
      dfs(graph, nextAirport, path);
    }
    path.push_back(currAirport);
  }
  
  vector<string> findItinerary(vector<vector<string>>& tickets) {
    unordered_map<string, vector<string>> graph;
    for (vector<string>& edge : tickets) {
      if (graph.find(edge[0]) == graph.end()) {
        graph[edge[0]] = { edge[1] };
      } else {
        graph[edge[0]].push_back(edge[1]);
      }
    }

    // Sort the airports from largest to smallest
    for (const auto& p : graph) {
      sort(graph[p.first].begin(), graph[p.first].end(), greater<string>());
    }

    vector<string> path;
    dfs(graph, "JFK", path);
    
    // Reverse the path
    reverse(path.begin(), path.end());
    return path;
  }
};