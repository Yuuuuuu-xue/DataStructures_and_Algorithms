#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  void reverseString(vector<char>& s, int left, int right) {
    while (left < right) {
      char c = s[left];
      s[left++] = s[right];
      s[right--] = c;
    }
  }

public:
  void reverseWords(vector<char>& s) {
    // Reverse the input string
    reverseString(s, 0, s.size() - 1);
    int left = 0;
    int right = 0;
    while (right < s.size()) {
      // Get the space
      while (right < s.size() && s[right] != ' ') right ++;
      // Now left to right - 1 will be the word to be reversed
      reverseString(s, left, right - 1);
      right ++;
      left = right;
    }
  }
};