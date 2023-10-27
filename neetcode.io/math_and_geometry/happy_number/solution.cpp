#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isHappy(int n) {
    unordered_set<int> s;
    while (n != 1) {
      if (s.find(n) != s.end()) {
        return false;
      }

      s.insert(n);

      int x = 0;
      for (char c : to_string(n)) {
        x += pow(c - '0', 2);
      }
      n = x;
    }

    return true;
  }
};