#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string reverseWords(string s) {
    vector<char> stack;
    s.push_back(' ');
    string o = "";
    for (char c : s) {
      if (c != ' ') {
        stack.push_back(c);
      } else {
        while (stack.size() > 0) {
          o.push_back(stack.back());
          stack.pop_back();
        }
        o.push_back(' ');
      }
    }

    o.pop_back();
    return o;
  }
};