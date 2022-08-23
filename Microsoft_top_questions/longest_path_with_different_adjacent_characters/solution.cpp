#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  int dfs(unordered_map<int, vector<int>>& graph, string& s, int curr, int& o) {
    priority_queue<int> pq;
    for (int& neighbor : graph[curr]) {
      int temp = dfs(graph, s, neighbor, o);
      if (s[curr] != s[neighbor]) {
        pq.push(temp);
      }
    }
    // Pop top two to construct the max value
    int first = pq.empty() ? 0 : pq.top();
    if (!pq.empty()) pq.pop();
    int second = pq.empty() ? 0 : pq.top();
    o = max(o, first + second + 1);
    return first + 1;
  }

public:
  int longestPath(vector<int>& parent, string s) {
    unordered_map<int, vector<int>> graph;
    for (int i = 0; i < parent.size(); i++) {
      graph[parent[i]].push_back(i);
    }
    int o = 0;
    dfs(graph, s, 0, o);
    return o;
  }
};