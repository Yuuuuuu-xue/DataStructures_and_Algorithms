#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool checkValidString(string s) {
    vector<int> currLeftPar;
    vector<int> currAst;
    int n = s.size();

    for (int i = 0; i < n; i++) {
      if (s[i] == '(') {
        currLeftPar.push_back(i);
      } else if (s[i] == '*') {
        currAst.push_back(i);
      } else {
        if (currLeftPar.size() > 0) {
          currLeftPar.pop_back();
        } else if (currAst.size() > 0) {
          currAst.pop_back();
        } else {
          return false;
        }
      }
    }

    while (currLeftPar.size() > 0) {
      int currAstIndex = -1;
      // '*' --> '' until the loop exists, it may '*' --> ')'
      while (currAst.size() > 0) {
        currAstIndex = currAst.back();
        currAst.pop_back();
        if (currAstIndex > currLeftPar.back()) {
          break;
        }
      }

      if (currAstIndex == -1 || currAstIndex < currLeftPar.back()) {
        return false;
      }

      // '*' --> ')'
      currLeftPar.pop_back();
    }

    return true;
  }
};