#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int o = 0;

    for (int i = 0; i < points.size() - 1; i++) {
      int xDiff = abs(points[i][0] - points[i + 1][0]);
      int yDiff = abs(points[i][1] - points[i + 1][1]);
      
      int diagonalMove = min(xDiff, yDiff);
      o += diagonalMove;

      // Move vertically
      o += yDiff - diagonalMove;

      // Move horizontally
      o += xDiff - diagonalMove;
    }

    return o;
  }
};