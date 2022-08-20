#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string shiftingLetters(string s, vector<vector<int>>& shifts) {
    // dummy index 0
    vector<int> lst(s.size() + 1);
    for (vector<int>& shift : shifts) {
      lst[shift[1] + 1] += shift[2] == 1 ? 1 : -1;
      lst[shift[0]] -= shift[2] == 1 ? 1 : -1;
    }
    int currShift = 0;
    // Modify s from back
    for (int i = s.size() - 1; i >= 0; i--) {
      currShift += lst[i + 1];
      if (currShift > 26) currShift -= 26;
      else if (currShift < -26) currShift += 26;
      int t = s[i] + currShift;
      if (t > 122) t -= 26;
      else if (t < 97) {
        t += 26;
      }
      s[i] = t;
    }
    return s;
  }
};