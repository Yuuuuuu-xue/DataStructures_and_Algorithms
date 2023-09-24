#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  double champagneTower(int poured, int query_row, int query_glass) {
    unordered_map<int, double> dp;
    if (query_row == 0) {
      return poured >= 1 ? 1 : poured;
    }

    dp[0] = max(0, poured - 1);

    for (int row = 1; row <= query_row; row ++) {
      for (int col = 0; col <= row; col++) {
        double currPoured = 0;
        if (dp.find((row - 1) * query_row + col - 1) != dp.end()) {
          currPoured += (dp[(row - 1) * query_row + col - 1] / 2);
        }
        if (dp.find((row - 1) * query_row + col) != dp.end()) {
          currPoured += (dp[(row - 1) * query_row + col] / 2);
        }
        
        if (row == query_row && col == query_glass) {
          return min(1.0, currPoured);
        }

        dp[row * query_row + col] = max(0.0, currPoured - 1);
      }
    }

    return -1;
  }
};
