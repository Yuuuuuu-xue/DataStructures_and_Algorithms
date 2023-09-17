#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  struct PairHash {
    template <class T1, class T2>
    size_t operator() (const pair<T1, T2>& p) const {
      auto h1 = hash<T1>{}(p.first);
      auto h2 = hash<T2>{}(p.second);
      return h1 ^ (h2 << 1);
    }
  };

  int shortestPathLength(vector<vector<int>>& graph) {
    vector<pair<int, int>> q;
    int n = graph.size();
    unordered_set<pair<int, int>, PairHash> seen;
    for (int i = 0; i < n; i++) {
      pair<int, int> p = make_pair(i, 1 << i);
      q.push_back(p);
      seen.insert(p);
    }

    int cost = 0;
    while (q.size() > 0) {
      vector<pair<int, int>> nextQ;
      for (pair<int, int>& p : q) {
        // If we visit all the nodes
        if (p.second == pow(2, n) - 1) {
          return cost;
        }

        // Traverse the neighbor
        for (int neighbor : graph[p.first]) {
          int mask = p.second | (1 << neighbor);
          pair<int, int> nextNode = make_pair(neighbor, mask);
          if (seen.find(nextNode) == seen.end()) {
            nextQ.push_back(nextNode);
            seen.insert(nextNode);
          }
        }
      }
      cost ++;
      q = nextQ;
    }
    return -1;
  }
};
