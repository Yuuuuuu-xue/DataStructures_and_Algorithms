#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> sequentialDigits(int low, int high) {
    vector<int> o;
    for (int i = 1; i <= 9; i++) {
      int curr = i;
      int next = curr + 1;
      while (curr <= high) {
        if (curr >= low) {
          o.push_back(curr);
        }
        curr = curr * 10 + next;
        next ++;
        if (next >= 11) {
          break;
        }
      }
    }

    sort(o.begin(), o.end());
    return o;
  }
};