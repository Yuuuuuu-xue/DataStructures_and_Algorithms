#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  struct Comparator {
    bool operator()(vector<int>& v1, vector<int>& v2) {
      return v1[0] > v2[0];
    }
  };

  struct PairHash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ (h2 << 1);
    }
  };
  
  int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
    // Build the graph
    unordered_map<int, vector<pair<int, int>>> graph;
    for (vector<int>& flight : flights) {
      if(graph.find(flight[0]) == graph.end()) {
        graph[flight[0]] = { make_pair(flight[1], flight[2]) };
      } else {
        graph[flight[0]].push_back(make_pair(flight[1], flight[2]));
      }
    }

    // Perform bfs
    priority_queue<vector<int>, vector<vector<int>>, Comparator> pq;
    unordered_map<pair<int, int>, int, PairHash> visited;
    pq.push({ 0, src, 0 });
    visited[make_pair(src, 0)] = 0;
    while (pq.size() > 0) {
      vector<int> top = pq.top();

      pq.pop();
      // cout << top[0] << "," << top[1] << "," << top[2] << "\n";
      
      // Reach to the end
      if (top[1] == dst) {
        return top[0];
      }

      // Loop over its neighbor
      if (graph.find(top[1]) != graph.end()) {
        for (pair<int, int>&p : graph[top[1]]) {
          pair<int, int> key = make_pair(p.first, top[2] + 1);
          if (top[2] + 1 <= k + 1 && (visited.find(key) == visited.end() || top[0] + p.second < visited[key])) {
            pq.push({ top[0] + p.second, p.first, top[2] + 1 });
            visited[key] = top[0] + p.second;
          }
        }
      }
    }
    return -1;
  }
};

0 -> 3 (2) -> 1 (4) -> 4 (5)
0 -> 3 (2) -> 1 (4) -> 2 (9)
0 -> 1 (5)

