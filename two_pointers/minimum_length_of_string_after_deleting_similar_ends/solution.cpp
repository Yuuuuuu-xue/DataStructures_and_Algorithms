#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minimumLength(string s) {
    if (s.size() == 1) {
      return 1;
    }

    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
      if (s[i] != s[j]) {
        return j - i + 1;
      }
      // Remove the same prefix
      int curr = s[i];
      while (i <= j && s[i] == curr) {
        i++;
      }

      // Remove the same suffix
      while (j >= i && s[j] == curr) {
        j--;
      }
    }
    if (i == j) {
        return 1;
    }
    return 0;
  }
};
