#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minimumDeletions(string s) {
    int endWithA = 0;
    int endWithB = 0;
    if (s[0] == 'a') endWithB ++;
    else endWithA ++;

    for (int i = 1; i < s.size(); i++) {
      if (s[i] == 'a') {
        // endWithA do not change
        endWithB ++;
      } else {
        // Delete current A
        endWithA ++;
        // endB can take either previous end with B or A and append current B
        endWithB = min(endWithA - 1, endWithB);
      }
    }
    return min(endWithA, endWithB);
  }
};