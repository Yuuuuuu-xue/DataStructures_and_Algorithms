#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  struct Comparator {
    bool operator()(vector<int>& p1, vector<int>& p2) {
      return p1[0] > p2[0];
    }
  };

  int swimInWater(vector<vector<int>>& grid) {
    priority_queue<vector<int>, vector<vector<int>>, Comparator> pq;
    pq.push({ grid[0][0], 0, 0 });
    vector<vector<int>> directions = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    unordered_set<int> visited;
    visited.insert(0);
    int n = grid.size();

    while(pq.size() > 0) {
      vector<int> topElement = pq.top();
      // cout << topElement[0] << "," << topElement[1] << "," << topElement[2] << "\n";

      // Reach to the end with min depth
      if (topElement[1] == n - 1 && topElement[2] == n - 1) {
        return topElement[0];
      }
      
      pq.pop();
      
      for (vector<int>& dir : directions) {
        int x = topElement[1] + dir[0];
        int y = topElement[2] + dir[1];
        if (x >= 0 && x < n && y >= 0 && y < n && visited.find(x * n + y) == visited.end()) {
          pq.push({ max(topElement[0], grid[x][y]), x, y });
          visited.insert(x * n + y);
        }
      }
    }

    return -1;
  }
};