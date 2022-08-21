#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

  struct Comparator {
    bool operator()(const pair<string, int>&p1, const pair<string, int>&p2) {
      if (p1.second == p2.second) {
        return p1.first > p2.first;
      } else {
        return p1.second < p2.second;
      }
    }
  };

  vector<string> topKFrequent(vector<string>& words, int k) {
    // Build the map
    unordered_map<string, int> m;
    for (string& word : words) m[word] ++;
    
    // Build the priority queue
    priority_queue<pair<string, int>, vector<pair<string, int>>, Comparator> pq;
    for (auto p : m) pq.push(p);
    
    // Build the output
    vector<string> o;
    for (int i = 0; i < k; i++) {
      o.push_back(pq.top().first);
      pq.pop();
    }
    return o;
  }
};