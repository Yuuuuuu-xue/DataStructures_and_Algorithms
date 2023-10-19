#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool backspaceCompare(string s, string t) {
    int i = s.size() - 1;
    int j = t.size() - 1;

    while (i >= 0 || j >= 0) {
      // Update i until first non delete character
      int currDeleteCount = 0;
      while (i >= 0 && (s[i] == '#' || currDeleteCount > 0)) {
        if (s[i] == '#') {
          currDeleteCount ++;
        } else {
          currDeleteCount --;
        }
        i --;
      }

      // Update j until first non delete character
      currDeleteCount = 0;
      while (j >= 0 && (t[j] == '#' || currDeleteCount > 0)) {
        if (t[j] == '#') {
          currDeleteCount ++;
        } else {
          currDeleteCount --;
        }
        j --;
      }

      if (i >= 0 && j >= 0 && s[i] != t[j]) {
        return false;
      }

      // If i >= 0 and j < 0 or i < 0 and j >= 0, then we can return false since one has a non empty character and other one is empty already
      if ((i >= 0 && j < 0) || (i < 0 && j >= 0)) {
        return false;
      }
      i--;
      j--;
    }

    return true;
  }
};