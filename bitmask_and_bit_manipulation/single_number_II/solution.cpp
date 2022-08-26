#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int singleNumber(vector<int>& nums) {
    int mask1 = 0;
    int mask2 = 0;
    for (int num : nums) {
      mask1 = (mask1 ^ num) & ~mask2;
      mask2 = (mask2 ^ num) & ~mask1;
    }
    return mask1;
  }
};
