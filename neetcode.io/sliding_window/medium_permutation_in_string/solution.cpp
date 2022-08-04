#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool checkInclusion(string s1, string s2) {
    int s1Size = s1.size();
    if (s2.size() < s1Size) return false;
    int numMatched = 0;
    unordered_map<char, int> m;
    for (char c : s1) m[c] ++;
    for (int i = 0; i < s1Size; i++) {
      if (m.find(s2[i]) != m.end()) {
        m[s2[i]] --;
        if (m[s2[i]] >= 0) numMatched ++;
      }
    }
    if (numMatched == s1Size) return true;
    for (int i = s1Size; i < s2.size(); i++) {
      // Remove a character
      if (m.find(s2[i - s1Size]) != m.end()) {
        m[s2[i - s1Size]] ++;
        if (m[s2[i - s1Size]] > 0) numMatched --;
      }
      // Add a new character into the map
      if (m.find(s2[i]) != m.end()) {
        m[s2[i]] --;
        if (m[s2[i]] >= 0) numMatched ++;
      }
      if (numMatched == s1Size) return true;
    }
    return false;
  }
};