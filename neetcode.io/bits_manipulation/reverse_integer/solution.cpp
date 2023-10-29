#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int reverse(int x) {
    unsigned long long o = 0;
    bool isPositive = x >= 0;

    int curr = abs(x);

    while (curr > 0) {
      int lastDigit = curr % 10;
      o = (o * 10 + lastDigit);
      // Out of the range
      if ((isPositive && o > INT_MAX) || (!isPositive && o > (unsigned long long)INT_MAX + 1)) {
        return 0;
      }
      curr /= 10;
    }
    return (isPositive ? 1 : -1) * (int)o;
  }
};