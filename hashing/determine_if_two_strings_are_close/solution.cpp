#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool closeStrings(string word1, string word2) {
    unordered_map<char, int> m1;
    unordered_map<char, int> m2;

    for (char c : word1) {
      if (m1.find(c) == m1.end()) {
        m1[c] = 1;
      } else {
        m1[c] ++;
      }
      m2[c] = 0;
    }

    for (char c : word2) {
      if (m2.find(c) == m2.end()) {
        // Some character in m1 but not in m2
        return false;
      } else {
        m2[c] ++;
      }
    }

    // Occurrence to number of char with this occurrence
    unordered_map<int, int> m4;
    for (auto& p : m2) {
      if (m1.find(p.first) == m1.end()) {
        // Some character in m2 but not in m1
        return false;
      }
      if (m4.find(p.second) == m4.end()) {
        m4[p.second] = 1;
      } else {
        m4[p.second] ++;
      }
    }

    unordered_map<int, int> m3;
    for (auto& p : m1) {
      if (m3.find(p.second) == m3.end()) {
        m3[p.second] = 1;
      } else {
        m3[p.second] ++;
      }
    }

    for (auto& p : m3) {
      if (m4.find(p.first) == m4.end()) {
        return false;
      }

      if (p.second != m4[p.first]) {
        return false;
      }

      m4.erase(p.first);
    }

    return m4.size() == 0;
  }
};