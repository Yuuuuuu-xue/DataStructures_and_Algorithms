#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minSteps(string s, string t) {
    unordered_map<char, int> m;

    for (char c : s) {
      if (m.find(c) == m.end()) {
        m[c] = 1;
      } else {
        m[c] ++;
      }
    }

    int o = 0;
    for (char c : t) {
      if (m.find(c) == m.end() || m[c] == 0) {
        o++;
      } else {
        m[c] --;
      }
    }

    return o;
  }
};