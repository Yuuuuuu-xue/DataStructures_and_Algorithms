#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isPowerOfTwo(int n) {
    if (n <= 0) {
      return false;
    }
    double x = log2(n);
    return x == (int)x;
  }
};
