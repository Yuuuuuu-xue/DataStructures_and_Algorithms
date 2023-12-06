#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int totalMoney(int n) {
    int o = 0;
    int i = 0;
    while (1) {
      if (n <= 0) {
        return o;
      }
      for (int j = 1; j <= 7; j++) {
        if (n <= 0) {
          return o;
        }
        o += i + j;
        n --;
      }
      i ++;
    }
    return o;
  }
};