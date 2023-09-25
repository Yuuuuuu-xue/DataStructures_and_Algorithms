#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  char findTheDifference(string s, string t) {
    int curr = 0;
    for (char c : s) {
      curr ^= c;
    }
    for (char c : t) {
      curr ^= c;
    }
    return curr;
  }
};