#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void setZeroes(vector<vector<int>>& matrix) {
    unordered_set<int> rowSet;
    unordered_set<int> colSet;
    for (int i = 0; i < matrix.size(); i++) {
      for (int j = 0; j < matrix[0].size(); j ++) {
        if (matrix[i][j] == 0) {
          rowSet.insert(i);
          colSet.insert(j);
        }
      }
    }

    for (int rowI : rowSet) {
      for (int j = 0; j < matrix[0].size(); j++) {
        matrix[rowI][j] = 0;
      }
    }

    for (int colJ : colSet) {
      for (int i = 0; i < matrix.size(); i++) {
        matrix[i][colJ] = 0;
      }
    }
  }
};