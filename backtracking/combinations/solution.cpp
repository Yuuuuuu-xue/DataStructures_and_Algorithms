#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void solve(vector<vector<int>>& o, vector<int>& curr, int n, int i, int s) {
    if (s == 0) {
      o.push_back(curr);
      return;
    }

    if (i > n) {
      return;
    }

    for (int x = i; x <= n; x++) {
      curr.push_back(x);
      solve(o, curr, n, x + 1, s - 1);
      // backtrack
      curr.pop_back();
    }
  }
  
  vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> combinations;
    vector<int> curr;
    solve(combinations, curr, n, 1, k);
    return combinations;
  }
};