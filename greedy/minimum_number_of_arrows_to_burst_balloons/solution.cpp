#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int findMinArrowShots(vector<vector<int>>& points) {
    sort(points.begin(), points.end(), [](const std::vector<int>& p1, const std::vector<int>&p2) {
      return p1[1] < p2[1];
    });

    int i = 0;
    int o = 0;
    int curr = 0;
  
    while (i < points.size()) {
      o += 1;
      curr = points[i][1];

      // Increment i until it cannot be brusted
      while (i < points.size() && points[i][0] <= curr) {
        i ++;
      }
    }

    return o;
  }
};