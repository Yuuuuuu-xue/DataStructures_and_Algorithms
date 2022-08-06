#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int lengthOfLongestSubstringKDistinct(string s, int k) {
    unordered_map<char, int> m;
    int i = 0;
    int o = 0;
    for (int j = 0; j < s.size(); j++) {
      if (m.find(s[j]) != m.end() || m.size() < k) m[s[j]] ++;
      else {
        o = max(o, j - i);
        while(i < j && m.size() >= k) {
          m[s[i]] --;
          if (m[s[i]] == 0) m.erase(s[i]);
          i++;
        }
        m[s[j]] ++;
      }
    }
    return max(o, (int)s.size() - i);
  }
};