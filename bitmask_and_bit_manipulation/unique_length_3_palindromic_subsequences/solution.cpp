#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
  int countPalindromicSubsequence(string s) {
    unordered_map<char, pair<int, int>> m;

    for (int i = 0; i < s.size(); i ++) {
      if (m.find(s[i]) == m.end()) {
        m[s[i]] = make_pair(i, i);
      } else {
        m[s[i]].second = i;
      }
    }

    int o = 0;
    for (int i = 0; i < 26; i++) {
      char c = i + 'a';
      int mask = 0;
      if (m.find(c) != m.end()) {
        for (int j = m[c].first + 1; j < m[c].second; j++) {
          int k = s[j] - 'a';
          mask |= (1 << k);
        }

        for (int j = 0; j < 26; j++) {
          if (mask & (1 << j)) {
            o++;        
          }
        }
      }
    }

    return o;
  }
};