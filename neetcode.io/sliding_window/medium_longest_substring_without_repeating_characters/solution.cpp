#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int i = 0;
    int o = 0;
    unordered_map<char, int> m;
    for (int j = 0; j < s.size(); j++) {
      if (m.find(s[j]) != m.end() && m[s[j]] >= i) {
        o = max(o, j - i);
        i = m[s[j]] + 1;
      }
      m[s[j]] = j;
    }
    return max(o, (int)s.size() - i);
  }
};