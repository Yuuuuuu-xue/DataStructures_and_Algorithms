#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i ++) {
      for (int j = 1; j < m; j++) {
        matrix[i][j] += matrix[i][j - 1];
      }
    }

    int o = 0;
    for (int j = 0; j < m; j++) {
      for (int k = j; k < m; k++) {
        unordered_map<int, int> sumMap;
        sumMap[0] = 1;
        int sum = 0;

        for (int i = 0; i < n; i++) {
          sum += matrix[i][k];
          if (j > 0) {
            sum -= matrix[i][j - 1];
          }
  

          if (sumMap.find(sum - target) != sumMap.end()) {
            o += sumMap[sum - target];
          }

          if (sumMap.find(sum) == sumMap.end()) {
            sumMap[sum] = 1;
          } else {
            sumMap[sum] ++;
          }
        }
      }
    }
    return o;
  }
};