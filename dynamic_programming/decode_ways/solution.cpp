#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numDecodings(string s) {
    if (s[0] == '0') return 0;
    int prev = 1;
    int prevPrev = 1;
    for (int i = 1; i < s.size(); i++) {
      int curr = 0;
      // Only valid is 10 and 20
      if (s[i] == '0') {
        if (s[i - 1] == '0' || s[i - 1] > '2') return 0;
      } else {
        curr += prev;
      }

      // Prev character is 1 or 2 (and current character <= 6)
      if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')) curr += prevPrev;
      prevPrev = prev;
      prev = curr;
    }
    return prev;
  }
};