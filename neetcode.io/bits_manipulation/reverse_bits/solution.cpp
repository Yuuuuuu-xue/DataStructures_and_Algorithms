#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  uint32_t reverseBits(uint32_t n) {
    uint32_t o = 0;

    for (int x = 0; x < 32; x++) {
      // Get the rightmost bit
      int i = 1 & n;
      // Remove rightmost bit
      n = n >> 1;
      // Move to the left and put i as the rightmost bit
      o = (o << 1) | i;
    }
    return o;
  }
};