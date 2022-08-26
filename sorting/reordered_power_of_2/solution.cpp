#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool reorderedPowerOf2(int n) {
    string s = to_string(n);
    sort(s.begin(), s.end());

    // 2 ** 29 < MAX_INT and 2 ** 30 > MAX_INT
    for (int i = 0; i < 30; i++) {
      string powOf2 = to_string((int)pow(2, i));
      sort(powOf2.begin(), powOf2.end());
      if (s == powOf2) return true;
    }
    return false;
  }
};