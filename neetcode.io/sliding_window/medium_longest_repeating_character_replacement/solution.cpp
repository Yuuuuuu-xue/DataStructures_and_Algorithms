#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int characterReplacement(string s, int k) {
    int i = 0;
    unordered_map<char, int> m;
    int maxOccurrence = 0;
    int j = 0;
    for (; j < s.size(); j++) {
      m[s[j]] ++;
      if (m[s[j]] > maxOccurrence) maxOccurrence = m[s[j]];
      if (j - i + 1 - maxOccurrence > k) {
        m[s[i]] --;
        i++;
      }
    }
    return j - i;
  }
};