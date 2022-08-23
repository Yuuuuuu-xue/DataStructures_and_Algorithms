#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int arraySign(vector<int>& nums) {
    int numNegatives = 0;
    for (int num : nums) {
      if (num == 0) return 0;
      else if (num < 0) numNegatives ++;
    }
    return numNegatives % 2 == 0 ? 1 : -1;
  }
};