#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxScore(string s) {
    int numZeros = 0;
    for (char c : s) {
      if (c == '0') {
        numZeros ++;
      }
    }

    int currNumZeros = 0;
    int o = 0;
    for (int i = 0; i < s.size() - 1; i++) {
      if (s[i] == '0') {
        currNumZeros ++;
      }
      int numOnes = s.size() - numZeros - (i + 1 - currNumZeros);
      // cout << numOnes << "\n";
      o = max(o, currNumZeros + numOnes);
    }
    return o;
  }
};