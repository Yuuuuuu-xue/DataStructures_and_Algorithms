#include <bits/stdc++.h>

using namespace std;

class Graph {
public:
  unordered_map<int, vector<pair<int, int>>> graph; // vertex, weight

  Graph(int n, vector<vector<int>>& edges) {
    for (vector<int>& p : edges) {
      if (graph.find(p[0]) == graph.end()) {
        graph[p[0]] = { make_pair(p[1], p[2]) };
      } else {
        graph[p[0]].push_back(make_pair(p[1], p[2]));
      }
    }
  }
  
  void addEdge(vector<int> edge) {
    if (graph.find(edge[0]) == graph.end()) {
      graph[edge[0]] = { make_pair(edge[1], edge[2]) };
    } else {
      graph[edge[0]].push_back(make_pair(edge[1], edge[2]));
    }
  }

  struct Compare {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
      return p1.first > p2.first;
    }
  };
  
  int shortestPath(int node1, int node2) {
    unordered_map<int, int> d;
    d[node1] = 0;
    priority_queue<pair<int ,int>, vector<pair<int, int>>, Compare> pq;
    pq.push(make_pair(0, node1));
    while (!pq.empty()) {
      pair<int, int> top_pair = pq.top();
      pq.pop();

      if (top_pair.second == node2) {
        return top_pair.first;
      }

      if (graph.find(top_pair.second) == graph.end()) {
        continue;
      }

      for (pair<int, int> neighbor : graph[top_pair.second]) {
        int curr_weight = top_pair.first + neighbor.second;
        if (d.find(neighbor.first) == d.end() || d[neighbor.first] > curr_weight) {
          d[neighbor.first] = curr_weight;
          pq.push(make_pair(curr_weight, neighbor.first));
        }
      }
    }
    return -1;
  }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */