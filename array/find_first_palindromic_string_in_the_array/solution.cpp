#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isPalindrome(string& word) {
    int n = word.size();
    if (n == 0 || n == 1) {
      return true;
    }
    for (int i = 0; i < n / 2; i++) {
      if (word[i] != word[n - 1 - i]) {
        return false;
      }
    }
    return true;
  }
  
  string firstPalindrome(vector<string>& words) {
    for (string& word : words) {
      if (isPalindrome(word)) {
        return word;
      }
    }
    return "";
  }
};