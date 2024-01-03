#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numberOfBeams(vector<string>& bank) {
    int firstRow = -1;
    int secondRow = -1;
    int o = 0;
    for (string& row : bank) {
      int curr = 0;
      for (char c : row) {
        if (c == '1') {
          curr++;
        }
      }

      if (curr == 0) {
        continue;
      }

      if (firstRow == -1) {
        firstRow = curr;
      } else if (secondRow == -1) {
        secondRow = curr;
        o += firstRow * secondRow;
      } else {
        firstRow = secondRow;
        secondRow = curr;
        o += firstRow * secondRow;
      }
    }

    return o;
  }
};