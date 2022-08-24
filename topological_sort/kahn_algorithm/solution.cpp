#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> topologicalSortKahnAlgorithm(int n, unordered_map<int, unordered_set<int>>& graph) {
    queue<int> leaves;
    // Find all the leaves
    for (auto& p : graph) {
      if (p.second.size() == 1) leaves.push(p.first);
    }

    vector<int> orders;
    while(!leaves.empty()) {
      int leaf = leaves.front();
      for (int neighbor : graph[leaf]) {
        graph[neighbor].erase(leaf);
        if (graph[neighbor].size() == 1) leaves.push(neighbor);
      }
      graph.erase(leaf);
      orders.push_back(leaf);
      leaves.pop();
    }

    reverse(orders.begin(), orders.end());
    return orders;
  }
};