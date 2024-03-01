#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string maximumOddBinaryNumber(string s) {
    int numOnes = 0;
    for (char c : s) {
      if (c == '1') {
        numOnes ++;
      }
    }

    return string(numOnes - 1, '1') + string(s.size() - numOnes, '0') + '1';
  }
};
