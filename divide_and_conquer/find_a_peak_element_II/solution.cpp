#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int startCol = 0;
    int endCol = mat[0].size();
    while (startCol < endCol) {
      int midCol = (startCol + endCol) / 2;
      int maxRow = 0;
      
      for (int i = 1; i< mat.size(); i++) {
        if (mat[i][midCol] > mat[maxRow][midCol]) maxRow = i;
      }

      // Verify the neighbors
      bool greaterTop = midCol - 1 >= startCol && mat[maxRow][midCol] < mat[maxRow][midCol - 1];
      bool greaterBottom = midCol + 1 <= endCol && mat[maxRow][midCol] < mat[maxRow][midCol + 1];

      if (!greaterTop && !greaterBottom) {
        return { maxRow, midCol };
      } else if (greaterTop) {
        // Then the answer can occur at the bottom
        endCol = midCol - 1;
      } else {
        startCol = midCol + 1;
      }
    }
    // Should not reach here 
    return { -1, -1 };
  }
};
