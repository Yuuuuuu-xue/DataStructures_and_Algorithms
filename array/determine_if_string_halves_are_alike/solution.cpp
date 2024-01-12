#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool halvesAreAlike(string s) {
    int n = s.size();
    int numVowels = 0;
    unordered_set<int> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < n / 2; i++) {
      if (vowels.find(s[i]) != vowels.end()) {
        numVowels ++;
      }
    }

    for (int i = n / 2; i < n; i++) {
      if (vowels.find(s[i]) != vowels.end()) {
        numVowels --;
        if (numVowels < 0) {
          return false;
        }
      }
    }

    return numVowels == 0;
  }
};