#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxWidthOfVerticalArea(vector<vector<int>>& points) {
    sort(points.begin(), points.end(), [](const vector<int>& v1, const vector<int>& v2) {
      return v1[0] < v2[0];
    });

    int o = 0;
    for (int i = 0; i < points.size() - 1; i++) {
      o = max(o, points[i + 1][0] - points[i][0]);
    }
    return o;
  }
};