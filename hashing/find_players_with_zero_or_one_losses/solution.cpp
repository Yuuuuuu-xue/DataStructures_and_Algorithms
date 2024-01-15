#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    unordered_map<int, int> m;
    for (vector<int>& match : matches) {
      if (m.find(match[0]) == m.end()) {
        m[match[0]] = 0;
      }

      if (m.find(match[1]) == m.end()) {
        m[match[1]] = 1;
      } else {
        m[match[1]] ++;
      }
    }

    vector<vector<int>> o = {{}, {}};
    for (auto& p : m) {
      if (p.second == 0) {
        o[0].push_back(p.first);
      } else if (p.second == 1) {
        o[1].push_back(p.first);
      }
    }

    sort(o[0].begin(), o[0].end());
    sort(o[1].begin(), o[1].end());
    return o;
  }
};