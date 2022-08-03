#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> shortestDistanceColor(vector<int>& colors, vector<vector<int>>& queries) {
    unordered_map<int, vector<int>> m;
    for (int i = 0; i < colors.size(); i++) m[colors[i]].push_back(i);
    vector<int> o;
    for (vector<int> query : queries) {
      if (m.find(query[1]) == m.end()) {
        o.push_back(-1);
      } else {
        auto lowerBoundIterator = lower_bound(m[query[1]].begin(), m[query[1]].end(), query[0]);
        if (lowerBoundIterator == m[query[1]].end()) {
          o.push_back(query[0] - *prev(lowerBoundIterator));
        } else if (lowerBoundIterator != m[query[1]].begin()) {
          auto prevIterator = prev(lowerBoundIterator);
          o.push_back(min(query[0] - *prevIterator, *lowerBoundIterator - query[0]));
        } else {
          o.push_back(*lowerBoundIterator - query[0]);
        }
      }
    }
    return o;
  }
};