#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string destCity(vector<vector<string>>& paths) {
    unordered_set<string> s;
    for (vector<string>& path : paths) {
      s.insert(path[1]);
    }

    for (vector<string>& path : paths) {
      s.erase(path[0]);
    }

    return *s.begin();
  }
};