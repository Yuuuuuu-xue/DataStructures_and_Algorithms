#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int pivotInteger(int n) {
    if (n <= 1) {
      return -1;
    }

    int s = n * (n + 1) / 2;
  
    int currSum = 0;
    for (int i = 0; i <= n; i++) {
      currSum += i;
      if (currSum == s - currSum + i) {
        return i;
      }
    }

    return -1;
  }
};
