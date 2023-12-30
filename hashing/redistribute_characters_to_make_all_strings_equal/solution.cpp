#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool makeEqual(vector<string>& words) {
    unordered_map<char, int> m;
    for (string& word : words) {
      for (char c : word) {
        if (m.find(c) == m.end()) {
          m[c] = 1;
        } else {
          m[c] ++;
        }
      }
    }

    for (auto& p : m) {
      if (p.second % words.size() != 0) {
        return false;
      }
    }

    return true;
  }
};