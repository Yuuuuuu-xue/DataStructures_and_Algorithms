#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string decodeAtIndex(string s, int k) {
    long decodeSize = 0;
    int i = 0; 
    for (; decodeSize < k; i++) {
      if (isdigit(s[i])) {
        decodeSize *= s[i] - '0';
      } else {
        decodeSize += 1;
      }
    }
    i--;
    for (; i >= 0; i--) {
      if (isdigit(s[i])) {
        decodeSize /= s[i] - '0';
        if (decodeSize > 0) {
          k %= decodeSize;
        }
      } else {
        if (k == 0 || decodeSize == k) {
          return string(1, s[i]);
        }
        decodeSize --;
      }
    }
    return s;
  }
};