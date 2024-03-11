#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string customSortString(string order, string s) {
    unordered_map<char, int> m;
    for (char c : s) {
      if (m.find(c) == m.end()) {
        m[c] = 1;
      } else {
        m[c] ++;
      }
    }

    string o = "";
    for (char c : order) {
      if (m.find(c) != m.end()) {
        o += string(m[c], c);
        m.erase(c);
      }
    }

    for (auto &p : m) {
      o += string(p.second, p.first);
    }

    return o;
  }
};
