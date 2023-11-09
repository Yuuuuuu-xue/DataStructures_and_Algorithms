#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int countHomogenous(string s) {
    int o = 0;
    int currS = 1;
    int mod = 1e9 + 7;
    char c = s[0];
    for (int i = 1; i < s.size(); i++) {
      if (s[i] != c) {
        o += currS;
        currS = 1;
        c = s[i];
      } else {
        o = (o + currS) % mod;
        currS ++;
      }
    }

    return (o + currS) % mod;
  }
};
