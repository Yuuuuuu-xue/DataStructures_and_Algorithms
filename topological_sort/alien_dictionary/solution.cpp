#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  bool topologicalSort(unordered_map<char, unordered_set<char>>& graph, unordered_map<char, int>& seen, char curr, string& ordering) {
    if (seen[curr] == 1) return false;
    seen[curr] = 1;
    for (char neighbor : graph[curr]) {
      if (neighbor != curr && seen[neighbor] < 2 && !topologicalSort(graph, seen, neighbor, ordering)) {
        return false;
      }
    }
    ordering.push_back(curr);
    seen[curr] = 2;
    return true;
  }

public:
  string alienOrder(vector<string>& words) {
    // Build the graph
    unordered_map<char, unordered_set<char>> graph;
    unordered_map<char, int> seen;
    unordered_set<char> unseen;
    string ordering = "";

    if (words.size() == 1) {
      for (char c : words[0]) {
        if (unseen.find(c) == unseen.end()) {
          unseen.insert(c);
          ordering.push_back(c);
        }
      }
      return ordering;
    }

    for (int i = 0; i < words.size() - 1; i++) {
      // Find the first different character
      int j = 0;
      for (; j < min(words[i].size(), words[i + 1].size()); j++) {
        seen[words[i][j]] = 0;
        graph[words[i][j]].insert(words[i][j]);
        if (words[i][j] != words[i + 1][j]) break;
      }

      for (int k = j; k < words[i].size(); k++) unseen.insert(words[i][k]);
      for (int k = j; k < words[i + 1].size(); k++) unseen.insert(words[i + 1][k]);

      // If j is the size, then no such character exists
      if (j == min(words[i].size(), words[i + 1].size())) {
        // If words[i].size >= words[i + 1].size then not sorted in increasing order
        if (words[i].size() > words[i + 1].size()) return "";
      } else {
        // find an edge
        seen[words[i][j]] = 0;
        seen[words[i + 1][j]] = 0;
        graph[words[i][j]].insert(words[i + 1][j]);
      }
    }


    for (auto &p : seen) {
      if (seen[p.first] == 0) {
        if (!topologicalSort(graph, seen, p.first, ordering)) {
          // Cycle
          return "";
        }
      }
    }
    
    for (char c : unseen) {
      if (seen.find(c) == seen.end()) {
        ordering.push_back(c);
      }
    }

    reverse(ordering.begin(), ordering.end());
    return ordering;
  }
};