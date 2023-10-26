#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    for (int i = 0; i < n / 2; i++) {
      int maxJ = n - i - 1;
      // cout << i << " " << maxJ << "\n";
      for (int j = i; j < maxJ; j++) {
        // cout << "(" << i << ", " << j << "), (" << j << ", " << maxJ << "), (" << maxJ << ", " << maxJ - j + i << "), (" << maxJ - j + i << ", " << i << ")\n";
        // Top left and move right
        int first = matrix[i][j];
        // Top right and move down and row = last row
        int second = matrix[j][maxJ];
        // Bottom right and move left
        int third = matrix[maxJ][maxJ - j + i];
        // Bottom left and move up
        int fourth = matrix[maxJ - j + i][i];

        matrix[i][j] = fourth;
        matrix[j][maxJ] = first;
        matrix[maxJ][maxJ - j + i] = second;
        matrix[maxJ - j + i][i] = third;
      }
    }
  }
};

// [[1,2,3,4,5],[6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20],[21,22,23,24,25]]
