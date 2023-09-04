#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int jump(vector<int>& nums) {
    if (nums.size() == 1) {
      return 0;
    }
    int m = 0;
    int prevM = nums[0];
    int numJumps = 0;
    for (int i = 1; i < nums.size(); i++) {
      // Need to take another jump
      if (i > prevM) {
        numJumps ++;
        prevM = m;
        m = i + nums[i];
      } else {
        m = max(m, i + nums[i]);
      }
    }
    return numJumps + 1;
  }
};