#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minOperations(string s) {
    int numOperationsZero = 0;
    int numOperationsOne = 0;

    for (int i = 0; i < s.size(); i++) {
      if (i % 2 == 0) {
        if (s[i] == '0') {
          numOperationsOne ++;
        } else {
          numOperationsZero ++;
        }
      } else {
        if (s[i] == '0') {
          numOperationsZero ++;
        } else {
          numOperationsOne ++;
        }
      }
    }

    return min(numOperationsZero, numOperationsOne);
  }
};