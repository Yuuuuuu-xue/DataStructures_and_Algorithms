#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string sortVowels(string s) {
    unordered_map<char, int> m = {
      {'a', 0},
      {'e', 0},
      {'i', 0},
      {'o', 0},
      {'u', 0},
      {'A', 0},
      {'E', 0},
      {'I', 0},
      {'O', 0},
      {'U', 0}
    };

    for (char c : s) {
      if (m.find(c) != m.end()) {
        m[c] ++;
      }
    }

    vector<char> vowels = { 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u' };
    int vowelI = 0;

    for (int i = 0; i < s.size(); i++) {
      if (m.find(s[i]) != m.end()) {
        while (m[vowels[vowelI]] <= 0) {
          vowelI ++;
        }
        m[vowels[vowelI]] --;
        s[i] = vowels[vowelI];
      }
    }

    return s; 
  }
};