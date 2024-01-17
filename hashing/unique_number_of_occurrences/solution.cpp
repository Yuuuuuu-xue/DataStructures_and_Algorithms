#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> m;
    for (int num : arr) {
      if (m.find(num) == m.end()) {
        m[num] = 1;
      } else {
        m[num] ++;
      }
    }

    unordered_set<int> s;
    for (auto& p : m) {
      if (s.find(p.second) == s.end()) {
        s.insert(p.second);
      } else {
        return false;
      }
    }

    return true;
  }
};