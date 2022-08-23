#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string removeDigit(string number, char digit) {
    int o = -1;
    for (int i = 0; i < number.size(); i++) {
      if (number[i] == digit) {
        o = i;
        if (i == number.size() - 1 || number[i] < number[i + 1]) break;
      }
    }

    // return the substring
    return number.substr(0, o) + number.substr(o + 1, number.size() - o - 1);
  }
};