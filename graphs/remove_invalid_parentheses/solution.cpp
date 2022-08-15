#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  bool isValid(string s) {
    int o = 0;
    for (char c : s) {
      if (c == '(') o ++;
      else if (c == ')') o --;

      // If o is negative, then we have ( with no matching
      if (o < 0) return false;
    }
    return o == 0;
  }

public:
  vector<string> removeInvalidParentheses(string s) {
    queue<string> q;
    unordered_set<string> seen;
    q.push(s);
    seen.insert(s);
    while (!q.empty()) {
      int s = q.size();
      while (s--) {
        // If we have matching, then check all the level
        if (isValid(q.front())) {
          vector<string> o;
          o.push_back(q.front());
          q.pop();
          while (s--) {
            if (isValid(q.front())) o.push_back(q.front());
            q.pop();
          }
          return o;
        }

        // Remove a parentheses
        for (int i = 0; i < q.front().size(); i++) {
          // If we have (())) and i = 2
          if (q.front()[i] == '(' || q.front()[i] == ')') {
            string newS = q.front().substr(0, i) + q.front().substr(i + 1, q.front().size() - i - 1);
            if (seen.find(newS) == seen.end()) {
              q.push(newS);
              seen.insert(newS);
            }
          }
        }
        q.pop();
      }
    }
    return {};
  }
};