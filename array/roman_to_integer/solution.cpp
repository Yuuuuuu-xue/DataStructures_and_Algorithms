#include <bits/stdc++.h>;

using namespace std;

class Solution {
public:
  unordered_map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

  int romanToInt(string s) {
    int prev = -1;
    int o = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
      if (m[s[i]] < prev) o -= m[s[i]];
      else o += m[s[i]];
      prev = m[s[i]];
    }
    return o;
  }
};
