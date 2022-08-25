#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    unordered_map<int, int> m;
    for (char c : magazine) m[c]++;
    for (char c : ransomNote) {
      if (m[c]-- <= 0) return false;
    }
    return true;
  }
};
