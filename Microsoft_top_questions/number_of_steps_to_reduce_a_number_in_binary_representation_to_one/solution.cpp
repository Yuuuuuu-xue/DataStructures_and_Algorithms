#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numSteps(string s) {
    int o = 0;
    while (s != "1") {
      if (s.back() == '0') {
        s.pop_back();
      } else {
        // Perform add 1
        s[s.size() - 1] = '0';
        bool needToInsert = true;
        for (int i = s.size() - 2; i >= 0; i--) {
          if (s[i] == '0') {
            s[i] = '1';
            needToInsert = false;
            break;
          } else {
            s[i] = '0';
          }
        }
        if (needToInsert) {
          s.insert(0, 1, '1');
        }
      }
      o ++;
    }
    return o;
  }
};