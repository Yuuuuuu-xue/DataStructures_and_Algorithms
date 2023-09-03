#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool canJump(vector<int>& nums) {
    int m = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      if (i > m) {
        return false;
      }
      m = max(m, i + nums[i]);
    }

    return true;
  }
};