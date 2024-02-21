#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int rangeBitwiseAnd(int left, int right) {
    while (right > left) {
      right &= right - 1;
    }
    return right;
  }
};