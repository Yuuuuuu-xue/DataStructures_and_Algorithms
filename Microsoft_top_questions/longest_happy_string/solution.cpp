#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string longestDiverseString(int a, int b, int c) {
    // Build the priority queue
    priority_queue<pair<int, char>> pq;
    if (a > 0) pq.push(make_pair(a, 'a'));
    if (b > 0) pq.push(make_pair(b, 'b'));
    if (c > 0) pq.push(make_pair(c, 'c'));

    string o = "";

    while (!pq.empty()) {
      auto p = pq.top();
      pq.pop();
      if (o.size() < 2 || o[o.size() - 2] != p.second || o.back() != p.second) {
        o += p.second;
      } else {
        // Two same character, need to try another one
        // If priority queue is empty, then cannot try other characters
        if (pq.empty()) return o;
        auto p2 = pq.top();
        pq.pop();
        o += p2.second;
        p2.first -= 1;
        if (p2.first > 0) pq.push(p2);
        o += p.second;
      }

      p.first -= 1;
      if (p.first > 0) pq.push(p);
    }
    return o;
  }
};