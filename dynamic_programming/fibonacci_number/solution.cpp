#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int fib(int n) {
    if (n == 0) return 0;
    int p1 = 0;
    int p2 = 1;
    for (int i = 2; i <= n; i++) {
      int temp = p2;
      p2 += p1;
      p1 = temp;
    }
    return p2;
  }
};