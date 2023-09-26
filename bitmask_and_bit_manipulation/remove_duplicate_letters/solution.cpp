#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string removeDuplicateLetters(string s) {
    vector<int> counts(26, 0);
    for (char c : s) counts[c - 'a'] ++;
    int used = 0;

    string o = "";
    for (char c : s) {
      int i = c - 'a';
      counts[i] --;
      if ((used & (1 << i)) == 0) {
        used |= (1 << i);
        while (o.size() && o.back() > c && counts[o.back() - 'a']) {
          used &= ~(1 << (o.back() - 'a'));
          o.pop_back(); 
        }
        o.push_back(c);
      }
    }

    return o;
  }
};