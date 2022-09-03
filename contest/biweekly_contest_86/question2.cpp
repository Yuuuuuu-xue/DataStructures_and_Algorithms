#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isStrictlyPalindromic(int n) {
    for (int b = 2; b <= n - 2; b++) {
      string base = "";
      int x = n;
      while (x >= n) {
        base += to_string(x % b);
        x = x / b;
      }
      base += to_string(x);
      // Determine if palindrome
      int i = 0;
      int j = base.size() - 1;
      while (i < j) {
        if (base[i++] != base[j--]) return false;
      }
    }
    return true;
  }
};