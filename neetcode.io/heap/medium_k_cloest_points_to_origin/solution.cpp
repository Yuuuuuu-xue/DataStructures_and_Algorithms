#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  struct Comparator {
    bool operator()(vector<int>& a, vector<int>& b) {
      return a[0] * a[0] + a[1] * a[1] < b[0] * b[0] + b[1] * b[1];
    }
  };

  vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    priority_queue<vector<int>, vector<vector<int>>, Comparator> pq;

    for (vector<int>& point : points) {
      pq.push(point);
      if (pq.size() > k) pq.pop();
    }

    vector<vector<int>> o;
    while (!pq.empty()) {
      o.push_back(pq.top());
      pq.pop();
    }
    return o;
  }
};