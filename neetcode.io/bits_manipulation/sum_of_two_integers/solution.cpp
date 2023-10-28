#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int getSum(int a, int b) {
    while (b != 0) {
      uint32_t carryOver = a & b;
      a ^= b;
      b = carryOver << 1; 
    }
    return a;
  }
};