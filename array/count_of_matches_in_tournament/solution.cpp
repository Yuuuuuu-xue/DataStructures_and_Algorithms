#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numberOfMatches(int n) {
    int o = 0;
    while (n != 1) {
      o += n / 2;
      if (n % 2 != 0) {
        n ++;
      }
      n /= 2;
    }
    return o;
  }
};