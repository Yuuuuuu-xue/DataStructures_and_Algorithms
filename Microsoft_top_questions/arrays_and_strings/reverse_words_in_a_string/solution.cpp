#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string reverseWords(string s) {
    string o = "";
    int right = s.size() - 1;
    while (right >= 0) {
      // Skip all the spaces
      while (right >= 0 && s[right] == ' ') right --;

      // Right points to the first non space character.
      int left = right;
      // Expand left until it reach to a space
      while (left >= 0 && s[left] != ' ') left --;

      if (left < right) {
        // left + 1 to right (both inclusive) will be a word and we can insert it
        // suppose we have hello, left = -1, right = 4, then starting at left + 1, with size right - left.
        o += s.substr(left + 1, right - left) + " ";
        // Update right = left
      }
      right = left;
    }
    cout << o << "\n";
    // Pop out last character if it is a space
    if (o.back() == ' ') {
      o.pop_back();
    }
    return o;
  }
};
