#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxLengthBetweenEqualCharacters(string s) {
    unordered_map<int, pair<int, int>> m;
    for (int i = 0; i < s.size(); i++) {
      if (m.find(s[i]) == m.end()) {
        m[s[i]] = make_pair(i, i);
      } else {
        m[s[i]].second = i; 
      }
    }

    int o = -1;
    for (auto& p : m) {
      o = max(o, p.second.second - p.second.first - 1);
    }
    return o;
  }
};