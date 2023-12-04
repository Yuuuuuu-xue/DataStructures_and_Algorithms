#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string largestGoodInteger(string num) {
    char c = '.';
    for (int i = 0; i < num.size() - 2; i++) {
      if (num[i] == num[i + 1] && num[i + 1] == num[i + 2]) {
        c = max(c, num[i]);
      }
    }

    if (c != '.') {
      return std::string(3, c);
    }
    return "";
  }
};