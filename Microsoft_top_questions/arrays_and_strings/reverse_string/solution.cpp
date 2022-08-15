#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;
    while (left < right) {
      char c = s[left];
      s[left++] = s[right];
      s[right--] = c;
    }
  }
};