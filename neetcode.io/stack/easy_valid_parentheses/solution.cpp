#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isValid(string s) {
    stack<char> bracketStack;
    for (char c : s) {
      if (c == '(' || c == '{' || c == '[') {
        bracketStack.push(c);
      } else {
        if (bracketStack.empty()) return false;
        char lastOpenBracket = bracketStack.top();
        bracketStack.pop();
        if ((lastOpenBracket == '{' && c != '}') || 
            (lastOpenBracket == '(' && c != ')') ||
            (lastOpenBracket == '[' && c != ']')) {
          return false;
        }
      }
    }
    return bracketStack.empty();
  }
};