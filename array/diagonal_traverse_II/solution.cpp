#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
    unordered_map<int, vector<int>> m;

    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0; j < nums[i].size(); j++) {
        if (m.find(i + j) == m.end()) {
          m[i + j] = { nums[i][j] };
        } else {
          m[i + j].push_back(nums[i][j]);
        }
      }
    }

    vector<int> o;
    int k = 0;
    while (m.find(k) != m.end()) {
      for (int i = m[k].size() - 1; i >= 0; i--) {
        o.push_back(m[k][i]);
      }
      k ++;
    }

    return o;
  }
};