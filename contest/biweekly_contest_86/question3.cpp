#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

  void dfs(unordered_map<int, unordered_set<int>>& m1, unordered_map<int, int>& m2, int cols, int m, int n, int currCol, vector<int>& currSelectCols, int &o) {
    // A valid selection
    if (currSelectCols.size() == cols || currCol >= n) {
      int c = m;
      for (auto& p : m2) {
        if (p.second > 0) {
          c --;
        }
      }
      o = max(o, c);
      // cout << currSelectCols.size() << " " << cols << " " << currCol << " " << o << "\n";
    } else {
      for (int j = currCol; j < n; j++) {
        // Need to select currCol
        currSelectCols.push_back(j);
        for (int r : m1[j]) {
          // cout << "+ " << r << "\n";
          m2[r] --;
        }
        // Recursively find the next solution
        dfs(m1, m2, cols, m, n, j + 1, currSelectCols, o);
        // Backtrack
        currSelectCols.pop_back();
        for (int r : m1[j]) {
          // cout << "- " << r << "\n";
          m2[r] ++;
        }
      }
    }
  };

  int maximumRows(vector<vector<int>>& mat, int cols) {
    unordered_map<int, unordered_set<int>> m1;
    unordered_map<int, int> m2;
    for (int i = 0; i < mat.size(); i++) {
      for (int j = 0; j < mat[0].size(); j++) {
        if (mat[i][j] == 1) {
          m1[j].insert(i);
          m2[i] ++;
        }
      }
    }
    int o = 0;
    vector<int> lst;
    dfs(m1, m2, cols, mat.size(), mat[0].size(), 0, lst, o);
    return o;
  }
};