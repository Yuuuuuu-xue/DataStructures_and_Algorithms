#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> findMatrix(vector<int>& nums) {
    unordered_map<int, int> m;
    int maxOccurrence = 0;

    for (int num : nums) {
      if (m.find(num) == m.end()) {
        m[num] = 1;
      } else {
        m[num] ++;
      }
      maxOccurrence = max(maxOccurrence, m[num]);
    }

    vector<vector<int>> o(maxOccurrence, vector<int>());
    for (auto& p : m) {
      for (int i = 0; i < p.second; i++) {
        o[i].push_back(p.first);
      }
    }
    return o;
  }
};