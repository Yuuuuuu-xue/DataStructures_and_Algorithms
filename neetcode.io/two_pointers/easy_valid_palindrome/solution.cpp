#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;
    while (left < right) {
      while (left < s.size() && !iswalnum(s[left])) {
        left ++;
      }
      while (right >= 0 && !iswalnum(s[right])) {
        right --;
      }
      if (left < right && tolower(s[left]) != tolower(s[right])) {
        cout << left << " " << right << "\n";
        return false;
      }
      left ++;
      right --;
    }
    return true;
  }
};