#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> partitionLabels(string s) {
    unordered_map<char, pair<int, int>> m;
    for (int i = 0; i < s.size(); i++) {
      if (m.find(s[i]) == m.end()) {
        m[s[i]] = make_pair(i, i);
      } else {
        m[s[i]].second = i;
      }
    }

    vector<int> o;
    int i = 0;
    while (i < s.size()) {
      int left = i;
      int right = m[s[i]].second;
      while (i <= right) {
        right = max(right, m[s[i]].second);
        i ++;
      }
      o.push_back(right - left + 1);
    }

    return o;
  }
};