#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int secondsToRemoveOccurrences(string s) {
    int o = 0;
    int c = 0;
    string temp = s;
    do {
      c = 0;
      string t = "";
      int i = 0;
      // cout << temp << "\n";
      while (i < temp.size() - 1) {
        if (temp[i] == '0' && temp[i + 1] == '1') {
          c ++;
          t += "10";
          i += 2;
        } else {
          t += temp[i];
          i ++;
        }
      }
      if (i == temp.size() - 1) {
        t += temp[i];
      }
      o += 1;
      temp = t;
    } while (c != 0);
    
    if (o == 0) return o;
    return o - 1; 
  }
};