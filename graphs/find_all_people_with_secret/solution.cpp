#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  struct Compare {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
      return p1.second > p2.second;
    }
  };

  vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
    unordered_map<int, vector<pair<int, int>>> graph;
    for (vector<int>& meeting : meetings) {
      if (graph.find(meeting[0]) == graph.end()) {
        graph[meeting[0]] = {};
      }
      graph[meeting[0]].push_back(make_pair(meeting[1], meeting[2]));

      if (graph.find(meeting[1]) == graph.end()) {
        graph[meeting[1]] = {};
      }
      graph[meeting[1]].push_back(make_pair(meeting[0], meeting[2]));
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
    pq.push(make_pair(0, 0));
    pq.push(make_pair(firstPerson, 0));

    unordered_set<int> seen;

    while (!pq.empty()) {
      pair<int, int> t = pq.top();
      pq.pop();

      if (seen.find(t.first) != seen.end()) {
        continue;
      }
      seen.insert(t.first);

      if (graph.find(t.first) == graph.end()) {
        continue;
      }

      for (pair<int, int>& p : graph[t.first]) {
        if (seen.find(p.first) == seen.end() && p.second >= t.second) {
          pq.push(p);
        }
      }
    }

    vector<int> o;
    for (int num : seen) {
      o.push_back(num);
    }
    return o;
  }
};
