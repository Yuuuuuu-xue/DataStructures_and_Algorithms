#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> plusOne(vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; i--) {
      if (digits[i] == 9) {
        digits[i] = 0;
      } else {
        digits[i] ++;
        return digits;
      }
    }
    digits.insert(digits.begin(), 1);
    return digits;
  }
};