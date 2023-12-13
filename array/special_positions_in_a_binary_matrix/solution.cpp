#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numSpecial(vector<vector<int>>& mat) {
    int o = 0;
    for (int i = 0; i < mat.size(); i++) {

      int j;
      int rowCount = 0;
      for (int k = 0; k < mat[0].size(); k++) {
        if (mat[i][k] == 1) {
          rowCount ++;
          j = k;
          if (rowCount >= 2) {
            break;
          }
        }
      }

      if (rowCount == 1) {
        int c = 0;
        for (int i = 0; i < mat.size(); i++) {
          if (mat[i][j] == 1) {
            c ++;

            if (c >= 2) {
              break;
            }
          }
        }

        if (c == 1) {
          o++;
        }
      }
    }
    return o;
  }
};