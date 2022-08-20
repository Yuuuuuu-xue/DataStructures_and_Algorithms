#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minimumRecolors(string blocks, int k) {
    int numWhite = 0;
    // First window
    for (int i = 0; i < k; i++) {
      if (blocks[i] == 'W') numWhite ++;
    }
    int o = numWhite;
    for (int i = k; i < blocks.size(); i++) {
      if (blocks[i - k] == 'W') numWhite --;
      if (blocks[i] == 'W') numWhite ++;
      o = min(o, numWhite);
    }
    return o;

  }
};