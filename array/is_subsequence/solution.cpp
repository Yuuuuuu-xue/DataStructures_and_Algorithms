#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isSubsequence(string s, string t) {
    int currS = 0;
    int currT = 0;
    int n = s.size();
    int m = t.size();
    while (currS < n && currT < m) {
      if (s[currS] == t[currT]) {
        currS ++;
      }
      currT ++;
    }

    return currS == n;
  }
};