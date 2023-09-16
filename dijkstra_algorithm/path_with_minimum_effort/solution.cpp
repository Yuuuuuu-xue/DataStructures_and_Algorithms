#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minimumEffortPath(vector<vector<int>>& heights) {
    struct Compare {
      bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.first > p2.first;
      }
    };

    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
    unordered_map<int, int> seen;
    vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int n = heights.size();
    int m = heights[0].size();

    pq.push(make_pair(0, 0));
    seen[0] = 0;

    while (pq.size() > 0) {
      // Reach to the bottom right with minimum effort
      if (pq.top().second == (n - 1) * m + m - 1) {
        return pq.top().first;
      }
      
      int i = pq.top().second / m;
      int j = pq.top().second % m;
      int topDiff = pq.top().first;
      pq.pop();

      for (vector<int>& dir : directions) {
        int x = i + dir[0];
        int y = j + dir[1];
        if (x >= 0 && x < n && y >= 0 && y < m) {
          int currDiff = abs(heights[i][j] - heights[x][y]);
          int maxDiff = max(currDiff, topDiff);
          if (seen.find(x * m + y) == seen.end() || maxDiff < seen[x * m + y]) {
            seen[x * m + y] = maxDiff;
            pq.push(make_pair(maxDiff, x * m + y));
          }
        }
      }
    }

    return -1;
  }
};
