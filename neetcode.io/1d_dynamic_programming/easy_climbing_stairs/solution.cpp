#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int climbStairs(int n) {
    int prevPrev = 1;
    int prev = 2;
    for (int i = 3; i <= n; i++) {
      int curr = prevPrev + prev;
      prevPrev = prev;
      prev = curr;
    }
    if (n == 1) {
      return prevPrev;
    }
    return prev;
  }
};