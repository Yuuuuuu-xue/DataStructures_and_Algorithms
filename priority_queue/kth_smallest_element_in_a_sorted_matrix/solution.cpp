#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int kthSmallest(vector<vector<int>>& matrix, int k) {
    // Default max heap
    priority_queue<tuple<int, int, int>> pq;

    for (int i = 0; i < matrix.size(); i++) pq.push({-matrix[i][0], 0, i});

    // At the end, we can simply return the top value
    for (int i = 0; i < k - 1; i ++) {
      tuple<int, int, int> topValue = pq.top();
      pq.pop();
      if (get<1>(topValue) < matrix.size() - 1) {
        pq.push({-matrix[get<2>(topValue)][get<1>(topValue) + 1], get<1>(topValue) + 1, get<2>(topValue)});
      }
    }
    return -get<0>(pq.top());
  }
};
