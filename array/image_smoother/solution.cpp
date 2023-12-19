#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
    int n = img.size();
    int m = img[0].size();
    vector<vector<int>> smootherImg(n, vector<int>(m, 0));
    vector<vector<int>> directions = {
      {1, 1},
      {1, 0},
      {1, -1},
      {-1, 1},
      {-1, 0},
      {-1, -1},
      {0, 1},
      {0, -1},
      {0, 0}
    };

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int o = 0;
        int c = 0;
        for (vector<int>& direction : directions) {
          int x = i + direction[0];
          int y = j + direction[1];

          if (x >= 0 && x < n && y >= 0 && y < m) {
            o += img[x][y];
            c ++;
          }
        }
        smootherImg[i][j] = o / c;
      }
    }

    return smootherImg;
  }
};