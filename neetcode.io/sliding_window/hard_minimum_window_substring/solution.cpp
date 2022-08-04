#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string minWindow(string s, string t) {
    if (s.size() < t.size()) return "";
    unordered_map<char, int> m;
    for (char c : t) m[c] ++;
    int i = 0;
    int oSize = s.size() + 1;
    string o = "";
    int numMatched = 0;
    for (int j = 0; j < s.size(); j++) {
      // Move the window
      if (m.find(s[j]) != m.end()) {
        m[s[j]] --;
        if (m[s[j]] >= 0) numMatched ++;
      }
      // Shrink the window
      if (numMatched == t.size()) {
        while (i <= j) {
          if (m.find(s[i]) != m.end()) {
            if (m[s[i]] < 0) {
              m[s[i]] ++;              
            } else {
              break;
            }
          }
          i++;
        }
        if (j - i + 1 < oSize) {
          oSize = j - i + 1;
          o = s.substr(i, j + 1);
        }
      }
    }
    return o;
  }
};