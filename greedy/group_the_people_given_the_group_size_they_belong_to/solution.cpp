#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
    vector<vector<int>> o;
    unordered_map<int, vector<int>> m;
    for (int i = 0; i < groupSizes.size(); i++) {
      if (m.find(groupSizes[i]) == m.end()) {
        m[groupSizes[i]] = {};
      }
      m[groupSizes[i]].push_back(i);
      
      // Form a group
      if (m[groupSizes[i]].size() == groupSizes[i]) {
        o.push_back(m[groupSizes[i]]);
        m[groupSizes[i]].clear();
      }
    }

    return o;
  }
};