#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int compress(vector<char>& chars) {
    int o = 0;
    int left = 0;
    int right = 0;
    while (right < chars.size()) {
      // Increment right if all characters are same
      while (right < chars.size() && chars[left] == chars[right]) right ++;
      // chars[right] != chars[left], right - left = number of different characters
      chars[o++] = chars[left];
      if (right - left > 1) {
        for (char c : to_string(right - left)) chars[o ++] = c;
      }
      left = right;
    }
    return o;
  }
};